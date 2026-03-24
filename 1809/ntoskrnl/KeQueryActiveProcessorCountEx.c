/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1400A7920
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeGetPrcb @ 0x1400A62C4 (KeGetPrcb.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A6A80 (KeQueryMaximumProcessorCountEx.c)
 *     PoGetIdleTimes @ 0x1400A7320 (PoGetIdleTimes.c)
 *     PpmCheckComputeEnergy @ 0x1400A74C0 (PpmCheckComputeEnergy.c)
 *     MiAdjustCachedStacks @ 0x1400A7728 (MiAdjustCachedStacks.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DBFB0 (KeQueryLogicalProcessorRelationship.c)
 *     KiGenericCallDpcWorker @ 0x140112080 (KiGenericCallDpcWorker.c)
 *     KeInitializeQueue @ 0x1401219D0 (KeInitializeQueue.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140138E10 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiOutSwapKernelStacks @ 0x14013CFB8 (KiOutSwapKernelStacks.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14015131C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140159888 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x140175930 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x14017E378 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x140183AD0 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x14018D0B4 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x14026DABC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140277178 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x140279320 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x14027F5D4 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1402826A0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14028C578 (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14028D538 (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x14028FD00 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140290338 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140294100 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1402973A0 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1402D5A50 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x140573264 (KeRestoreMtrrBroadcast.c)
 *     ExProcessorCounterSetCallback @ 0x1405CD7B0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x14074F434 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14074FDE4 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140763F58 (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14081558C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x1408192E0 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408434D0 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F04 (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x1408BF5A0 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1408DA3E0 (NtStartProfile.c)
 *     KdpAllowDisable @ 0x1409185D4 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x14091861C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x140918718 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140918800 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x1409B5DAC (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409C5B68 (KiIntSteerDetermineSteeringEnabled.c)
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
    v2 = qword_1405416A8[GroupNumber] - (((unsigned __int64)qword_1405416A8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
