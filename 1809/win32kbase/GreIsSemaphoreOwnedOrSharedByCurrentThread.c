/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0048970
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C0048854 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C00488E0 (UserReferenceDwmApiPort.c)
 *     GreIsDwmStateLocked @ 0x1C0048950 (GreIsDwmStateLocked.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
