/*
 * XREFs of NtFlushBuffersFile @ 0x1406CB460
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __stdcall NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx((int)FileHandle, (__int64)IoStatusBlock);
}
