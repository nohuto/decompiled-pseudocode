/*
 * XREFs of NtReadVirtualMemory @ 0x14064CD80
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14064CDB0 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToRead,
        PSIZE_T NumberOfBytesRead)
{
  return MiReadWriteVirtualMemory((ULONG_PTR)ProcessHandle, (__int64)NumberOfBytesRead, 16);
}
