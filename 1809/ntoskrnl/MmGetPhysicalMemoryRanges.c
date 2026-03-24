/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x14075B660
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1401900A8 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x14027F5D4 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx @ 0x14075B680 (MmGetPhysicalMemoryRangesEx.c)
 */

PPHYSICAL_MEMORY_RANGE __noreturn MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
