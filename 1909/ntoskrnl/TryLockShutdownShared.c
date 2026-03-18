/*
 * XREFs of TryLockShutdownShared @ 0x140832134
 * Callers:
 *     CmpSyncNextBackupHive @ 0x14082D3B4 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C74B0 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
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
