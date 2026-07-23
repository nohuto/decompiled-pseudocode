/*
 * XREFs of MmAllocateIndependentPages @ 0x140109020
 * Callers:
 *     KiInitializePrcbContext @ 0x1405737D8 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14072ABDC (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14072AFA8 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14072B81C (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140818E28 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140820EA8 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
