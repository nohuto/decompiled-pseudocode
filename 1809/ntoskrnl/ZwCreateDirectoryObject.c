/*
 * XREFs of ZwCreateDirectoryObject @ 0x1401B9590
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406A2DDC (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x14072BC8C (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x1409063AC (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     ExInitializeNls @ 0x1409DEEAC (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
