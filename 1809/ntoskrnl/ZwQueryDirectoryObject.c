/*
 * XREFs of ZwQueryDirectoryObject @ 0x1401BA910
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B578 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1408D0558 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1408F52B8 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, Buffer, *(_QWORD *)&BufferLength);
}
