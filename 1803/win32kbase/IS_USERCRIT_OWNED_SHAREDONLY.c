/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C003AF80
 * Callers:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0037470 (HMUnlockObjectInternal.c)
 *     AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00B0EC8 (AddToDeferredUserCritSharedThreadUnlockList.c)
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
