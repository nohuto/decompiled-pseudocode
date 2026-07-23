/*
 * XREFs of RawScanDeletedList @ 0x1405A3620
 * Callers:
 *     RawMountVolume @ 0x1405A3988 (RawMountVolume.c)
 *     RawShutdown @ 0x140890A30 (RawShutdown.c)
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140004150 (ExTryToAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x14016A0BC (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    ExAcquireFastMutex(&RawGlobalLock);
    v0 = (__int64 *)RawDismountedQueue;
    while ( v0 != &RawDismountedQueue )
    {
      v1 = v0 - 20;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)v1 + 4) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)v1 + 4);
      }
    }
    KeReleaseGuardedMutex(&RawGlobalLock);
  }
}
