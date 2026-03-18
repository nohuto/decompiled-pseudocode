/*
 * XREFs of NtWriteVirtualMemory @ 0x1406DE8D0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14064CDB0 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory(
           (ULONG_PTR)ProcessHandle,
           (unsigned __int64)BaseAddress,
           (unsigned __int64)Buffer,
           NumberOfBytesToWrite,
           (unsigned __int64)NumberOfBytesWritten,
           32);
}
