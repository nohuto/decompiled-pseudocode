/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1401C33D0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140098DF0 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x140678D60 (PspMapSystemDll.c)
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
