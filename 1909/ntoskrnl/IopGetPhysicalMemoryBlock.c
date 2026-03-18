/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x14019A9B8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140182104 (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1402954E8 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x140784B90 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
