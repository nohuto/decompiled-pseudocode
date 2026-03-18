/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1400052B0
 * Callers:
 *     KeQueryMaximumProcessorCountEx @ 0x1400048C0 (KeQueryMaximumProcessorCountEx.c)
 *     PpmCheckComputeEnergy @ 0x140005010 (PpmCheckComputeEnergy.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KiOutSwapKernelStacks @ 0x1400E3280 (KiOutSwapKernelStacks.c)
 *     PopCheckForIdleness @ 0x1400EE110 (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FD290 (KeQueryLogicalProcessorRelationship.c)
 *     KiGenericCallDpcWorker @ 0x140114AF0 (KiGenericCallDpcWorker.c)
 *     KeInitializeQueue @ 0x140123920 (KeInitializeQueue.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013A9DC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1401683F8 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140169EC4 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x14017F2A0 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x140185BA4 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x14018D570 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x140197280 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x1402815BC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14028B4D8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x14028D660 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140294748 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140297B10 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x1402A260C (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x1402A362C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x1402A6720 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x1402A6D58 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1402AAAE0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1402AE220 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1402F0110 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x14059FE98 (KeRestoreMtrrBroadcast.c)
 *     ExProcessorCounterSetCallback @ 0x1405C8BC0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140774800 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x14078A95C (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14084F07C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140853548 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x14087EF50 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1408F38A8 (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x1408FC38C (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140918170 (NtStartProfile.c)
 *     KdpAllowDisable @ 0x140957378 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409573C0 (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409574BC (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409575A4 (KdpSysWriteControlSpace.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409FE3FC (KiIntSteerDetermineSteeringEnabled.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140572748[GroupNumber] - (((unsigned __int64)qword_140572748[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
