/*
 * XREFs of HvlpPreallocatePageListResources @ 0x140850D68
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14075A1F0 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MmAllocateIndependentPages @ 0x1400DC990 (MmAllocateIndependentPages.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 HvlpPreallocatePageListResources()
{
  unsigned int v0; // ebx
  void *IndependentPages; // rax

  v0 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
