/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406AEF40
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406AEF7C (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, ShadowDirectoryHandle, Flags);
}
