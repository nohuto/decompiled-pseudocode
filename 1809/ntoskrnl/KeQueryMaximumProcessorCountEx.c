/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1400A6A60
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400A5DF0 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DBF90 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14013683C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016753C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140167620 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1401676C8 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167D80 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x14018FC80 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x14028FCA0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140295B2C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140316850 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14031AAC8 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F4BC (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x14065B14C (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1408BAA28 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3DA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408C42B8 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 *     PpmInitHeteroEngine @ 0x1409DE220 (PpmInitHeteroEngine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7900 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
