/*
 * XREFs of ZwOpenDirectoryObject @ 0x1401C1750
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405C6694 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     ObpInitializeRootNamespace @ 0x14074FBF0 (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140756130 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14090D79C (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1409329A0 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
