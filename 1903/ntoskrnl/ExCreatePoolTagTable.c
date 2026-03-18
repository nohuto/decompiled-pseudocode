/*
 * XREFs of ExCreatePoolTagTable @ 0x14074E594
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     MmAllocateIndependentPages @ 0x1400EF280 (MmAllocateIndependentPages.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  void *v4; // rbx

  v2 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x492492492492491LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPages(56 * (PoolTrackTableSize + 1), a2);
  v4 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, 56 * PoolTrackTableSize);
    *(&ExPoolTagTables + v2) = v4;
  }
  return v4;
}
