/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C14
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00ACA58 (--1SURFREFGC@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00FC6E0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
