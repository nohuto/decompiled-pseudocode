/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x14068E330
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x14068E300 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PspSetProcessPriorityByClass @ 0x1400E4070 (PspSetProcessPriorityByClass.c)
 */

_QWORD *__fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // r14d
  BOOL v8; // r12d
  volatile signed __int64 *v9; // rbp
  int v11; // ecx

  CurrentThread = KeGetCurrentThread();
  v7 = a3 != 0 ? 0x20000 : 0x10000;
  v8 = 1;
  --CurrentThread->KernelApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 736);
  ExAcquirePushLockExclusiveEx(a1 + 736, 0LL);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1788), v7);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 1788);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1788), ~v7);
    v8 = (v11 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v8);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
