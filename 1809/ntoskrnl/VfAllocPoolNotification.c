/*
 * XREFs of VfAllocPoolNotification @ 0x140937DDC
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140943D00 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140943DF0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140943F10 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140944030 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140944130 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140944190 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409442B0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140944330 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140944420 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140944610 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1409448C0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140944A30 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140944B10 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     ViPoolLogStackTrace @ 0x140938198 (ViPoolLogStackTrace.c)
 */

__int64 VfAllocPoolNotification()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0
    || ((MmVerifierData & 1) != 0 || (MmVerifierData & 8) != 0)
    && (result = (unsigned int)VfFlightOptions, (VfFlightOptions & 9) != 0) )
  {
    if ( VfPoolTraces )
      return ViPoolLogStackTrace();
  }
  return result;
}
