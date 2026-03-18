/*
 * XREFs of NtUserLockCursor @ 0x1C0059860
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
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01202C8 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentThreadDpiAwarenessContext; // rbx
  CCursorClip *v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v9; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v10; // [rsp+60h] [rbp-28h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v7);
  v10 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL, 0LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v10 = *a1;
      LODWORD(v8) = (v10.right + v10.left) / 2;
      HIDWORD(v8) = (v10.bottom + v10.top) / 2;
      CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
      v8 = GuessMonitorOverrideForCoordinateConversions(v8, CurrentThreadDpiAwarenessContext, 0LL);
      LogicalToPhysicalDPIRect(&v10, &v10, CurrentThreadDpiAwarenessContext, &v8);
      v9 = v10;
      CCursorClip::LockCursor(v6, &v9);
    }
    else
    {
      CCursorClip::ClearClip((struct tagRECT *)gpCursorClip);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
