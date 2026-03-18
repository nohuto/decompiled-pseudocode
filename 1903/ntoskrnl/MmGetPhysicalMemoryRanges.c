/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407828C0
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x14019A358 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x140294748 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx @ 0x1407828E0 (MmGetPhysicalMemoryRangesEx.c)
 */

PPHYSICAL_MEMORY_RANGE __noreturn MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
