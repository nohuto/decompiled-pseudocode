/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140272284
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140142B40 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpCommitLpIndices @ 0x1401B3C9C (HvlpCommitLpIndices.c)
 *     HvlGetCoverageData @ 0x140270B14 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x140270C48 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x140270F68 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140271410 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271634 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140271AA0 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140271D78 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140271EE8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140272140 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140272C48 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140272DFC (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140272E88 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140272FB8 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140273390 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140273470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402736D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140273A00 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140273BF0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402741E0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140274310 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140274410 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140274540 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140274630 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1402746C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274964 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1402749E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140274AA0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140274B2C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140274CB0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140274DB0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140274F70 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140275240 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140275424 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1402754B0 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140275540 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1402755E0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140275C00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140275D40 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x140276000 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140276428 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1402764E0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x140276594 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140276B0C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140276BE0 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140276CF8 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x140276EFC (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x140276F64 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1402772A4 (HvlpSetPowerProperty.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x140277364 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlCollectLivedump @ 0x14027773C (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140278188 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140278300 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1402786CC (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140278BB4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140279118 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140279C00 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140279CA0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140279DAC (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140279F24 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14027A3C0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14032BA10 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14032BB38 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032BDA8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14032BF10 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14032C030 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408178F0 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x1409F43C4 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
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
