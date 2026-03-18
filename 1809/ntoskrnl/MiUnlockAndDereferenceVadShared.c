/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x1400754A0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1400747E0 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x14012F4B4 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140139BEC (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x1402BEAC0 (MmGetEnclaveModuleList.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x1406A3A2C (MiCheckForUserStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406B6C3C (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140704CC0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x14084BC70 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x140855624 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140857FE4 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x14085903C (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085C78C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
{
  BOOL v2; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  bool v5; // zf

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
    && (*((_DWORD *)P + 12) & 0x20000000) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x20u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
