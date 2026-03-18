/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C002D950 (NtUserGetDpiForMonitor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C004C2F0 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C004C640 (TransformPointBetweenCoordinateSpaces.c)
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 *     GetMonitorRect @ 0x1C004CC00 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C004CCA0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C004CDF0 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C004D000 (PhysicalToLogicalDPIPoint.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004D4C8 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C004D540 (LogicalToPhysicalDPIPoint.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00528AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     NtUserLockCursor @ 0x1C0093B90 (NtUserLockCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0098930 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00A0140 (UserIsCurrentThreadGdiScaled.c)
 *     NtUserClipCursor @ 0x1C00AFD10 (NtUserClipCursor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00BB464 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetClipCursor @ 0x1C0115430 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C0125ED0 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0126098 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C01260D4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0022D64 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 360) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v3 + 340) )
    {
      v0 = *(_DWORD *)(v3 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
        v0 = *(_DWORD *)(CurrentProcessWin32Process + 280);
    }
    if ( (*(_DWORD *)(v3 + 328) & 8) != 0 && (v0 & 0xF) == 2 && (v0 & 0xF0) == 0x20 )
      v0 |= 0x20000000u;
  }
  return v0;
}
