/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1401B9A50
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406A405C (SeGetTokenDeviceMap.c)
 *     IoCreateSymbolicLink @ 0x1406CCA90 (IoCreateSymbolicLink.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     ObpInitializeRootNamespace @ 0x14072CE5C (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072D298 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x14081D580 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x1409C2534 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409DA820 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SymbolicLinkHandle);
}
