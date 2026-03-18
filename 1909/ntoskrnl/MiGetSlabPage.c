/*
 * XREFs of MiGetSlabPage @ 0x1402DC244
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x1400BD844 (MiGetHardFaultPages.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2AAC (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1402DBD8C (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabAllocator @ 0x1402DC0F8 (MiGetSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x1402DCC24 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x1402DCC74 (MiSlabAllocatorRecentFailure.c)
 */

__int64 __fastcall MiGetSlabPage(__int64 a1, char a2, int a3, __int64 *a4, unsigned int a5)
{
  __int64 SlabAllocator; // rdi
  __int64 PageFromSlabAllocator; // rsi

  SlabAllocator = MiGetSlabAllocator(a1, a3, a2);
  if ( (unsigned __int64)a4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a4 = 0LL;
  while ( 1 )
  {
    PageFromSlabAllocator = MiGetPageFromSlabAllocator(SlabAllocator);
    if ( PageFromSlabAllocator != -1 )
      break;
    if ( *(_DWORD *)(SlabAllocator + 48) == 1 || (unsigned int)MiSlabAllocatorRecentFailure(SlabAllocator) )
      return -1LL;
    if ( a4 != (__int64 *)-1LL )
    {
      if ( a4 )
        *a4 = SlabAllocator;
      return PageFromSlabAllocator;
    }
    if ( !(unsigned int)MiReplenishSlabAllocator(SlabAllocator, a1, 1LL, a5) )
      return -1LL;
  }
  return PageFromSlabAllocator;
}
