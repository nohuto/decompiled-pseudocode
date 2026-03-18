/*
 * XREFs of WdipSemUpdate @ 0x1408B0BDC
 * Callers:
 *     WdiUpdateSem @ 0x14030DC34 (WdiUpdateSem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemCleanStart @ 0x1407434B4 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x140744EDC (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408B0E90 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v1 = WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
