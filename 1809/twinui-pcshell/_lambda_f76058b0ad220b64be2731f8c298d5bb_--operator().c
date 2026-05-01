/*
 * XREFs of _lambda_f76058b0ad220b64be2731f8c298d5bb_::operator() @ 0x180385798
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___::_ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___ @ 0x180385674 (wil--details--ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___--_ScopeExitFn__lambda_f760.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180387090 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f76058b0ad220b64be2731f8c298d5bb_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 40LL))((*a1)[13], *a1[1], *a1[2]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AB,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
