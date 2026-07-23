/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140075490
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x14012F5A4 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140139D0C (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x1402BEDB0 (MmGetEnclaveModuleList.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x1406A4CAC (MiCheckForUserStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x14084CEB0 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x14085A27C (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
