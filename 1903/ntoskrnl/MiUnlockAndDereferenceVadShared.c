/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140053990
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x140130558 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x14013ACE8 (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x1402D55C0 (MmGetEnclaveModuleList.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x1406C7DD8 (MiCheckForUserStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x140887150 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140891BE0 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x140892F00 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408992E0 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
{
  BOOL v2; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v4; // zf

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v4 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v4 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
