/*
 * XREFs of ?UpdateActivationTimestamp@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802AF3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateActivationTimestamp(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned __int64 *))(*(_QWORD *)a2 + 480LL))(a2, &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      468LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( (v7 & 0x8000000000000000uLL) != 0LL )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      471LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)0x8000000BLL);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, unsigned __int64))(*(_QWORD *)a3 + 64LL))(
         a3,
         (unsigned int)v7 | (HIDWORD(v7) << 32));
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      472LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
}
