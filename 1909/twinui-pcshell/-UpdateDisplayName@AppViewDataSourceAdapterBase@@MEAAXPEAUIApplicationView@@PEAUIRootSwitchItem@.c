/*
 * XREFs of ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803270A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034DA4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18042E900 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapterBase::UpdateDisplayName(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  unsigned __int16 **v5; // r8
  int ViewTitle; // eax
  HRESULT v7; // eax
  int v8; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-18h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HSTRING string; // [rsp+68h] [rbp+28h] BYREF

  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v11 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  *(_QWORD *)length = -1LL;
  v11 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&sourceString, v5);
  if ( ViewTitle < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      446LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)ViewTitle);
    __debugbreak();
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  v7 = WindowsCreateString(sourceString, length[0], &string);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      448LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, HSTRING))(*(_QWORD *)a3 + 48LL))(
         a3,
         string);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      449LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v8);
  WindowsDeleteString(string);
  string = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
}
