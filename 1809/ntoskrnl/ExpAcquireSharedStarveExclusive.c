/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1400B1950
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400ADFE0 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1C58 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x140108294 (ExpFindEmptyEntry.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x140108440 (ExpFindCurrentThread.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     ExpGetThreadResourceHint @ 0x140114410 (ExpGetThreadResourceHint.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x14012E608 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x140137F00 (ExpPrepareToWaitForResourceShared.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313670 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313B38 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  bool v5; // di
  unsigned int SpareByte0; // r14d
  int v7; // ecx
  int ThreadResourceHint; // eax
  __int64 EmptyEntry; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v20[56]; // [rsp+48h] [rbp-50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63A4u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  SpareByte0 = 0;
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      v7 = *(_DWORD *)(a1 + 56) & 7;
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      *(_DWORD *)(a1 + 56) = v7 | 8;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x63ACu);
      __incgsdword(0x6364u);
      if ( !v5 )
        return 1;
      goto LABEL_26;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v16 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v16;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x63A8u);
        __incgsdword(0x6364u);
        if ( v5 )
        {
          v17 = 65585LL;
          v18 = v16 >> 3;
          goto LABEL_27;
        }
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     (_DWORD)CurrentThread,
                     (unsigned int)&LockHandle,
                     1,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
  }
  while ( !EmptyEntry );
  if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
  {
    v11 = *(_DWORD *)(EmptyEntry + 8) + 8;
    *(_DWORD *)(EmptyEntry + 8) = v11;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x63B0u);
    __incgsdword(0x6364u);
    if ( v5 )
    {
      v17 = 65617LL;
      v18 = v11 >> 3;
      goto LABEL_27;
    }
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceSharedStarveExclusive(a1, EmptyEntry) )
  {
    v14 = *(_DWORD *)(v12 + 8) & 7;
    *(_QWORD *)v12 = CurrentThread;
    *(_DWORD *)(v12 + 8) = v14 | 8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_13:
    if ( ((unsigned __int8)CurrentThread & 3) == 0 )
      SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    ExpBoostIoAfterAcquire(a1, CurrentThread, SpareByte0);
    __incgsdword(0x63ACu);
    __incgsdword(0x6364u);
    if ( !v5 )
      return 1;
LABEL_26:
    v17 = 65601LL;
    v18 = 1LL;
LABEL_27:
    PerfLogExecutiveResourceAcquire(v17, a1, v18, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v15 = *(_DWORD *)(v12 + 8) & 7;
    *(_QWORD *)v12 = CurrentThread;
    *(_DWORD *)(v12 + 8) = v15 | 8;
    ExpPrepareToWaitForResourceShared(v13, CurrentThread, v20);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x63B4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, v20, 66116LL, ExpApplyRewaitBoost);
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x63B8u);
  return 0;
}
