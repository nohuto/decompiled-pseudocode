/*
 * XREFs of ZwCreateDirectoryObject @ 0x1401B95B0
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406A2DBC (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x14072BC6C (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x14090638C (ObpGetSilosRootDirectory.c)
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
