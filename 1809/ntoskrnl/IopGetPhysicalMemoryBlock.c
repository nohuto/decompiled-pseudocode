/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x1401900A8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14017817C (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280528 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x14075B660 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
