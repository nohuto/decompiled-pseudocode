/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0038C50 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0038EF0 (TransformPointBetweenCoordinateSpaces.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00394B0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00395D0 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0039B78 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0039BF0 (LogicalToPhysicalDPIPoint.c)
 *     NtUserLockCursor @ 0x1C003B460 (NtUserLockCursor.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C003D1EC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C008A770 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C008C690 (UserIsCurrentThreadGdiScaled.c)
 *     NtUserClipCursor @ 0x1C00A1DF0 (NtUserClipCursor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00AADE4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetClipCursor @ 0x1C00EEEF0 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00FC630 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00FC7E8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00FC824 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0025218 (CaptureAndValidateUserModeDpiAwarenessContext.c)
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
      return *(unsigned int *)(v3 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
        return *(unsigned int *)(CurrentProcessWin32Process + 280);
    }
  }
  return v0;
}
