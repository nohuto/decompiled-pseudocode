/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1400048C0
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x140004514 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FD290 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1401381C0 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14016D244 (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14016D2F0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016D398 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016EB78 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaInitialize @ 0x140199FB8 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1402A67C0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1402AC3FC (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140335380 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14033997C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1408F7570 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900FA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1409014DC (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A038D0 (ExpInitSystemPhase1.c)
 *     PpmInitHeteroEngine @ 0x140A21998 (PpmInitHeteroEngine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
