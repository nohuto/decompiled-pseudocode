/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406EE580
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14068DDFC (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  return ObpCreateDirectoryObject(
           (__int64)DirectoryHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           ShadowDirectoryHandle,
           Flags);
}
