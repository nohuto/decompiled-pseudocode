/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14073268C
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x14071C62C (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140731B24 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     PpDeviceRegistration @ 0x1407249B8 (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0LL, 0LL, 1);
}
