/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1400A69C0
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400A5D50 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DC030 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14013695C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016765C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140167740 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1401677E8 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x14018FDE0 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x14028FF90 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140316B40 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14031ADB8 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F7AC (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1408BBCC8 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408C5558 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 *     PpmInitHeteroEngine @ 0x1409DF220 (PpmInitHeteroEngine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
