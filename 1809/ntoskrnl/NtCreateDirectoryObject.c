/*
 * XREFs of NtCreateDirectoryObject @ 0x1406AEF60
 * Callers:
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x1409DA2E4 (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x1409DAE34 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x1409DAF10 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x1409DB774 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406AEF7C (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
