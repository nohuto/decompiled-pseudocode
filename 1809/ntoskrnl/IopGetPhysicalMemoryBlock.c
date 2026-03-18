/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x140190088
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14017815C (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280428 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F720 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x14075B680 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
