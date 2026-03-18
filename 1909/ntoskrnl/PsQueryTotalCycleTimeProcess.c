/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x1405B4CC0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140001878 (KeUpdateTotalCyclesCurrentThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rbx
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 1760);
  ExAcquirePushLockSharedEx(a1 + 1760, 0LL);
  v6 = *(_QWORD *)(a1 + 600);
  v7 = (_QWORD **)(a1 + 1160);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = *(v8 - 206);
    v8 = (_QWORD *)*v8;
    v6 += v9;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
