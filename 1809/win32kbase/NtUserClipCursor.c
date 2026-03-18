/*
 * XREFs of NtUserClipCursor @ 0x1C00A1DF0
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0148BE0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v6[5]; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v7; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v8; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v6[3] = a1;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v5);
  v8 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v8 = *v1;
      LODWORD(v6[0]) = (v8.right + v8.left) / 2;
      HIDWORD(v6[0]) = (v8.top + v8.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v6[0] = GuessMonitorOverrideForCoordinateConversions(v6[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v8, &v8, CurrentThreadDpiAwarenessContext, v6);
      v7 = v8;
      CCursorClip::SetClip(gpCursorClip, &v7);
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
