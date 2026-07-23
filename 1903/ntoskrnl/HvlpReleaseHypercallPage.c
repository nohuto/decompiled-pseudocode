/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140286458
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14015DF64 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1401BE010 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x140284914 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x140284A6C (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x140284DC8 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1402852B0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14028563C (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140285BA8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140285E84 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140286014 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140286284 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140286C4C (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140286E10 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140286EAC (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140287000 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140287410 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287510 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402877B0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140287AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140287CB0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402882A0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140288400 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140288520 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140288680 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140288780 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140288810 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140288AF0 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140288B80 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140288C50 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140288CEC (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140288E90 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140288FB0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140289180 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140289480 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1402896A0 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140289740 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1402897E0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140289890 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140289E60 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140289FC0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x14028A2C0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x14028A6C8 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14028A790 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14028A850 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x14028AE58 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x14028AF3C (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14028B070 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x14028B320 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x14028B398 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x14028B714 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x14028BAEC (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14028C4F0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14028C68C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14028CA80 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14028CF88 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14028D54C (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14028E098 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14028E148 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x14028E264 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14028E3EC (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14028E84C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14034D308 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14034D450 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14034D6E0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14034D86C (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14034D9C8 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408512F4 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A39830 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall HvlpReleaseHypercallPage(unsigned int *a1)
{
  PSLIST_ENTRY result; // rax
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v3; // rdx
  unsigned __int8 v4; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v6; // rax
  unsigned int v7; // r8d

  result = (PSLIST_ENTRY)*a1;
  HypercallCachedPages = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = (_SLIST_ENTRY *)*((_QWORD *)a1 + 2);
    v3[1].Next = (_SLIST_ENTRY *)*((_QWORD *)a1 + 3);
    return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)a1 + 1) + 24640LL), v3);
  }
  else if ( ((unsigned __int8)result & 2) != 0 )
  {
    v4 = *((_BYTE *)a1 + 8);
    if ( v4 < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = (PSLIST_ENTRY)v4;
      __writecr8(v4);
    }
  }
  else
  {
    v6 = KeGetCurrentPrcb();
    v7 = a1[3];
    if ( (v7 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v6->HypercallCachedPages;
    }
    else if ( (v7 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v6->HypercallCachedPages + 4096;
    }
    result = (PSLIST_ENTRY)*((_QWORD *)a1 + 3);
    *(_QWORD *)(HypercallCachedPages + 16) = result;
    if ( *((_BYTE *)a1 + 8) )
      _enable();
  }
  return result;
}
