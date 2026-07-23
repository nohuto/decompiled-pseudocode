/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x140165F80
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14031BBB0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1C58 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x140108294 (ExpFindEmptyEntry.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x140108440 (ExpFindCurrentThread.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     ExpGetThreadResourceHint @ 0x140114410 (ExpGetThreadResourceHint.c)
 *     ExpPrepareToWaitForResourceShared @ 0x140137F00 (ExpPrepareToWaitForResourceShared.c)
 *     ExpTryAcquireResourceShared @ 0x140166154 (ExpTryAcquireResourceShared.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313670 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313B38 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  ERESOURCE_THREAD CurrentThread; // rsi
  bool v5; // bp
  KSPIN_LOCK *p_SpinLock; // rdi
  __int16 v7; // ax
  unsigned int ThreadResourceHint; // eax
  ERESOURCE_THREAD *v9; // rax
  ERESOURCE_THREAD *v10; // r8
  int v11; // edi
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v17; // di
  ULONG v19; // ecx
  int v20; // r15d
  _QWORD *EmptyEntry; // rax
  _QWORD *v22; // r12
  ULONG v23; // edi
  _QWORD *v24; // rax
  int v25; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v27[56]; // [rsp+48h] [rbp-60h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63BCu);
  p_SpinLock = &Resource->SpinLock;
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v17 = ExpTryAcquireResourceShared(Resource);
        v19 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = CurrentThread;
        Resource->OwnerEntry.TableSize = v19 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v17;
      }
      v7 = Resource->Flag & 0x80;
      if ( !v7 )
        break;
      if ( Resource->OwnerEntry.OwnerThread == CurrentThread )
      {
        v23 = Resource->OwnerEntry.TableSize + 8;
        Resource->OwnerEntry.TableSize = v23;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x63C0u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65585LL, Resource, v23 >> 3, Resource->ContentionCount);
        return 1;
      }
LABEL_17:
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x63D0u);
        return 0;
      }
      v20 = 0;
      if ( !v7 )
      {
        v22 = 0LL;
LABEL_29:
        ExpPrepareToWaitForResourceShared((__int64)Resource, CurrentThread, (__int64)v27);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x63CCu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost();
        ExpWaitForResource(
          &Resource->SystemResourcesList,
          (__int64)v27,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( !v22 )
        {
          KeAcquireInStackQueuedSpinLock(p_SpinLock, &LockHandle);
          do
            v24 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
          while ( !v24 );
          v25 = v24[1] & 7;
          *v24 = CurrentThread;
          *((_DWORD *)v24 + 2) = v25 | 8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( (CurrentThread & 3) == 0 )
          v20 = *(unsigned __int8 *)(CurrentThread + 649);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v20);
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( v5 )
        {
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
          return 1;
        }
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)&LockHandle);
      v22 = EmptyEntry;
      if ( EmptyEntry )
      {
        *EmptyEntry = CurrentThread;
        *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
        goto LABEL_29;
      }
    }
    if ( Resource->NumberOfExclusiveWaiters )
      goto LABEL_17;
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
    v9 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, ThreadResourceHint);
    v10 = v9;
  }
  while ( !v9 );
  v11 = *((_DWORD *)v9 + 2);
  v12 = v11 & 7;
  if ( *v10 )
  {
    v14 = v12 | (v11 + 8) & 0xFFFFFFF8;
    *((_DWORD *)v10 + 2) = v14;
  }
  else
  {
    *v10 = CurrentThread;
    *((_DWORD *)v10 + 2) = v12 | 8;
    ExpTryAcquireResourceShared(Resource);
    v14 = *(_DWORD *)(v13 + 8);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (v14 & 0xFFFFFFF8) == 8 )
  {
    v15 = 65601LL;
    v16 = 25540;
  }
  else
  {
    v15 = 65617LL;
    v16 = 25544;
  }
  __incgsdword(v16);
  __incgsdword(0x63C8u);
  if ( !v5 )
    return 1;
  PerfLogExecutiveResourceAcquire(v15, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
