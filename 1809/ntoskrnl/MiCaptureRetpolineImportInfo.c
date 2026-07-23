/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x1401B50D8
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1401B6030 (RtlCaptureRetpolineImportRvas.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCaptureRetpolineImportInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 result; // rax
  size_t v9; // rbx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a2 + 96);
  v5 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = *(_QWORD *)(v4 + 32);
  v7 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0);
  result = RtlCaptureRetpolineImportRvas(
             *(_QWORD *)(a1 + 48),
             *(_QWORD *)(a1 + 48),
             *(_DWORD *)(a1 + 64),
             v7,
             0LL,
             (__int64)&NumberOfBytes);
  if ( (int)result >= 0 )
    goto LABEL_6;
  if ( (_DWORD)result != -1073741789 )
    return result;
  v9 = (unsigned int)NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x69526D4Du);
  v5 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v9);
  result = RtlCaptureRetpolineImportRvas(
             *(_QWORD *)(a1 + 48),
             *(_QWORD *)(a1 + 48),
             *(_DWORD *)(a1 + 64),
             v7,
             v5,
             (__int64)&NumberOfBytes);
  if ( (int)result >= 0 )
  {
LABEL_6:
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 24, 0LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 88) + 16LL) = v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 24));
    KeAbPostRelease(v6 + 24);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  return result;
}
