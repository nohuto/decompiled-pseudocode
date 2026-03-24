/*
 * XREFs of ZwOpenDirectoryObject @ 0x1401B8C90
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpInitializeRootNamespace @ 0x14072BC6C (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B578 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1408D0558 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1408F52B8 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140905EF0 (ObCreateSiloRootDirectory.c)
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
