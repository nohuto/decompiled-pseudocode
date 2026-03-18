/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x1406EE28C
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE954 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PpDeviceRegistration @ 0x1406EE2E8 (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  __int64 v2; // r9
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  LOBYTE(v2) = 1;
  return PpDeviceRegistration(a1, 0LL, 0LL, v2);
}
