/*
 * XREFs of NtCreateDirectoryObject @ 0x140681350
 * Callers:
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x140A1C868 (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x140A1CD9C (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A1CE88 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x140A1DB6C (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14068136C (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
