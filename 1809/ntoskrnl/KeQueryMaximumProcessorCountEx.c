/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1400A6A80
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400A5E10 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DBFB0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14013685C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016755C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140167640 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1401676E8 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167DA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x14018FCA0 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x14028FDA0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140295C2C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140316950 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14031ABC8 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F5BC (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x14065B12C (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1408BAA08 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3D80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408C4298 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 *     PpmInitHeteroEngine @ 0x1409DE220 (PpmInitHeteroEngine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7920 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
