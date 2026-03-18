/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C008B990
 * Callers:
 *     HMUnlockObjectInternal @ 0x1C0026F70 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C002A380 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0102CC4 (AddToDeferredUserCritThreadUnlockList.c)
 * Callees:
 *     <none>
 */

__int64 IS_USERCRIT_OWNED_SHAREDONLY()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
  return v0;
}
