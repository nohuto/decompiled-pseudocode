/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140271764
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
 *     MmGetPhysicalAddress @ 0x1401210B0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C53B0 (RtlpInterlockedPopEntrySList.c)
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
