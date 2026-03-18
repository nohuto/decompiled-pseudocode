/*
 * XREFs of MmAllocateIsrStack @ 0x14074D918
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MmAllocateIndependentPages @ 0x1400EF280 (MmAllocateIndependentPages.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiMarkBootGuardPage @ 0x14074D994 (MiMarkBootGuardPage.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, __int64 a2)
{
  __int64 IndependentPages; // rax
  unsigned __int64 v4; // rbx
  __int64 PteAddress; // rax
  unsigned __int64 v7; // rbx

  if ( *a1 )
  {
    v7 = *a1 - 24576LL;
    if ( MmSetPageProtection(v7, 0x6000uLL, 4u) )
    {
      v4 = v7 - 4096;
      goto LABEL_4;
    }
  }
  else
  {
    IndependentPages = MmAllocateIndependentPages(28672LL, a2);
    v4 = IndependentPages;
    if ( IndependentPages )
    {
      *a1 = IndependentPages + 28672;
LABEL_4:
      PteAddress = MiGetPteAddress(v4);
      MiMarkBootGuardPage(PteAddress);
      return 1;
    }
  }
  return 0;
}
