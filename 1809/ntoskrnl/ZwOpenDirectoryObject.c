/*
 * XREFs of ZwOpenDirectoryObject @ 0x1401B8DF0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405C9B80 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpInitializeRootNamespace @ 0x14072CE5C (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073C768 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1408D1818 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1408F6578 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
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
