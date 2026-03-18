/*
 * XREFs of PsCaptureExceptionPort @ 0x14060EE54
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     DbgkForwardException @ 0x1406F79F8 (DbgkForwardException.c)
 *     ExpRaiseHardError @ 0x14072CFA8 (ExpRaiseHardError.c)
 *     PspFreezeProcessWorker @ 0x1408C9B30 (PspFreezeProcessWorker.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  void *v4; // rbx

  if ( !*(_QWORD *)(a1 + 856) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (signed __int64 *)(a1 + 736);
  ExAcquirePushLockSharedEx(a1 + 736, 0LL);
  v4 = (void *)(*(_QWORD *)(a1 + 856) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObject(v4);
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
