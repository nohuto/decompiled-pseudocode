/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003EC90
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C003E58C (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C003EC00 (GreIsDwmStateLocked.c)
 *     UserReferenceDwmApiPort @ 0x1C003EC20 (UserReferenceDwmApiPort.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
