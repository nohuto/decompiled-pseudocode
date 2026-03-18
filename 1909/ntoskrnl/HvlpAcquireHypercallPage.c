/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14028558C
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
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  __int16 v9; // ax
  struct _KPRCB *v10; // rax
  _QWORD *result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // dl
  __int16 v20; // ax
  struct _KPRCB *v21; // rax
  __int16 v22; // [rsp+40h] [rbp-8h]

  HypercallCachedPages = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v13->Next;
    if ( v13 )
    {
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
      a1[2].QuadPart = (LONGLONG)v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
    }
    else
    {
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( a3 )
      {
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = v16 + a4 - 1;
        p_Next = (_QWORD *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          p_Next = (_QWORD *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        a1->LowPart = 2;
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(a1[1].LowPart) = CurrentIrql;
        if ( CurrentIrql < 2u )
        {
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v19 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
        }
        Next = MmGetPhysicalAddress(p_Next);
      }
      else
      {
        v20 = v22;
        a1->LowPart = 4;
        _disable();
        a1[1].HighPart = a2;
        LOBYTE(a1[1].LowPart) = (v20 & 0x200) != 0;
        v21 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
        {
          p_Next = v21->HypercallCachedPages;
        }
        else if ( (a2 & 2) != 0 )
        {
          p_Next = (char *)v21->HypercallCachedPages + 4096;
        }
        Next = (PHYSICAL_ADDRESS)p_Next[2];
      }
    }
    a1[3] = Next;
    return p_Next;
  }
  else
  {
    v9 = v22;
    a1->LowPart = 4;
    _disable();
    a1[1].HighPart = a2;
    LOBYTE(a1[1].LowPart) = (v9 & 0x200) != 0;
    v10 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages + 4096;
    }
    result = (_QWORD *)HypercallCachedPages;
    a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  }
  return result;
}
