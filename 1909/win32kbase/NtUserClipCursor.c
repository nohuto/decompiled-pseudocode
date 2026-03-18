/*
 * XREFs of NtUserClipCursor @ 0x1C00AFD10
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0175940 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8[6]; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v9; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v10; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v8[3] = a1;
  EnterCrit(0, 1);
  v10 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v10 = *v1;
      LODWORD(v8[0]) = (v10.right + v10.left) / 2;
      HIDWORD(v8[0]) = (v10.top + v10.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v8[0] = GuessMonitorOverrideForCoordinateConversions(v8[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v10, &v10, CurrentThreadDpiAwarenessContext, v8);
      v9 = v10;
      CCursorClip::SetClip(gpCursorClip, &v9);
    }
    else
    {
      CCursorClip::ClearClip((struct tagRECT *)gpCursorClip);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
