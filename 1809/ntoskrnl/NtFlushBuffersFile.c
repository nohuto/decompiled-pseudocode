/*
 * XREFs of NtFlushBuffersFile @ 0x14065C790
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __stdcall NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx((_DWORD)FileHandle, 0, 0, 0, (__int64)IoStatusBlock);
}
