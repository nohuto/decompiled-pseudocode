/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003FED0
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C003F774 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C003FE40 (GreIsDwmStateLocked.c)
 *     UserReferenceDwmApiPort @ 0x1C003FE60 (UserReferenceDwmApiPort.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIsSemaphoreOwnedOrSharedByCurrentThread(PERESOURCE Resource)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(Resource) || ExIsResourceAcquiredSharedLite(Resource) )
    return 1;
  return v2;
}
