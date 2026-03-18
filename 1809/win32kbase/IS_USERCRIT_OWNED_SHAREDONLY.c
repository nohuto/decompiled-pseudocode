/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00324A0
 * Callers:
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C002FDB0 (HMUnlockObjectInternal.c)
 *     AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00EB854 (AddToDeferredUserCritSharedThreadUnlockList.c)
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
