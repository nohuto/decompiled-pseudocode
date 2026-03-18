/*
 * XREFs of TryLockShutdownShared @ 0x140832AD4
 * Callers:
 *     CmpSyncNextBackupHive @ 0x140831844 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x14009DCF0 (ExfTryAcquirePushLockShared.c)
 */

char TryLockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _KLOCK_ENTRY *v1; // rdi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1);
  v2 = 0;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&CmpShutdownLock) )
  {
    if ( v1 )
      v1->AcquiredByte |= 1u;
    return 1;
  }
  else
  {
    if ( v1 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, v1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v2;
}
