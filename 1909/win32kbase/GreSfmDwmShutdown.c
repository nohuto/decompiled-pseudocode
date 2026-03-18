/*
 * XREFs of GreSfmDwmShutdown @ 0x1C0096A50
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C0096AF0 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 */

__int64 GreSfmDwmShutdown()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx

  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( (int)IsGrepSfmRemoveSurfacesSupported() >= 0 )
    GrepSfmRemoveSurfaces();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v0);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion(v2);
  }
  return result;
}
