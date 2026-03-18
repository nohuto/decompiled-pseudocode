/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x14019A358
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140181A14 (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140295788 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140859728 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407828C0 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
