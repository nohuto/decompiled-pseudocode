/*
 * XREFs of UserIsUserCritSecIn @ 0x1C003DE30
 * Callers:
 *     GreGetDCPoint @ 0x1C003DB70 (GreGetDCPoint.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C003E58C (CheckOrAcquireDwmStateLock.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C012D034 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C012E098 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C012E9C8 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v1; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v1 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v1;
}
