/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140784B90
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x14019A9B8 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1402944A8 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx @ 0x140784BB0 (MmGetPhysicalMemoryRangesEx.c)
 */

PPHYSICAL_MEMORY_RANGE __noreturn MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
