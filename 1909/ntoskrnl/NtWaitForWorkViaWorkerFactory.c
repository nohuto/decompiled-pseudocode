/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1400443F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     ExpWorkerFactoryStartDeferredWork @ 0x140045890 (ExpWorkerFactoryStartDeferredWork.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140045A30 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x140045BC0 (ExpAddCurrentThreadToThreadHistory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140113E98 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14012B80C (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14012DC14 (ExpWorkerFactoryWantsToCreate.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtAlpcSendWaitReceivePort @ 0x1405DF5B0 (NtAlpcSendWaitReceivePort.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1406B83A0 (AlpciDestroyDeferredMessageContext.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtWaitForWorkViaWorkerFactory(
        HANDLE Handle,
        volatile void *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5)
{
  unsigned int v6; // r14d
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  PKSPIN_LOCK *v11; // rdi
  _BYTE *PoolWithTag; // r12
  PKSPIN_LOCK v13; // rcx
  int HandleInformation; // [rsp+28h] [rbp-170h]
  int v16; // [rsp+38h] [rbp-160h]
  __int64 v17; // [rsp+40h] [rbp-158h] BYREF
  PVOID P; // [rsp+48h] [rbp-150h]
  unsigned int v19; // [rsp+50h] [rbp-148h]
  volatile void *Address; // [rsp+58h] [rbp-140h]
  PVOID v21; // [rsp+60h] [rbp-138h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-130h] BYREF
  _BYTE v23[40]; // [rsp+80h] [rbp-118h] BYREF
  HANDLE v24; // [rsp+A8h] [rbp-F0h]
  volatile void *v25; // [rsp+B0h] [rbp-E8h]
  _DWORD *v26; // [rsp+B8h] [rbp-E0h]
  PVOID Object; // [rsp+C0h] [rbp-D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-D0h]
  _BYTE v29[128]; // [rsp+D0h] [rbp-C8h] BYREF

  v6 = a3;
  Address = a2;
  v24 = Handle;
  v25 = a2;
  v19 = a3;
  v26 = a4;
  memset(v23, 0, sizeof(v23));
  memset(&LockHandle, 0, sizeof(LockHandle));
  HIDWORD(v17) = 0;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
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
    v9 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 + 24 > 0x7FFFFFFF0000LL || a5 + 24 < a5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)&v23[16] = *(_OWORD *)a5;
    *(_QWORD *)&v23[32] = *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_OWORD *)&v23[16] = *(_OWORD *)a5;
    *(_QWORD *)&v23[32] = *(_QWORD *)(a5 + 16);
  }
  v10 = ObReferenceObjectByHandle(Handle, 2u, ExpWorkerFactoryObjectType, v8, &Object, 0LL);
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
      LOBYTE(v16) = 1;
      LOBYTE(HandleInformation) = v8;
      v10 = IoRemoveIoCompletion(
              v11[2][1],
              Address,
              PoolWithTag,
              v6,
              (char *)&v17 + 4,
              HandleInformation,
              0LL,
              v16,
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
      *a4 = HIDWORD(v17);
  }
LABEL_29:
  if ( PoolWithTag != v29 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( (v23[36] & 1) != 0 )
    NtAlpcSendWaitReceivePort(
      *(_QWORD *)&v23[24],
      *(unsigned int *)&v23[32],
      *(_QWORD *)&v23[16],
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  return (unsigned int)v10;
}
