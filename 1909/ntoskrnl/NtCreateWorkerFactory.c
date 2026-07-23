/*
 * XREFs of NtCreateWorkerFactory @ 0x140680E40
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExpInitializeThreadHistory @ 0x1400E8C2C (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x1400E8C90 (KeInitializeTimer2.c)
 *     KeDisableQueueingPriorityIncrement @ 0x1400E8E54 (KeDisableQueueingPriorityIncrement.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     IoAllocateMiniCompletionPacket @ 0x1406816A0 (IoAllocateMiniCompletionPacket.c)
 *     IoFreeMiniCompletionPacket @ 0x14068AC90 (IoFreeMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  int v11; // r12d
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v15; // r8
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v17; // rsi
  int v18; // ebx
  volatile signed __int32 *v19; // rcx
  PVOID v20; // r14
  __int64 MiniCompletionPacket; // rax
  int v22; // r9d
  int v23; // ecx
  _QWORD *v24; // rdi
  SIZE_T v25; // rcx
  SIZE_T v26; // rcx
  PVOID v27; // rcx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  v11 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WorkerFactoryHandleReturn < 0x7FFFFFFF0000LL )
      v15 = (__int64)WorkerFactoryHandleReturn;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v17 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v18 = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  v19 = (volatile signed __int32 *)Object;
  *((_QWORD *)v17 + 1) = Object;
  if ( v18 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(v17, 0);
    return v18;
  }
  KeDisableQueueingPriorityIncrement(v19);
  v18 = ObReferenceObjectByHandleWithTag(
          WorkerProcessHandle,
          0x2Au,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v31,
          0LL);
  if ( v18 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*((PVOID *)v17 + 1));
    goto LABEL_26;
  }
  v20 = v31;
  if ( KeGetCurrentThread()->ApcState.Process != v31 )
  {
    v18 = -1073741811;
    goto LABEL_24;
  }
  v18 = ObOpenObjectByPointer(v31, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v18 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v20, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine);
  *((_QWORD *)v17 + 2) = MiniCompletionPacket;
  v23 = 0;
  if ( !MiniCompletionPacket )
  {
    v18 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  LOBYTE(v22) = PreviousMode;
  LOBYTE(v23) = PreviousMode;
  v18 = ObCreateObject(v23, (_DWORD)ExpWorkerFactoryObjectType, v11, v22, 0, 576, 0, 0, (__int64)&v32);
  if ( v18 < 0 )
  {
    IoFreeMiniCompletionPacket(*((_QWORD *)v17 + 2));
    goto LABEL_23;
  }
  v24 = v32;
  *((_QWORD *)v32 + 2) = v17;
  v24[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v24 + 70) = 0;
  *((_DWORD *)v24 + 71) = MaxThreadCount;
  *((_DWORD *)v24 + 75) = 0;
  v24[36] = 0LL;
  v25 = 0x10000LL;
  if ( StackReserve )
    v25 = StackReserve;
  v24[7] = v25;
  memset(v24 + 15, 0, 0xA0uLL);
  v24[39] = 0LL;
  v26 = 4096LL;
  if ( StackCommit )
    v26 = StackCommit;
  v24[8] = v26;
  v24[3] = StartRoutine;
  v24[4] = StartParameter;
  v24[38] = 0LL;
  *((_DWORD *)v24 + 80) = 0;
  v24[5] = Handle;
  v24[6] = v20;
  *((_DWORD *)v24 + 74) = 0;
  *((_DWORD *)v24 + 142) = 0;
  *((_DWORD *)v24 + 128) = 1;
  KeInitializeTimer2((__int64)(v24 + 41));
  ExpInitializeThreadHistory((__int64)v24);
  v24[13] = 0LL;
  ObfReferenceObject(v27);
  KeRegisterObjectNotification((__int64)(v24 + 41), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v24 + 58));
  v34[0] = 0LL;
  v34[1] = -1LL;
  KeSetTimer2((__int64)(v24 + 41), v24[14], -v24[14], (__int64)v34);
  result = ObInsertObject(v24, 0LL, DesiredAccess, 0, 0LL, &v33);
  if ( result >= 0 )
    *WorkerFactoryHandleReturn = v33;
  return result;
}
