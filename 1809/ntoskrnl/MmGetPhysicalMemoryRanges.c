/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x14075B680
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x140190088 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x14027F4D4 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx @ 0x14075B6A0 (MmGetPhysicalMemoryRangesEx.c)
 */

PPHYSICAL_MEMORY_RANGE __noreturn MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
