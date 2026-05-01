/*
 * XREFs of ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180307A80
 * Callers:
 *     ?UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308198 (-UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapterBase::UpdateAppId(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  HRESULT v5; // eax
  int v6; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-18h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HSTRING string; // [rsp+58h] [rbp+18h] BYREF

  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v9 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  *(_QWORD *)length = -1LL;
  v9 = -1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, PCNZWCH *))(*(_QWORD *)a2 + 136LL))(a2, &sourceString) >= 0 )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
    v5 = WindowsCreateString(sourceString, length[0], &string);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        460LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, HSTRING))(*(_QWORD *)a3 + 56LL))(
           a3,
           string);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        461LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
        (const char *)(unsigned int)v6);
    WindowsDeleteString(string);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
}
