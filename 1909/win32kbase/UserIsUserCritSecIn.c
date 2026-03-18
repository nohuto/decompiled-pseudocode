/*
 * XREFs of UserIsUserCritSecIn @ 0x1C003FDC0
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C003F774 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C003FB00 (GreGetDCPoint.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C012A884 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C012B8E8 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C012C218 (DrvUpdateRemoteGraphicsDeviceList.c)
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
