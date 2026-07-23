/*
 * XREFs of NtQueueApcThreadEx @ 0x1406D8840
 * Callers:
 *     NtQueueApcThread @ 0x1406D8810 (NtQueueApcThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  HANDLE v6; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  char v11; // r14
  NTSTATUS result; // eax
  PVOID v13; // rdi
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  __int64 v16; // rcx
  char *PoolWithQuotaTag; // rbx
  LONG_PTR (__fastcall *v18)(__int64); // r9
  void (__fastcall *v19)(char *); // rsi
  int v20; // ebx
  PVOID v21; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReserveHandle != (HANDLE)1 )
    v6 = ReserveHandle;
  v11 = 1;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0
      || (v13 = Object, (v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]) != 0)
      && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452)
      && ((v16 = *(_QWORD *)(*((_QWORD *)Object + 68) + 1064LL)) == 0 || *(_WORD *)(v16 + 8) == 0x8664)
      && (unsigned __int64)-((__int64)ApcRoutine >> 2) <= 0xFFFFFFFF )
    {
      v20 = -1073741816;
    }
    else if ( v6 )
    {
      v20 = ObReferenceObjectByHandle(v6, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v21, 0LL);
      if ( v20 >= 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v21, 1, 0) )
        {
          v18 = PspUserApcReserveKernelRoutine;
          v13 = Object;
          v19 = (void (__fastcall *)(char *))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)v21 + 8;
LABEL_15:
          KeInitializeApc(
            (__int64)PoolWithQuotaTag,
            (__int64)v13,
            0,
            (__int64)v18,
            (__int64)v19,
            (__int64)ApcRoutine,
            v11,
            (__int64)ApcArgument1);
          if ( KeInsertQueueApc((__int64)PoolWithQuotaTag, (__int64)ApcArgument2, (__int64)ApcArgument3, 0) )
          {
            v20 = 0;
          }
          else
          {
            v19(PoolWithQuotaTag);
            v20 = -1073741823;
          }
          goto LABEL_17;
        }
        ObfDereferenceObject(v21);
        v13 = Object;
        v20 = -1073741584;
      }
    }
    else
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
      if ( PoolWithQuotaTag )
      {
        v18 = (LONG_PTR (__fastcall *)(__int64))KeSpecialUserApcKernelRoutine;
        v11 = ReserveHandle != (HANDLE)1;
        v19 = (void (__fastcall *)(char *))ExFreePoolWithTag;
        if ( ReserveHandle != (HANDLE)1 )
          v18 = RtlpSysVolFree;
        goto LABEL_15;
      }
      v20 = -1073741801;
    }
LABEL_17:
    ObfDereferenceObject(v13);
    return v20;
  }
  return result;
}
