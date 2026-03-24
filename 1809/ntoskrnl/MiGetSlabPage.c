/*
 * XREFs of MiGetSlabPage @ 0x1402C29DC
 * Callers:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MmAllocateIndependentPagesEx @ 0x140108FBC (MmAllocateIndependentPagesEx.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DDB0 (MiFinalizeImageHeaderPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA30C (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBC04 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2E4C (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x140653A14 (MiAllocateDriverPage.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1402C2680 (MiGetPageFromSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x1402C2CB4 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x1402C2CFC (MiSlabAllocatorRecentFailure.c)
 */

__int64 __fastcall MiGetSlabPage(__int64 a1, char a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  __int64 PageFromSlabAllocator; // rsi

  v3 = 2LL;
  if ( (a2 & 2) != 0 )
  {
    v3 = 0LL;
  }
  else if ( (a2 & 1) != 0 )
  {
    v3 = BYTE2(MiFlags) & 1;
  }
  v6 = a1 + 6136 + 72 * v3;
  if ( (unsigned __int64)a3 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a3 = 0LL;
  while ( 1 )
  {
    PageFromSlabAllocator = MiGetPageFromSlabAllocator(v6);
    if ( PageFromSlabAllocator != -1 )
      break;
    if ( (unsigned int)MiSlabAllocatorRecentFailure(v6) )
      return -1LL;
    if ( a3 != (__int64 *)-1LL )
    {
      if ( a3 )
        *a3 = v6;
      return PageFromSlabAllocator;
    }
    if ( !(unsigned int)MiReplenishSlabAllocator(v6, a1, 1LL) )
      return -1LL;
  }
  return PageFromSlabAllocator;
}
