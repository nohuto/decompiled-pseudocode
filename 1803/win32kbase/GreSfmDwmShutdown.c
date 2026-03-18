/*
 * XREFs of GreSfmDwmShutdown @ 0x1C00D79D0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C004D340 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreSfmDwmShutdown()
{
  int v0; // r8d
  __int64 result; // rax
  __int64 v2; // rcx

  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( (int)IsGrepSfmRemoveSurfacesSupported() >= 0 )
    GrepSfmRemoveSurfaces();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v0);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion(v2);
  }
  return result;
}
