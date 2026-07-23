/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406F0080
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14068136C (ObpCreateDirectoryObject.c)
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
