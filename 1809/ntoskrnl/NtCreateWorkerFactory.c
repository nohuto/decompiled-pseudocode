/*
 * XREFs of NtCreateWorkerFactory @ 0x14068A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400FD2C0 (KeRegisterObjectNotification.c)
 *     ExpInitializeThreadHistory @ 0x1400FD468 (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x1400FD4D0 (KeInitializeTimer2.c)
 *     KeDisableQueueingPriorityIncrement @ 0x1400FDA00 (KeDisableQueueingPriorityIncrement.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E9C20 (IopFreeMiniCompletionPacket.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1406470C0 (ObOpenObjectByPointer.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068A7D0 (IoAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall NtCreateWorkerFactory(
        __int64 *a1,
        unsigned int a2,
        int a3,
        void *a4,
        ULONG_PTR BugCheckParameter1,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v15; // r8
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v17; // rsi
  int v18; // ebx
  volatile signed __int32 *v19; // rcx
  PVOID v20; // r14
  __int64 MiniCompletionPacket; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  PVOID v25; // rcx
  __int64 result; // rax
  __int64 v27; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v30; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  __int64 v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a1;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v17 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return (unsigned int)-1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v18 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &v30, 0LL);
  v19 = (volatile signed __int32 *)v30;
  *((_QWORD *)v17 + 1) = v30;
  if ( v18 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)v18;
  }
  KeDisableQueueingPriorityIncrement(v19);
  v18 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          42,
          (__int64)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v31,
          0LL,
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
  if ( !MiniCompletionPacket )
  {
    v18 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  v18 = ObCreateObjectEx(
          PreviousMode,
          ExpWorkerFactoryObjectType,
          a3,
          PreviousMode,
          (__int64)Object,
          416,
          0,
          0,
          &v32,
          0LL);
  if ( v18 < 0 )
  {
    v27 = *((_QWORD *)v17 + 2);
    *(_QWORD *)(v27 + 56) = 0LL;
    IopFreeMiniCompletionPacket((struct _SLIST_ENTRY *)v27);
    goto LABEL_23;
  }
  v22 = v32;
  *((_QWORD *)v32 + 2) = v17;
  v22[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v22 + 30) = 0;
  *((_DWORD *)v22 + 31) = a8;
  *(_QWORD *)((char *)v22 + 140) = 0LL;
  v22[16] = 0LL;
  v23 = 0x10000LL;
  if ( a9 )
    v23 = a9;
  v22[7] = v23;
  v22[19] = 0LL;
  v24 = 4096LL;
  if ( a10 )
    v24 = a10;
  v22[8] = v24;
  v22[3] = a6;
  v22[4] = a7;
  *((_DWORD *)v22 + 37) = 0;
  *((_DWORD *)v22 + 40) = 0;
  v22[5] = Handle;
  v22[6] = v20;
  *((_DWORD *)v22 + 34) = 0;
  *((_DWORD *)v22 + 102) = 0;
  *((_DWORD *)v22 + 88) = 1;
  KeInitializeTimer2((__int64)(v22 + 21));
  ExpInitializeThreadHistory((__int64)v22);
  v22[13] = 0LL;
  ObfReferenceObject(v25);
  KeRegisterObjectNotification((__int64)(v22 + 21), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v22 + 38));
  v34[0] = 0LL;
  v34[1] = -1LL;
  KeSetTimer2((__int64)(v22 + 21), v22[14], -v22[14], (__int64)v34);
  result = ObInsertObjectEx(v22, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v33);
  if ( (int)result >= 0 )
    *a1 = v33;
  return result;
}
