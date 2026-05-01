/*
 * XREFs of ?UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x180380640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x1800F5D7C (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CVirtualDesktopNotifications::UnregisterInternal(RTL_SRWLOCK *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = AgileRegistrationList::Unregister(this + 8, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
