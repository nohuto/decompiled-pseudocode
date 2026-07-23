/*
 * XREFs of ExGenRandom @ 0x1400627E0
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     MiGenerateRandomPte @ 0x1401311EC (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x14013987C (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x14013DBC0 (RtlRandomEx.c)
 *     MiInitializeColorTable @ 0x14016A5CC (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x14017EA20 (MiBuildDynamicRegion.c)
 *     MiAssignSharedUserRanges @ 0x140187A90 (MiAssignSharedUserRanges.c)
 *     CcBcbProfiler @ 0x14019F460 (CcBcbProfiler.c)
 *     IopInitializeInMemoryDumpData @ 0x140281938 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1402F0CEC (RtlpCreateHeapEncoding.c)
 *     sub_140322760 @ 0x140322760 (sub_140322760.c)
 *     sub_140581010 @ 0x140581010 (sub_140581010.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 *     PspSetupUserStack @ 0x1405F9DD0 (PspSetupUserStack.c)
 *     MiSelectImageBase @ 0x1406509BC (MiSelectImageBase.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679364 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14067B028 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14067B100 (MiInitializeProcessBottomUpEntropy.c)
 *     MiProcessLoadConfigForDriver @ 0x140683008 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     sub_140691F64 @ 0x140691F64 (sub_140691F64.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406A93E0 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x1406C9DF0 (RtlRandom.c)
 *     CmpCmdInit @ 0x140748FF8 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x140763A44 (MiGenerateSecureCookie.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1408C8D30 (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     ExpTimerInitialization @ 0x1409B1324 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x1409B78BC (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x1409B7DF8 (InitializePool.c)
 *     MiInitializeRelocations @ 0x1409BAA40 (MiInitializeRelocations.c)
 *     MiInitializeNonPagedPool @ 0x1409BE0D4 (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x1409D3A80 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x1409D3CE0 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1409D3DC0 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x1409D3E8C (MiInitializeTopLevelBitmap.c)
 *     MiAssignSessionRanges @ 0x1409D4794 (MiAssignSessionRanges.c)
 *     ExpInitSystemPhase0 @ 0x1409D61A0 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x1409DA0AC (ExRngInitializeSystem.c)
 *     MiInitializeSharedUserData @ 0x1409DA5F0 (MiInitializeSharedUserData.c)
 *     MiInitializeUltraSpace @ 0x1409DACD4 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x1409DCEF0 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
