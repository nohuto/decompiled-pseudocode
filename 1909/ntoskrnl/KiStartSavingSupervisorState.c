/*
 * XREFs of KiStartSavingSupervisorState @ 0x1405AB460
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiUpdateSavedSupervisorState @ 0x1405AB4E0 (KiUpdateSavedSupervisorState.c)
 */

__int64 KiStartSavingSupervisorState()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiSupervisorXStateFeaturesLock, 0LL);
  updated = KiUpdateSavedSupervisorState();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock);
  KeAbPostRelease((ULONG_PTR)&KiSupervisorXStateFeaturesLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return updated;
}
