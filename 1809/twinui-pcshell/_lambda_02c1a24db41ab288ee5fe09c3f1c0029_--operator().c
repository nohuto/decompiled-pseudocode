/*
 * XREFs of _lambda_02c1a24db41ab288ee5fe09c3f1c0029_::operator() @ 0x180069A40
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_02c1a24db41ab288ee5fe09c3f1c0029___ @ 0x180069904 (CVirtualDesktopManager--_OnViewAdded__lambda_02c1a24db41ab288ee5fe09c3f1c0029___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_02c1a24db41ab288ee5fe09c3f1c0029_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[12] + 56LL))(
         (*a1)[12],
         *a1[1],
         *a1[2],
         (*a1)[10]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
