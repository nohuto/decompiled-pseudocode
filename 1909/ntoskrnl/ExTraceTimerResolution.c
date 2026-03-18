/*
 * XREFs of ExTraceTimerResolution @ 0x140720820
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     PoTraceSystemTimerResolution @ 0x1406A6594 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     PoRundownSystemTimer @ 0x140720880 (PoRundownSystemTimer.c)
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
