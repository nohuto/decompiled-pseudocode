/*
 * XREFs of NtUserLockCursor @ 0x1C00951C0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     LogicalToPhysicalDPIRect @ 0x1C003CBF0 (LogicalToPhysicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003D578 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C00421B0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C00845A0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0095248 (ApiSetCheckCursorClipAccess.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01779E4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  CCursorClip *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v11 = (struct tagRECT)0LL;
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL, 0LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v11 = *a1;
      LODWORD(v9) = (v11.right + v11.left) / 2;
      HIDWORD(v9) = (v11.bottom + v11.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v9 = GuessMonitorOverrideForCoordinateConversions(v9, CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v11, &v11, CurrentThreadDpiAwarenessContext, &v9);
      v10 = v11;
      CCursorClip::LockCursor(v8, &v10);
    }
    else
    {
      CCursorClip::ClearClip((const struct tagRECT *)gpCursorClip);
    }
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
