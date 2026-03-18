/*
 * XREFs of VrpDecrementSiloCount @ 0x1408412C4
 * Callers:
 *     VrpJobContextDelete @ 0x140841870 (VrpJobContextDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x140825B50 (CmUnRegisterCallback.c)
 */

_QWORD *VrpDecrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( !--VrpNumActiveSilos )
    CmUnRegisterCallback(VrpCallbackCookie);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
