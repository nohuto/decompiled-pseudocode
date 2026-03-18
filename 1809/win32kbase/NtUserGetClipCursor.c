/*
 * XREFs of NtUserGetClipCursor @ 0x1C00EEEF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00395D0 (PhysicalToLogicalDPIRect.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C003B548 (ApiSetCheckCursorClipAccess.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0071AD0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00A2380 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _OWORD *v5; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v12; // [rsp+58h] [rbp-20h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v8, a2, a3);
  v4 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    *v5 = *v5;
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v12);
    LODWORD(v10) = (v12.left + v12.right) / 2;
    HIDWORD(v10) = (v12.top + v12.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v11 = GuessMonitorOverrideForCoordinateConversions(v10, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v12, CurrentThreadDpiAwarenessContext, &v11);
    v4 = 1;
    v9 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
