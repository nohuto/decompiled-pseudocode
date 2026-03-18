/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x1406DB340
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
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
  SIZE_T Length; // [rsp+30h] [rbp-28h]

  LODWORD(Length) = BufferSize;
  return NtNotifyChangeDirectoryFileEx(
           (int)FileHandle,
           Event,
           (__int64)IoStatusBlock,
           Buffer,
           Length,
           CompletionFilter,
           WatchTree,
           1);
}
