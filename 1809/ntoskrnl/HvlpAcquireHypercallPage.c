/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140271A54
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
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
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
      a1[2].QuadPart = (LONGLONG)v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
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
        a1->LowPart = 4;
        v20 = v22;
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
    a1->LowPart = 4;
    v9 = v22;
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
