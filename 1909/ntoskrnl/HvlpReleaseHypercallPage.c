/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1402861B8
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14015E604 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1401BE9C0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x140284674 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1402847CC (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x140284B28 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140285010 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14028539C (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140285908 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140285BE4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140285D74 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140285FE4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1402869AC (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140286B70 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140286C0C (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140286D60 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140287170 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140287270 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140287510 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140287840 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140287A10 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x140288000 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140288160 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140288280 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1402883E0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1402884E0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140288570 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140288850 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1402888E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1402889B0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140288A4C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140288BF0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140288D10 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140288EE0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1402891E0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140289400 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1402894A0 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140289540 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1402895F0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140289BC0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140289D20 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x14028A020 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x14028A428 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14028A4F0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14028A5B0 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x14028ABB8 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x14028AC9C (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14028ADD0 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x14028B080 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x14028B0F8 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x14028B474 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x14028B84C (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14028C250 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14028C3EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14028C7E0 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14028D2AC (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14028DDF8 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14028DEA8 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x14028DFC4 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14028E14C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14028E5AC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14034CD68 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x14034CEB0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14034D140 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x14034D2CC (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14034D428 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408509F4 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A39600 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
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
