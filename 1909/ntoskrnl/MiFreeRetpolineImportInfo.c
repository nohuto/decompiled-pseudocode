/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x140789374
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     VslFreeSecureImageIat @ 0x140291238 (VslFreeSecureImageIat.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rsi
  __int64 v5; // rax
  void *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)(v3 + 24);
  ExAcquirePushLockExclusiveEx(v3 + 24, 0LL);
  v5 = *(_QWORD *)(v3 + 96);
  v6 = *(void **)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (MiFlags & 0x10000) != 0 )
    VslFreeSecureImageIat(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 56LL));
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
