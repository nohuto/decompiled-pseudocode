/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004D190
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C00120C4 (CheckOrAcquireDwmStateLock.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C004D130 (UserReferenceDwmApiPort.c)
 *     GreIsDwmStateLocked @ 0x1C00D8EC0 (GreIsDwmStateLocked.c)
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
