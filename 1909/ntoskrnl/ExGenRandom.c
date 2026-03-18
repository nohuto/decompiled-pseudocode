/*
 * XREFs of ExGenRandom @ 0x14009C340
 * Callers:
 *     RtlRandomEx @ 0x14008F010 (RtlRandomEx.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1401114CC (RtlpHeapGenerateRandomValue64.c)
 *     MiGenerateRandomPte @ 0x14012A9A0 (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140135BA4 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiInitializeColorTable @ 0x140175164 (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x140187624 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x140188508 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1401AA360 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1401C05C4 (RtlpLfhIncrementDataSlot.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x14030F0EC (RtlpCreateHeapEncoding.c)
 *     sub_140343AB0 @ 0x140343AB0 (sub_140343AB0.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     PspSetupUserStack @ 0x1406105A0 (PspSetupUserStack.c)
 *     MiSelectImageBase @ 0x14064904C (MiSelectImageBase.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     PspPrepareSystemDllInitBlock @ 0x14067FD40 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140685C94 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140685D6C (MiInitializeProcessBottomUpEntropy.c)
 *     sub_1406B0D74 @ 0x1406B0D74 (sub_1406B0D74.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406C80A4 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x1406EA830 (RtlRandom.c)
 *     MiProcessLoadConfigForDriver @ 0x14071092C (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x14078B8E4 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408984E4 (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x1408CAACC (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x140904884 (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     MiInitializeSystemPtes @ 0x1409EE318 (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x1409EE7E8 (InitializePool.c)
 *     MiAssignTopLevelRanges @ 0x1409F05B0 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x1409F0830 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1409F0914 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x1409F09EC (MiInitializeTopLevelBitmap.c)
 *     MiInitializeNonPagedPool @ 0x1409F17C4 (MiInitializeNonPagedPool.c)
 *     ExpTimerInitialization @ 0x140A03CD4 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A040E4 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     MiAssignSessionRanges @ 0x140A17E24 (MiAssignSessionRanges.c)
 *     ExpInitSystemPhase0 @ 0x140A18510 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A1CB64 (ExRngInitializeSystem.c)
 *     MiInitializeSharedUserData @ 0x140A1D07C (MiInitializeSharedUserData.c)
 *     MiInitializeUltraSpace @ 0x140A1D4A8 (MiInitializeUltraSpace.c)
 *     MiInitializeRelocations @ 0x140A1EE08 (MiInitializeRelocations.c)
 *     MiInitializeBootDefaults @ 0x140A1F410 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
