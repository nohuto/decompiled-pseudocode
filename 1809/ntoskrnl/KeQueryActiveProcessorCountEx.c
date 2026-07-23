/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1400A7860
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     PpmCheckComputeEnergy @ 0x1400A7400 (PpmCheckComputeEnergy.c)
 *     MiAdjustCachedStacks @ 0x1400A7668 (MiAdjustCachedStacks.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DC030 (KeQueryLogicalProcessorRelationship.c)
 *     KiGenericCallDpcWorker @ 0x1401120F0 (KiGenericCallDpcWorker.c)
 *     KeInitializeQueue @ 0x140121AA0 (KeInitializeQueue.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140138F10 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiOutSwapKernelStacks @ 0x14013D0B8 (KiOutSwapKernelStacks.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14015141C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140159988 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x140175A30 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x14017E4B8 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x14018D1F4 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x14026DCAC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140277368 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x140279510 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x14027F7C4 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140282890 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14028C768 (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14028D728 (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x14028FEF0 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140290528 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1402942F0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140297590 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1402D5C40 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x140574264 (KeRestoreMtrrBroadcast.c)
 *     ExProcessorCounterSetCallback @ 0x1405CE7B0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140750FD4 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140765148 (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14081678C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14081A4E0 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140844730 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1408B81C4 (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 *     KdpAllowDisable @ 0x1409195D4 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x14091961C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x140919718 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140919800 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409C6B68 (KiIntSteerDetermineSteeringEnabled.c)
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
    v2 = qword_1405426A8[GroupNumber] - (((unsigned __int64)qword_1405426A8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
