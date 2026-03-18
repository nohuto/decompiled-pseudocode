/*
 * XREFs of SmcStoreSlotAbort @ 0x1408EC204
 * Callers:
 *     SmcStoreCreate @ 0x1408EBA38 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x1408EC340 (SmcStoreSlotReserve.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _PRIVILEGE_SET *v6; // rbp

  v3 = (volatile signed __int64 *)(a1 + 160);
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v6 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  CmSiFreeMemory(v6);
}
