/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00390C8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00391F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00393F8 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00570B0 (TransformRectBetweenCoordinateSpaces.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0057690 (TransformPointBetweenCoordinateSpaces.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0057840 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00578D0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0057AE0 (PhysicalToLogicalDPIPoint.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0057C00 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0058030 (LogicalToPhysicalDPIPoint.c)
 *     NtUserGetDpiForMonitor @ 0x1C0059620 (NtUserGetDpiForMonitor.c)
 *     NtUserLockCursor @ 0x1C0059860 (NtUserLockCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C006C8D0 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserClipCursor @ 0x1C0072D80 (NtUserClipCursor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00767F4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetClipCursor @ 0x1C00B6280 (NtUserGetClipCursor.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00BCE40 (UserIsCurrentThreadGdiScaled.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00C83E0 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00C85AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C85E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C012C458 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C001F53C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v2 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 360) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v2 + 340) )
    {
      return *(unsigned int *)(v2 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
        return *(unsigned int *)(CurrentProcessWin32Process + 280);
    }
  }
  return v0;
}
