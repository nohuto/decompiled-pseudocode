/*
 * XREFs of MmAllocateIndependentPages @ 0x140108FA0
 * Callers:
 *     KiInitializePrcbContext @ 0x1405727D8 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x1407299EC (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x140729DB8 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14072A62C (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140817C28 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14081FCA8 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x140842DC8 (KiStartDynamicProcessor.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140108FBC (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
