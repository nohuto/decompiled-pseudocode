/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x1401B521C
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  volatile signed __int64 *v3; // rsi
  __int64 v4; // rax
  void *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  --CurrentThread->SpecialApcDisable;
  v3 = (volatile signed __int64 *)(v2 + 24);
  ExAcquirePushLockExclusiveEx(v2 + 24, 0LL);
  v4 = *(_QWORD *)(v2 + 88);
  v5 = *(void **)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
