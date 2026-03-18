/*
 * XREFs of PfpScenCtxQueryScenarioInformation @ 0x14059D5B4
 * Callers:
 *     PfpQueryScenarioInformation @ 0x140728270 (PfpQueryScenarioInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PfpScenCtxQueryScenarioInformation(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(BugCheckParameter2 + 48);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(BugCheckParameter2 + 52);
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == 3 )
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(BugCheckParameter2 + 56);
  KeResetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64));
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
