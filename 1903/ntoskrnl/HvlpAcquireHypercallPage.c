/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14028582C
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
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
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
