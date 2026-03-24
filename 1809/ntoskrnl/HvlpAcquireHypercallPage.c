/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140271864
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
 *     MmGetPhysicalAddress @ 0x1401210D0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
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
