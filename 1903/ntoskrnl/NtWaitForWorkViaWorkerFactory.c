/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x140044350
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     ExpWorkerFactoryStartDeferredWork @ 0x1400457F0 (ExpWorkerFactoryStartDeferredWork.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140045990 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x140045B20 (ExpAddCurrentThreadToThreadHistory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005B9E0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140114608 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14012ADEC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14012D1C4 (ExpWorkerFactoryWantsToCreate.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtAlpcSendWaitReceivePort @ 0x1405DEDB0 (NtAlpcSendWaitReceivePort.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1406BCB80 (AlpciDestroyDeferredMessageContext.c)
 *     ExSystemExceptionFilter @ 0x140747FD0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r14d
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  int v10; // ebx
  PKSPIN_LOCK *v11; // rdi
  _BYTE *PoolWithTag; // r12
  PKSPIN_LOCK v13; // rcx
  int HandleInformation; // [rsp+28h] [rbp-170h]
  int Timeout; // [rsp+38h] [rbp-160h]
  __int64 v17; // [rsp+40h] [rbp-158h] BYREF
  PVOID P; // [rsp+48h] [rbp-150h]
  ULONG v19; // [rsp+50h] [rbp-148h]
  volatile void *Address; // [rsp+58h] [rbp-140h]
  PVOID v21; // [rsp+60h] [rbp-138h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-130h] BYREF
  _BYTE v23[40]; // [rsp+80h] [rbp-118h] BYREF
  HANDLE v24; // [rsp+A8h] [rbp-F0h]
  PFILE_IO_COMPLETION_INFORMATION v25; // [rsp+B0h] [rbp-E8h]
  PULONG v26; // [rsp+B8h] [rbp-E0h]
  PVOID Object; // [rsp+C0h] [rbp-D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-D0h]
  _BYTE v29[128]; // [rsp+D0h] [rbp-C8h] BYREF

  v6 = Count;
  Address = MiniPackets;
  v24 = WorkerFactoryHandle;
  v25 = MiniPackets;
  v19 = Count;
  v26 = PacketsReturned;
  memset(v23, 0, sizeof(v23));
  memset(&LockHandle, 0, sizeof(LockHandle));
  HIDWORD(v17) = 0;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  LOBYTE(v17) = v8;
  P = v29;
  if ( v6 - 1 > 0x7FFFFFE )
  {
    v10 = -1073741811;
LABEL_48:
    PoolWithTag = P;
    goto LABEL_29;
  }
  if ( v8 )
  {
    ProbeForWrite(Address, 32LL * v6, 8u);
    v9 = (__int64)PacketsReturned;
    if ( (unsigned __int64)PacketsReturned >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_WORKER_FACTORY_DEFERRED_WORK *)&v23[16] = *DeferredWork;
  }
  else
  {
    *(_WORKER_FACTORY_DEFERRED_WORK *)&v23[16] = *DeferredWork;
  }
  v10 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, v8, &Object, 0LL);
  v11 = (PKSPIN_LOCK *)Object;
  v21 = Object;
  if ( v10 < 0 )
    goto LABEL_48;
  if ( v6 > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v6, 0x656E6F4Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = 16;
      PoolWithTag = v29;
      P = v29;
    }
  }
  else
  {
    PoolWithTag = P;
  }
  KeAcquireInStackQueuedSpinLock(v11[2], &LockHandle);
  v13 = v11[2];
  if ( *((_BYTE *)v13 + 33) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v10 = 128;
  }
  else
  {
    if ( ((_DWORD)v11[39] & 0x200) != 0 )
    {
      ExpLeaveWorkerFactoryAwayMode(v11);
      v13 = v11[2];
    }
    ++*((_DWORD *)v13 + 7);
    while ( *((_DWORD *)v11 + 71) >= *((_DWORD *)v11 + 72) && !*((_BYTE *)v11[2] + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExpWorkerFactoryStartDeferredWork(v23, v8);
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = v8;
      v10 = IoRemoveIoCompletion(
              v11[2][1],
              Address,
              PoolWithTag,
              v6,
              (char *)&v17 + 4,
              HandleInformation,
              0LL,
              Timeout,
              v17);
      if ( (v23[36] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(v23);
        *(_DWORD *)&v23[36] &= ~1u;
      }
      KeAcquireInStackQueuedSpinLock(v11[2], &LockHandle);
      if ( v10 != 258
        || !(unsigned __int8)ExpWorkerFactoryWantsToCreate(v11, 1LL)
        && *((_DWORD *)v11 + 72) > *((_DWORD *)v11 + 70)
        && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
      {
        goto LABEL_23;
      }
    }
    v10 = 258;
LABEL_23:
    --*((_DWORD *)v11[2] + 7);
    if ( v10 == 258 )
    {
      --*((_DWORD *)v11 + 72);
      --*((_DWORD *)v11 + 73);
      ExpRemoveCurrentThreadFromThreadHistory(v11);
    }
    else
    {
      ExpAddCurrentThreadToThreadHistory(v11);
    }
    if ( (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v11) )
      ExpWorkerFactoryCheckCreate(v11, &LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v10 )
      *PacketsReturned = HIDWORD(v17);
  }
LABEL_29:
  if ( PoolWithTag != v29 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( (v23[36] & 1) != 0 )
    NtAlpcSendWaitReceivePort(
      *(HANDLE *)&v23[24],
      *(ULONG *)&v23[32],
      *(PPORT_MESSAGE *)&v23[16],
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  return v10;
}
