/*
 * XREFs of NtNotifyChangeSession @ 0x1406A3AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  SIZE_T v11; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  ULONG v16; // eax
  ULONG v17; // eax
  _BYTE *v18; // rbx
  struct _WORK_QUEUE_ITEM *v19; // rax
  _BYTE *PoolWithTag; // rax
  unsigned __int16 v21; // r12
  _BYTE *v22; // rax
  char v23; // [rsp+30h] [rbp-1B8h]
  char v24; // [rsp+31h] [rbp-1B7h]
  KPROCESSOR_MODE v25; // [rsp+32h] [rbp-1B6h]
  NTSTATUS v26; // [rsp+50h] [rbp-198h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-188h] BYREF
  _OWORD Argument1[4]; // [rsp+70h] [rbp-178h] BYREF
  _BYTE v30[256]; // [rsp+B0h] [rbp-138h] BYREF

  v11 = PayloadSize;
  v23 = 0;
  memset(Argument1, 0, sizeof(Argument1));
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  if ( PayloadSize > 0x100 )
    return -1073741580;
  result = ObReferenceObjectByHandle(SessionHandle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v26 = result;
  if ( result < 0 )
    return result;
  v14 = Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 1304LL), Executive, 0, 0, 0LL);
  v15 = v14[3];
  v16 = *(_DWORD *)(v15 + 1300);
  if ( v16 == ChangeSequenceNumber )
  {
    v17 = v16 + 1;
LABEL_5:
    *(_DWORD *)(v15 + 1300) = v17;
    goto LABEL_6;
  }
  if ( v16 <= ChangeSequenceNumber || v16 - ChangeSequenceNumber >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v21 = 0;
    do
    {
      KeSetEvent((PRKEVENT)(v15 + 1304), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v14[3] + 1304LL), Executive, 0, 0, 0LL);
      ++v21;
      v15 = v14[3];
    }
    while ( v21 <= 0xAu && *(_DWORD *)(v15 + 1300) != ChangeSequenceNumber );
    v17 = ChangeSequenceNumber + 1;
    v11 = PayloadSize;
    goto LABEL_5;
  }
LABEL_6:
  if ( Event == IoSessionEventIgnore )
  {
    KeSetEvent((PRKEVENT)(v14[3] + 1304LL), 0, 0);
    ObfDereferenceObject(v14);
    return 0;
  }
  *(_DWORD *)(v14[3] + 1296LL) = NewState;
  v18 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_8;
  if ( v25 == 1 )
  {
    if ( (unsigned __int64)Payload + v11 > 0x7FFFFFFF0000LL || (char *)Payload + v11 < Payload )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x6E536F49u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v23 = 1;
      memmove(PoolWithTag, Payload, v11);
    }
    else
    {
      v18 = v30;
      memmove(v30, Payload, v11);
      v24 = 1;
    }
    LODWORD(v11) = PayloadSize;
    goto LABEL_8;
  }
  if ( (unsigned int)(Event - 1) > 1 )
  {
    v22 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x6E536F49u);
    v18 = v22;
    if ( v22 )
    {
      v23 = 1;
      memmove(v22, Payload, (unsigned int)v11);
      goto LABEL_8;
    }
    v24 = 1;
  }
  v18 = Payload;
LABEL_8:
  LODWORD(Argument1[2]) = Event;
  *(_QWORD *)((char *)&Argument1[2] + 4) = __PAIR64__(v11, NewState);
  *(_QWORD *)&Argument1[3] = v18;
  *((_QWORD *)&Argument1[3] + 1) = v14;
  if ( !v24 && (unsigned int)(Event - 1) > 1 )
  {
    v19 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6E536F49u);
    if ( v19 )
    {
      v19->List = (_LIST_ENTRY)Argument1[0];
      *(_OWORD *)&v19->WorkerRoutine = Argument1[1];
      v19[1].List = (_LIST_ENTRY)Argument1[2];
      *(_OWORD *)&v19[1].WorkerRoutine = Argument1[3];
      v19->WorkerRoutine = (void (__fastcall *)(void *))IopSessionChangeWorker;
      v19->Parameter = v19;
      v19->List.Flink = 0LL;
      ExQueueWorkItem(v19, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v14[3] + 1304LL), 0, 0);
  ObfDereferenceObject(v14);
  if ( v18 )
  {
    if ( v23 == 1 )
      ExFreePoolWithTag(v18, 0);
  }
  return v26;
}
