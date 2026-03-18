/*
 * XREFs of ExGenRandom @ 0x1400BC4C0
 * Callers:
 *     RtlRandomEx @ 0x1400E3D90 (RtlRandomEx.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140111DDC (RtlpHeapGenerateRandomValue64.c)
 *     MiGenerateRandomPte @ 0x140129F80 (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x1401352A4 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiInitializeColorTable @ 0x140174A34 (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x140187074 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x140187F58 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1401A9C40 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1401BFA44 (RtlpLfhIncrementDataSlot.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x14030F69C (RtlpCreateHeapEncoding.c)
 *     sub_140344050 @ 0x140344050 (sub_140344050.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     PspSetupUserStack @ 0x14060EA90 (PspSetupUserStack.c)
 *     MiSelectImageBase @ 0x14066F6E8 (MiSelectImageBase.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140670298 (MiAllocateNewSubAllocatedRegion.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679C8C (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140692724 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406927FC (MiInitializeProcessBottomUpEntropy.c)
 *     sub_1406AEE44 @ 0x1406AEE44 (sub_1406AEE44.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406C968C (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x1406E9410 (RtlRandom.c)
 *     MiProcessLoadConfigForDriver @ 0x14070EB4C (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x14076A1F8 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x140789484 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x140898CC4 (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x1408CB1EC (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900FA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x140904F24 (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     MiInitializeSystemPtes @ 0x1409EE400 (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x1409EE8D0 (InitializePool.c)
 *     MiAssignTopLevelRanges @ 0x1409F06A0 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x1409F0920 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1409F0A04 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x1409F0ADC (MiInitializeTopLevelBitmap.c)
 *     MiInitializeNonPagedPool @ 0x1409F18B4 (MiInitializeNonPagedPool.c)
 *     ExpTimerInitialization @ 0x140A037B8 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A03BC8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     MiAssignSessionRanges @ 0x140A17964 (MiAssignSessionRanges.c)
 *     ExpInitSystemPhase0 @ 0x140A18050 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A1C988 (ExRngInitializeSystem.c)
 *     MiInitializeSharedUserData @ 0x140A1CEA0 (MiInitializeSharedUserData.c)
 *     MiInitializeUltraSpace @ 0x140A1D2CC (MiInitializeUltraSpace.c)
 *     MiInitializeRelocations @ 0x140A1EC28 (MiInitializeRelocations.c)
 *     MiInitializeBootDefaults @ 0x140A1F230 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rcx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // ecx
  __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v14 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v8 = ExpLeftoverBootRngData[v14];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v14], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0LL;
    v4 = (char *)&ExpLFGRngState + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = (unsigned int)(v5 + 1);
    v7 = 0LL;
    if ( v6 != 54 )
      v7 = (unsigned int)(v6 + 1);
    v8 = *(_DWORD *)&v4[4 * v3] - *(_DWORD *)&v4[4 * v7];
    *(_DWORD *)&v4[4 * v3] = v8;
    *((_DWORD *)v4 + 55) = v3;
    *((_DWORD *)v4 + 56) = v7;
  }
  KxReleaseSpinLock(&ExpLFGRngLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  v9 = ExpRNGAuxiliarySeed ^ v8;
  if ( (KeFeatureBits & 0x100000000LL) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v10 >= 0xA )
        return v9;
    }
    v9 ^= _RDX;
  }
  return v9;
}
