/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1401C3F50
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1400ED494 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x14067E6D8 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
