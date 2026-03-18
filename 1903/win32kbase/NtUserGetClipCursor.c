/*
 * XREFs of NtUserGetClipCursor @ 0x1C0117DA0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     PhysicalToLogicalDPIRect @ 0x1C003CD40 (PhysicalToLogicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003D578 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C00845A0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0095248 (ApiSetCheckCursorClipAccess.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00B3150 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _OWORD *v6; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *v6 = *v6;
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v11);
    LODWORD(v9) = (v11.left + v11.right) / 2;
    HIDWORD(v9) = (v11.top + v11.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v10 = GuessMonitorOverrideForCoordinateConversions(v9, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v11, CurrentThreadDpiAwarenessContext, &v10);
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
