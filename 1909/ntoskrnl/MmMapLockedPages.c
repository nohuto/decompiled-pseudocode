/*
 * XREFs of MmMapLockedPages @ 0x1402C0E30
 * Callers:
 *     ViFlushDoubleBuffer @ 0x14096BBE4 (ViFlushDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __stdcall MmMapLockedPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode)
{
  return MmMapLockedPagesSpecifyCache(MemoryDescriptorList, AccessMode, MmCached, 0LL, 1u, 0x20u);
}
