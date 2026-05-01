/*
 * XREFs of ?OnApplicationViewFocusChanged@AppViewDataSourceAdapterBase@@MEAAXW4APPLICATION_VIEW_CHANGE@@PEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180325010
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewFocusChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 )
  {
    LOBYTE(a2) = (_DWORD)a2 == 7;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 72LL))(a4, a2);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        180LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a3, a4);
  }
}
