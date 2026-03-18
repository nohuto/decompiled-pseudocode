/*
 * XREFs of MmAllocateIsrStack @ 0x14074E3A8
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MmAllocateIndependentPages @ 0x1400DC990 (MmAllocateIndependentPages.c)
 *     MmSetPageProtection @ 0x14012EF20 (MmSetPageProtection.c)
 *     MiMarkBootGuardPage @ 0x14074E424 (MiMarkBootGuardPage.c)
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
