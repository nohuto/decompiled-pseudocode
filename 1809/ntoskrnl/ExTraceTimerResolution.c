/*
 * XREFs of ExTraceTimerResolution @ 0x1406DBC7C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PoTraceSystemTimerResolution @ 0x140663D54 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x14066585C (ExAcquireTimeRefreshLock.c)
 *     PoRundownSystemTimer @ 0x1406DBCDC (PoRundownSystemTimer.c)
 */

void ExTraceTimerResolution()
{
  __int64 *i; // rbx

  ExAcquireTimeRefreshLock(1u);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 206));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
