/*
 * XREFs of MmAllocateIndependentPages @ 0x140108F80
 * Callers:
 *     KiInitializePrcbContext @ 0x1405727D8 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x140729A0C (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x140729DD8 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14072A64C (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140817C48 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F720 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14081FCC8 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140108F9C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
