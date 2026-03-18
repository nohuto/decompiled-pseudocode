/*
 * XREFs of UserIsUserCritSecIn @ 0x1C0048890
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C0048854 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C01044BC (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0105804 (DrvUpdateRemoteGraphicsDeviceList.c)
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
