/*
 * XREFs of NtCreateDirectoryObject @ 0x14068DDE0
 * Callers:
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x140A1C68C (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x140A1CBC0 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A1CCAC (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x140A1D990 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14068DDFC (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
