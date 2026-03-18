/*
 * XREFs of ZwOpenDirectoryObject @ 0x1401B8C70
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpInitializeRootNamespace @ 0x14072BC8C (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B598 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1408D0578 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1408F52D8 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140905F10 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
