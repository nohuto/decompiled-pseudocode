/*
 * XREFs of NtFlushBuffersFile @ 0x1406CC630
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __stdcall NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx((int)FileHandle, (__int64)IoStatusBlock);
}
