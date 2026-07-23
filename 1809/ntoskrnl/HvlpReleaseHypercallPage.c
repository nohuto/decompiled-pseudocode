/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140272574
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140142C60 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpCommitLpIndices @ 0x1401B3B5C (HvlpCommitLpIndices.c)
 *     HvlGetCoverageData @ 0x140270E04 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x140270F38 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x140271258 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140271700 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271924 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140272068 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1402721D8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140272430 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140272F38 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1402730EC (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140273178 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1402732A8 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140273680 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273760 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402739C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273CF0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140273EE0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402744D0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140274600 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140274700 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140274830 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140274920 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1402749B0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274C54 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140274CD0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140274D90 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140274E1C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140274FA0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1402750A0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140275260 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140275530 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140275714 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1402757A0 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140275830 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1402758D0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140275EF0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140276030 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1402762F0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140276718 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1402767D0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x140276884 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140276DFC (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140276ED0 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140276FE8 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1402771EC (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x140277254 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140277594 (HvlpSetPowerProperty.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x140277654 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlCollectLivedump @ 0x140277A2C (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140278478 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1402785F0 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1402789BC (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140278EA4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140279408 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140279EF0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140279F90 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x14027A09C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14027A214 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14027A6B0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14032BD00 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14032BE28 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032C098 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14032C200 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14032C320 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140818AD0 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x1409F53CC (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall HvlpReleaseHypercallPage(unsigned int *a1)
{
  PSLIST_ENTRY result; // rax
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v3; // rdx
  _SLIST_ENTRY *v4; // rax
  _SLIST_HEADER *v5; // rcx
  unsigned __int8 v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v8; // r8d
  struct _KPRCB *v9; // rax
  bool v10; // zf

  result = (PSLIST_ENTRY)*a1;
  HypercallCachedPages = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = (_SLIST_ENTRY *)*((_QWORD *)a1 + 2);
    v4 = (_SLIST_ENTRY *)*((_QWORD *)a1 + 3);
    v5 = (_SLIST_HEADER *)(*((_QWORD *)a1 + 1) + 24640LL);
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
