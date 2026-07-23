/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x140676D00
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateVirtualMemory @ 0x140676D60 (MmAllocateVirtualMemory.c)
 */

NTSTATUS __cdecl NtAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  return MmAllocateVirtualMemory(
           (int)ProcessHandle,
           (int)BaseAddress,
           (int)RegionSize,
           AllocationType,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount,
           KeGetCurrentThread()->PreviousMode,
           0,
           0,
           0LL);
}
