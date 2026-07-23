/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x1401901E8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14017827C (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280718 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x14075C850 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
