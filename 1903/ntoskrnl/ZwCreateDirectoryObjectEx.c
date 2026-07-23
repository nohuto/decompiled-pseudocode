/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1401C1530
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14074F160 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14074F30C (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074F5C4 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
