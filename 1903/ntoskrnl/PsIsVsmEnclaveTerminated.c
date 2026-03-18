/*
 * XREFs of PsIsVsmEnclaveTerminated @ 0x1408CCA34
 * Callers:
 *     MiCanDeleteEnclave @ 0x1402D3764 (MiCanDeleteEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

bool __fastcall PsIsVsmEnclaveTerminated(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rdi
  int v4; // eax
  bool v5; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v4 = *(_DWORD *)(a1 + 44);
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
    v4 = *(_DWORD *)(a1 + 44);
  }
  v5 = v4 == 2;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  return v5;
}
