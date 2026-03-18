/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00901D0
 * Callers:
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C00297F0 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C01056F4 (AddToDeferredUserCritThreadUnlockList.c)
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
