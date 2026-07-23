/*
 * XREFs of ZwQueryDirectoryObject @ 0x1401C2870
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405C6194 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x14073BE94 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407556A0 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14090DD3C (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140932F2C (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(DirectoryHandle);
}
