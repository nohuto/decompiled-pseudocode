/*
 * XREFs of RawScanDeletedList @ 0x1406ED978
 * Callers:
 *     RawMountVolume @ 0x140691310 (RawMountVolume.c)
 *     RawShutdown @ 0x1408CD480 (RawShutdown.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ExTryToAcquireFastMutex @ 0x140109C50 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x14030A468 (RawCheckForDeleteVolume.c)
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
