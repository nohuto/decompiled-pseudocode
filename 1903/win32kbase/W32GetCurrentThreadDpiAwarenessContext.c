/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C003D578
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C003A220 (TransformPointBetweenCoordinateSpaces.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C003CAD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C003CB48 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C003CBF0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C003CD40 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C003CF50 (PhysicalToLogicalDPIPoint.c)
 *     NtUserGetDpiForMonitor @ 0x1C003D3A0 (NtUserGetDpiForMonitor.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C003F670 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0061760 (LogicalToPhysicalDPIPoint.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C006711C (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     NtUserLockCursor @ 0x1C00951C0 (NtUserLockCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0099DA0 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00A0CD0 (UserIsCurrentThreadGdiScaled.c)
 *     NtUserClipCursor @ 0x1C00B2C40 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C0117DA0 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C01287A0 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0128844 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0128880 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0022844 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
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
