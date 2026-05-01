/*
 * XREFs of _lambda_4cd311c558c75f42f66c9a2141adb89d_::operator() @ 0x1803EB1B4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___::_ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___ @ 0x1803EB0E4 (wil--details--ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___--_ScopeExitFn__lambda_4cd3.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803ECB20 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4cd311c558c75f42f66c9a2141adb89d_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 40LL))((*a1)[13], *a1[1], *a1[2]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
