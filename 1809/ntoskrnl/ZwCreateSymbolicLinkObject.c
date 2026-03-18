/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1401B98D0
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406A2DDC (SeGetTokenDeviceMap.c)
 *     IoCreateSymbolicLink @ 0x1406CB810 (IoCreateSymbolicLink.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     ObpInitializeRootNamespace @ 0x14072BC8C (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0C8 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x14081C3A0 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409D9820 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SymbolicLinkHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
