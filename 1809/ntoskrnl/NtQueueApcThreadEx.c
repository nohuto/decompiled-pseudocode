/*
 * XREFs of NtQueueApcThreadEx @ 0x140677690
 * Callers:
 *     NtQueueApcThread @ 0x140677850 (NtQueueApcThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x14008A360 (KeInitializeApc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     KeInsertQueueApc @ 0x1400F1480 (KeInsertQueueApc.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx(void *a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  char v11; // r14
  NTSTATUS result; // eax
  PVOID v13; // rdi
  unsigned __int64 v14; // rax
  char *PoolWithQuotaTag; // rbx
  __int64 (__fastcall *v16)(); // r9
  void (__stdcall *v17)(PVOID); // rsi
  NTSTATUS v18; // ebx
  __int16 v19; // ax
  __int64 v20; // rcx
  PVOID v21; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 != (void *)1 )
    v6 = a2;
  v11 = 1;
  result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0
      || (v13 = Object, (v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7]) != 0)
      && ((v19 = *(_WORD *)(v14 + 8), v19 == 332) || v19 == 452)
      && ((v20 = *(_QWORD *)(*((_QWORD *)Object + 68) + 1064LL)) == 0 || *(_WORD *)(v20 + 8) == 0x8664)
      && (unsigned __int64)-(a3 >> 2) <= 0xFFFFFFFF )
    {
      v18 = -1073741816;
    }
    else if ( v6 )
    {
      v18 = ObReferenceObjectByHandle(v6, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v21, 0LL);
      if ( v18 >= 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v21, 1, 0) )
        {
          v16 = PspUserApcReserveKernelRoutine;
          v13 = Object;
          v17 = (void (__stdcall *)(PVOID))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)v21 + 8;
LABEL_10:
          KeInitializeApc((__int64)PoolWithQuotaTag, (__int64)v13, 0, (__int64)v16, (__int64)v17, a3, v11, a4);
          if ( KeInsertQueueApc((__int64)PoolWithQuotaTag, a5, a6, 0) )
          {
            v18 = 0;
          }
          else
          {
            ((void (__fastcall *)(char *))v17)(PoolWithQuotaTag);
            v18 = -1073741823;
          }
          goto LABEL_12;
        }
        ObfDereferenceObject(v21);
        v13 = Object;
        v18 = -1073741584;
      }
    }
    else
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
      if ( PoolWithQuotaTag )
      {
        v16 = (__int64 (__fastcall *)())KeSpecialUserApcKernelRoutine;
        v11 = a2 != (void *)1;
        v17 = ExFreePool;
        if ( a2 != (void *)1 )
          v16 = (__int64 (__fastcall *)())SC_ENV::Free;
        goto LABEL_10;
      }
      v18 = -1073741801;
    }
LABEL_12:
    ObfDereferenceObject(v13);
    return v18;
  }
  return result;
}
