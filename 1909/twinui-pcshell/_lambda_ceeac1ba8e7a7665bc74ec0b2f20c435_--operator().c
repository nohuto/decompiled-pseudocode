/*
 * XREFs of _lambda_ceeac1ba8e7a7665bc74ec0b2f20c435_::operator() @ 0x18006F9E4
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___ @ 0x18006F8A4 (CVirtualDesktopManager--_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ceeac1ba8e7a7665bc74ec0b2f20c435_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-18h]
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
      (void *)0x208,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1,
      v4);
  return v2;
}
