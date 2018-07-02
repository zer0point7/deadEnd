#include<bits/stdc++.h>
using namespace std;
int main()
{
string st;int ar[26];
memset(ar,0,sizeof(ar));
cin>>st;
for(i=0;i<st.length();i++)
ar[st[i]-'a']++;
for(i=0;i<st.length();i++)
cout<<st[i]<<" "<<ar[st[i]-'a']<<"\n";
}
