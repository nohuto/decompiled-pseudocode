/*
 * XREFs of NtUserLockCursor @ 0x1C003B460
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00394B0 (LogicalToPhysicalDPIRect.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C003A050 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C003B548 (ApiSetCheckCursorClipAccess.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0071AD0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0148A94 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  int v2; // ebx
  __int64 CurrentThreadDpiAwarenessContext; // rbx
  CCursorClip *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v8; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+60h] [rbp-28h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v6);
  v9 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL, 0LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v9 = *a1;
      LODWORD(v7) = (v9.right + v9.left) / 2;
      HIDWORD(v7) = (v9.bottom + v9.top) / 2;
      CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
      v7 = GuessMonitorOverrideForCoordinateConversions(v7, CurrentThreadDpiAwarenessContext, 0LL);
      LogicalToPhysicalDPIRect(&v9, &v9, CurrentThreadDpiAwarenessContext, &v7);
      v8 = v9;
      CCursorClip::LockCursor(v5, &v8);
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
  UserSessionSwitchLeaveCrit();
  return v2;
}
