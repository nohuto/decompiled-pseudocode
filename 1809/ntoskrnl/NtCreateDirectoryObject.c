/*
 * XREFs of NtCreateDirectoryObject @ 0x1406ADCE0
 * Callers:
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x1409D92E4 (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x1409D9E34 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x1409DA774 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406ADCFC (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle);
}
