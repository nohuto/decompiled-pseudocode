/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x14067CC80
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateVirtualMemory @ 0x14067CCE0 (MmAllocateVirtualMemory.c)
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
