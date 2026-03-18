/*
 * XREFs of MmAllocateIndependentPages @ 0x1400DC990
 * Callers:
 *     KiInitializePrcbContext @ 0x14059F424 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14074E3A8 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14074E770 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14074F024 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140850D68 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859400 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
