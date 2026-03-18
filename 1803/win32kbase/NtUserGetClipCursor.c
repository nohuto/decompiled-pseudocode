/*
 * XREFs of NtUserGetClipCursor @ 0x1C00B6280
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0057C00 (PhysicalToLogicalDPIRect.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C005993C (ApiSetCheckCursorClipAccess.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C00628D0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C0072EE0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  _OWORD *v6; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+58h] [rbp-20h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v9, a2, a3);
  v4 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *v6 = *v6;
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v13);
    LODWORD(v11) = (v13.left + v13.right) / 2;
    HIDWORD(v11) = (v13.top + v13.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v12 = GuessMonitorOverrideForCoordinateConversions(v11, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v13, CurrentThreadDpiAwarenessContext, &v12);
    v4 = 1;
    v10 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
