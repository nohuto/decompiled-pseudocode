/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x140714468
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiIsRetpolineEnabled @ 0x14008E268 (MiIsRetpolineEnabled.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140158738 (RtlCaptureRetpolineImportRvas.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCaptureRetpolineImportInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int (*v7)(void); // r15
  __int64 result; // rax
  unsigned int v9; // ebx
  _DWORD *PoolWithTag; // rax
  char v11; // di
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 32LL);
  v7 = (unsigned int (*)(void))((unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)MiIsRetpolineEnabled());
  result = RtlCaptureRetpolineImportRvas(
             *(_QWORD *)(v6 + 48),
             *(_QWORD *)(v6 + 48),
             *(unsigned int *)(a1 + 64),
             v7,
             0LL,
             (unsigned int *)&NumberOfBytes);
  if ( (int)result >= 0 )
    goto LABEL_5;
  if ( (_DWORD)result == -1073741789 )
  {
    v9 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x69526D4Du);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    memset(PoolWithTag, 0, v9);
    result = RtlCaptureRetpolineImportRvas(
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 48),
               *(unsigned int *)(a1 + 64),
               v7,
               v3,
               (unsigned int *)&NumberOfBytes);
    if ( (int)result >= 0 )
    {
LABEL_5:
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 24, 0LL);
      *(_QWORD *)(*(_QWORD *)(v5 + 96) + 16LL) = v3;
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 24));
      KeAbPostRelease(v5 + 24);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
  }
  return result;
}
