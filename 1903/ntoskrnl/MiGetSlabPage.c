/*
 * XREFs of MiGetSlabPage @ 0x1402DC4E4
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x1400DD9C4 (MiGetHardFaultPages.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MiFinalizeImageHeaderPage @ 0x14012F5E0 (MiFinalizeImageHeaderPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2D4C (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x1402D2398 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x1402DD0C0 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1402DC02C (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabAllocator @ 0x1402DC398 (MiGetSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x1402DCEC4 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x1402DCF14 (MiSlabAllocatorRecentFailure.c)
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
