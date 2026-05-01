/*
 * XREFs of _lambda_82b9fb128b50da832dfc7c3793c19385_::operator() @ 0x1802643D0
 * Callers:
 *     ?AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z @ 0x18026455C (-AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x18017BED0 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall lambda_82b9fb128b50da832dfc7c3793c19385_::operator()(__int64 a1)
{
  signed int AppStateKey; // ebx
  LPCWSTR *v3; // rdx
  LSTATUS ValueW; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  HKEY hkey; // [rsp+60h] [rbp+18h] BYREF

  hkey = 0LL;
  AppStateKey = GetAppStateKey(**(const unsigned __int16 ***)a1, (unsigned __int16 *)0x20019, &hkey);
  if ( AppStateKey >= 0 )
  {
    v3 = *(LPCWSTR **)a1;
    pcbData = 4;
    ValueW = RegGetValueW(hkey, *v3, L"UseCustomTabsWhenInNewGroup", 0x18u, 0LL, &pvData, &pcbData);
    AppStateKey = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        AppStateKey = (unsigned __int16)ValueW | 0x80070000;
    }
    else
    {
      AppStateKey = 0;
      ***(_BYTE ***)(a1 + 8) = pvData != 0;
    }
  }
  if ( hkey )
    RegCloseKey(hkey);
  return (unsigned int)AppStateKey;
}
