/*
 * XREFs of MmAllocateIndependentPages @ 0x1400EF280
 * Callers:
 *     KiInitializePrcbContext @ 0x14059F444 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14074D918 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14074DCE0 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14074E594 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140851668 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140859728 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859D00 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
