/*
 * XREFs of PsCaptureExceptionPort @ 0x140610964
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     DbgkForwardException @ 0x1406F97B8 (DbgkForwardException.c)
 *     ExpRaiseHardError @ 0x14072EE70 (ExpRaiseHardError.c)
 *     PspFreezeProcessWorker @ 0x1408C9410 (PspFreezeProcessWorker.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
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
