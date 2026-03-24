/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140272384
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140142B60 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpCommitLpIndices @ 0x1401B3CBC (HvlpCommitLpIndices.c)
 *     HvlGetCoverageData @ 0x140270C14 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x140270D48 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x140271068 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140271510 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271734 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140271BA0 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140271E78 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140271FE8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140272240 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140272D48 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140272EFC (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140272F88 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1402730B8 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140273490 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273570 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402737D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273B00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140273CF0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402742E0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140274410 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140274510 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140274640 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140274730 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1402747C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274A64 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140274AE0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140274BA0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140274C2C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140274DB0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140274EB0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140275070 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140275340 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140275524 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1402755B0 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140275640 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1402756E0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140275D00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140275E40 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x140276100 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140276528 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1402765E0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x140276694 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140276C0C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140276CE0 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140276DF8 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x140276FFC (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x140277064 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1402773A4 (HvlpSetPowerProperty.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x140277464 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlCollectLivedump @ 0x14027783C (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140278288 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140278400 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1402787CC (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140278CB4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140279218 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140279D00 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140279DA0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140279EAC (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14027A024 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14027A4C0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14032BB10 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14032BC38 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032BEA8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14032C010 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14032C130 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408178D0 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x1409F43CC (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall HvlpReleaseHypercallPage(unsigned int *a1)
{
  PSLIST_ENTRY result; // rax
  __int64 HypercallCachedPages; // rdx
  struct _SLIST_ENTRY *v3; // rdx
  _SLIST_ENTRY *v4; // rax
  union _SLIST_HEADER *v5; // rcx
  unsigned __int8 v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v8; // r8d
  struct _KPRCB *v9; // rax
  bool v10; // zf

  result = (PSLIST_ENTRY)*a1;
  HypercallCachedPages = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = (struct _SLIST_ENTRY *)*((_QWORD *)a1 + 2);
    v4 = (_SLIST_ENTRY *)*((_QWORD *)a1 + 3);
    v5 = (union _SLIST_HEADER *)(*((_QWORD *)a1 + 1) + 24640LL);
    v3[1].Next = v4;
    return RtlpInterlockedPushEntrySList(v5, v3);
  }
  else if ( ((unsigned __int8)result & 2) != 0 )
  {
    v6 = *((_BYTE *)a1 + 8);
    if ( v6 < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = (PSLIST_ENTRY)v6;
      __writecr8(v6);
    }
  }
  else
  {
    v8 = a1[3];
    v9 = KeGetCurrentPrcb();
    if ( (v8 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v9->HypercallCachedPages;
    }
    else if ( (v8 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v9->HypercallCachedPages + 4096;
    }
    v10 = *((_BYTE *)a1 + 8) == 0;
    result = (PSLIST_ENTRY)*((_QWORD *)a1 + 3);
    *(_QWORD *)(HypercallCachedPages + 16) = result;
    if ( !v10 )
      _enable();
  }
  return result;
}
