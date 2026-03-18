/*
 * XREFs of ExTraceTimerResolution @ 0x14071E990
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     PoTraceSystemTimerResolution @ 0x1406A6D04 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7970 (ExAcquireTimeRefreshLock.c)
 *     PoRundownSystemTimer @ 0x14071E9F0 (PoRundownSystemTimer.c)
 */

void ExTraceTimerResolution()
{
  __int64 *i; // rbx

  ExAcquireTimeRefreshLock(1u);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 212));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
