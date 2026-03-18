/*
 * XREFs of ExGenRandom @ 0x1400627E0
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAE80 (RtlpHpLfhSlotAllocate.c)
 *     MiGenerateRandomPte @ 0x1401310FC (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x14013975C (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x14013DAA0 (RtlRandomEx.c)
 *     MiInitializeColorTable @ 0x14016A4AC (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x14017E8C0 (MiBuildDynamicRegion.c)
 *     MiAssignSharedUserRanges @ 0x140187930 (MiAssignSharedUserRanges.c)
 *     CcBcbProfiler @ 0x14019F300 (CcBcbProfiler.c)
 *     IopInitializeInMemoryDumpData @ 0x140281648 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1402F09FC (RtlpCreateHeapEncoding.c)
 *     sub_140322470 @ 0x140322470 (sub_140322470.c)
 *     sub_140580010 @ 0x140580010 (sub_140580010.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x1405F6E40 (PspUserThreadStartup.c)
 *     PspSetupUserStack @ 0x1405F8DD0 (PspSetupUserStack.c)
 *     MiSelectImageBase @ 0x14064F81C (MiSelectImageBase.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406781C4 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140679E88 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140679F60 (MiInitializeProcessBottomUpEntropy.c)
 *     MiProcessLoadConfigForDriver @ 0x140681E68 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 *     sub_140690DC4 @ 0x140690DC4 (sub_140690DC4.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EC0 (MiAllocateNewSubAllocatedRegion.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406A8160 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x1406C8B70 (RtlRandom.c)
 *     CmpCmdInit @ 0x140747E28 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x140762874 (MiGenerateSecureCookie.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3DA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1408C7A90 (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     ExpTimerInitialization @ 0x1409B0324 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x1409B68BC (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x1409B6DF8 (InitializePool.c)
 *     MiInitializeRelocations @ 0x1409B9A40 (MiInitializeRelocations.c)
 *     MiInitializeNonPagedPool @ 0x1409BD0D4 (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x1409D2A80 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x1409D2CE0 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1409D2DC0 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x1409D2E8C (MiInitializeTopLevelBitmap.c)
 *     MiAssignSessionRanges @ 0x1409D3794 (MiAssignSessionRanges.c)
 *     ExpInitSystemPhase0 @ 0x1409D51A0 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x1409D90AC (ExRngInitializeSystem.c)
 *     MiInitializeSharedUserData @ 0x1409D95F0 (MiInitializeSharedUserData.c)
 *     MiInitializeUltraSpace @ 0x1409D9CD4 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x1409DBEF0 (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
