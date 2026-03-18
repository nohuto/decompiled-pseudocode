/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x14082F044
 * Callers:
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 */

_QWORD *__fastcall CmpQueueLazyCommitWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) &= ~0x40u;
  v4 = (_QWORD *)qword_140463608;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_140463608 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v6 = CmpLazyCommitWorkItemActive == 0;
  *v5 = &CmpLazyCommitListHead;
  v5[1] = v4;
  *v4 = v5;
  qword_140463608 = (__int64)v5;
  if ( v6 )
  {
    v2 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
    return (_QWORD *)KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
  return result;
}
