/*
 * XREFs of MiGetSlabPage @ 0x1402C2BCC
 * Callers:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DE80 (MiFinalizeImageHeaderPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA4FC (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1402C2870 (MiGetPageFromSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x1402C2EA4 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x1402C2EEC (MiSlabAllocatorRecentFailure.c)
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
