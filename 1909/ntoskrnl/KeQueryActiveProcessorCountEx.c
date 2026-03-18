/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140005340
 * Callers:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 *     PpmCheckComputeEnergy @ 0x1400050A0 (PpmCheckComputeEnergy.c)
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KiOutSwapKernelStacks @ 0x14008F500 (KiOutSwapKernelStacks.c)
 *     PopCheckForIdleness @ 0x1400D5820 (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FF420 (KeQueryLogicalProcessorRelationship.c)
 *     KiGenericCallDpcWorker @ 0x140116160 (KiGenericCallDpcWorker.c)
 *     KeInitializeQueue @ 0x140124310 (KeInitializeQueue.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013AE3C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140167E48 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140169964 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x14017F990 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x140186154 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x14018DE80 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x140192B6C (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x14028131C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14028B238 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x14028D3C0 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1402944A8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140297870 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x1402A236C (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x1402A338C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x1402A6480 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x1402A6AB8 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1402AA840 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1402ADF80 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1402EFE70 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x14059FE78 (KeRestoreMtrrBroadcast.c)
 *     ExProcessorCounterSetCallback @ 0x1405C90C0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140777DE0 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x14078CE3C (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14084E77C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140852C48 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x14087E650 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1408F3218 (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140917BD0 (NtStartProfile.c)
 *     KdpAllowDisable @ 0x140957378 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409573C0 (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409574BC (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409575A4 (KdpSysWriteControlSpace.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409FE918 (KiIntSteerDetermineSteeringEnabled.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
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
