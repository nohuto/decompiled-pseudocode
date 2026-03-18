/*
 * XREFs of NtUserClipCursor @ 0x1C0072D80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0055D90 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00578D0 (LogicalToPhysicalDPIRect.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C005993C (ApiSetCheckCursorClipAccess.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C00628D0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01203D0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  __int64 v3; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7[5]; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v8; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v7[3] = a1;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v6);
  v9 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v9 = *v1;
      LODWORD(v7[0]) = (v9.right + v9.left) / 2;
      HIDWORD(v7[0]) = (v9.top + v9.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v7[0] = GuessMonitorOverrideForCoordinateConversions(v7[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v9, &v9, CurrentThreadDpiAwarenessContext, v7);
      v8 = v9;
      CCursorClip::SetClip(gpCursorClip, &v8);
    }
    else
    {
      CCursorClip::ClearClip((struct tagRECT *)gpCursorClip);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
