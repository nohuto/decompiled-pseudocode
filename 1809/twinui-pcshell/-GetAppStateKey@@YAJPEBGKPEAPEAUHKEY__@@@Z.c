/*
 * XREFs of ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x1801331D0
 * Callers:
 *     _lambda_82b9fb128b50da832dfc7c3793c19385_::operator() @ 0x1801F39E8 (_lambda_82b9fb128b50da832dfc7c3793c19385_--operator().c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x1801F4810 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 * Callees:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180029F00 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002CFBC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1803A18C0 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 */

__int64 __fastcall GetAppStateKey(const unsigned __int16 *a1, unsigned __int16 *a2, PHKEY phkResult)
{
  REGSAM samDesired; // esi
  int v6; // eax
  void **v7; // r8
  unsigned int v8; // ebx
  void *v10; // rbx
  int StateHandle; // eax
  unsigned int v12; // edi
  CallerIdentity *v13; // rdi
  int StateRegKey; // r14d
  LSTATUS Key; // eax
  unsigned int v16; // esi
  CallerIdentity *v17[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HKEY hKey; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp+48h] BYREF

  v17[1] = (CallerIdentity *)-2LL;
  samDesired = (unsigned int)a2;
  *phkResult = 0LL;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = ParseAppUserModelId(a1, &pv, 0LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v17[0] = 0LL;
    v10 = pv;
    StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)pv, (const unsigned __int16 *)v17, v7);
    v12 = StateHandle;
    if ( StateHandle >= 0 )
    {
      hKey = 0LL;
      v13 = v17[0];
      StateRegKey = CallerIdentity::GetStateRegKey(v17[0], 0LL, (const unsigned __int16 *)samDesired, &hKey);
      if ( StateRegKey >= 0 )
      {
        if ( (samDesired & 4) != 0 )
          Key = RegCreateKeyExW(hKey, L"PersistedTabData", 0, 0LL, 0, samDesired, 0LL, phkResult, 0LL);
        else
          Key = RegOpenKeyExW(hKey, L"PersistedTabData", 0, samDesired, phkResult);
        v16 = Key;
        if ( Key )
        {
          if ( Key > 0 )
            v16 = (unsigned __int16)Key | 0x80070000;
          if ( hKey )
            RegCloseKey(hKey);
          if ( v13 )
            CloseState(v13);
          if ( v10 )
            CoTaskMemFree(v10);
          return v16;
        }
        else
        {
          if ( hKey )
            RegCloseKey(hKey);
          if ( v13 )
            CloseState(v13);
          if ( v10 )
            CoTaskMemFree(v10);
          return 0LL;
        }
      }
      else
      {
        if ( hKey )
          RegCloseKey(hKey);
        if ( v13 )
          CloseState(v13);
        if ( v10 )
          CoTaskMemFree(v10);
        return (unsigned int)StateRegKey;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"internal\\onecoreuapshell\\inc\\tabshellappsettingshelpers.h",
        (const char *)(unsigned int)StateHandle);
      if ( v17[0] )
        CloseState(v17[0]);
      if ( v10 )
        CoTaskMemFree(v10);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"internal\\onecoreuapshell\\inc\\tabshellappsettingshelpers.h",
      (const char *)(unsigned int)v6);
    if ( pv )
      CoTaskMemFree(pv);
    return v8;
  }
}
