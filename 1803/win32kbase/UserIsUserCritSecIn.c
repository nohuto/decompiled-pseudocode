/*
 * XREFs of UserIsUserCritSecIn @ 0x1C00617F0
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C00120C4 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C0061630 (GreGetDCPoint.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00D3B08 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00D6564 (DrvUpdateRemoteGraphicsDeviceList.c)
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
