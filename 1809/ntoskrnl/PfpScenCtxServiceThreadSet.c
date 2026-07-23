/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x140574A7C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetThreadId @ 0x1401229A0 (PsGetThreadId.c)
 */

_QWORD *__fastcall PfpScenCtxServiceThreadSet(ULONG_PTR BugCheckParameter2, int a2)
{
  HANDLE v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  HANDLE ThreadId; // rax
  __int64 v6; // rbx
  struct _KTHREAD *v7; // rax
  char v8; // bp

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v6 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v2 = ThreadId;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 72) = v2;
  *(_QWORD *)(BugCheckParameter2 + 80) = v6;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
