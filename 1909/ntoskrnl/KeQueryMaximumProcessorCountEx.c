/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140004950
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400045A4 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FF420 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140138810 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14016D934 (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14016D9E0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016DA88 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016F268 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaInitialize @ 0x14019A618 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1402A6520 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1402AC15C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140334DE0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1403393DC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x1406AA3B4 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1408F6EE0 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140900E3C (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A03DEC (ExpInitSystemPhase1.c)
 *     PpmInitHeteroEngine @ 0x140A21A78 (PpmInitHeteroEngine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
