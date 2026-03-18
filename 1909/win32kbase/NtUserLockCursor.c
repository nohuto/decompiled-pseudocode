/*
 * XREFs of NtUserLockCursor @ 0x1C0093B90
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C004A310 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     LogicalToPhysicalDPIRect @ 0x1C004CCA0 (LogicalToPhysicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0080770 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0093C18 (ApiSetCheckCursorClipAccess.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01757F4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
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
      CCursorClip::ClearClip((struct tagRECT *)gpCursorClip);
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
