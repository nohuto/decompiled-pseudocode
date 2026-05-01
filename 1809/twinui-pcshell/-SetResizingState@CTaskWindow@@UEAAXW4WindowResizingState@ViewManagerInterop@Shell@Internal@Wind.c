/*
 * XREFs of ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180077010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::SetResizingState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 552LL))(v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3DB,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v6,
        a5);
  }
}
