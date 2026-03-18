/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x1406B9CA0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 */

NTSTATUS __stdcall NtNotifyChangeDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG BufferSize,
        ULONG CompletionFilter,
        BOOLEAN WatchTree)
{
  return NtNotifyChangeDirectoryFileEx(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           Buffer,
           BufferSize,
           CompletionFilter,
           WatchTree,
           1);
}
