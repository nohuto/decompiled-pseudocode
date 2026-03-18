/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140053A30
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x1401310E8 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x14013B138 (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x1402D5320 (MmGetEnclaveModuleList.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x1406C610C (MiCheckForUserStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x14072D550 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x14088697C (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140891400 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x140892720 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140898B00 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
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
  if ( v4 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
