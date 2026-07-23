/*
 * XREFs of MmFreeSecureKernelPages @ 0x1402C3324
 * Callers:
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB83C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1402EBA54 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 * Callees:
 *     MiFreeSmallPageFromMdl @ 0x140029F10 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmFreeSecureKernelPages(ULONG_PTR a1, int a2)
{
  ULONG_PTR *v2; // rdi
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // r12
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned __int8 v9; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-89h] BYREF
  int v15; // [rsp+40h] [rbp-81h]
  __int64 v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h]
  _QWORD v18[16]; // [rsp+68h] [rbp-59h]

  v2 = (ULONG_PTR *)(a1 + 48);
  v4 = a1;
  v5 = a1 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  result = *(unsigned int *)(*(_QWORD *)(qword_14043B808
                                       + 8
                                       * ((*(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL))
                           + 4LL);
  if ( (result & 8) == 0 )
    return (__int64)MiFreePagesFromMdl(a1, 0);
  v7 = 0;
  if ( (unsigned __int64)v2 < v5 )
  {
    do
    {
      v8 = 48 * *v2 - 0x58000000000LL;
      if ( MiIsPfnFromSlabAllocation(v8) )
      {
        if ( !a2 )
        {
          v9 = MiLockPageInline(v8);
          *(_QWORD *)(v8 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v9);
        }
        _InterlockedDecrement64(&qword_14043B240);
        result = MiFreeSmallPageFromMdl(*v2, 0);
      }
      else
      {
        result = *v2;
        v11 = v7++;
        v18[v11] = *v2;
        if ( v7 == 16 )
        {
          BugCheckParameter2 = 0LL;
          v15 = 131248;
          v16 = 0LL;
          v17 = 0x10000LL;
          result = (__int64)MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0);
          v7 = 0;
        }
      }
      ++v2;
    }
    while ( (unsigned __int64)v2 < v5 );
    v4 = a1;
    if ( v7 )
    {
      v12 = v7 << 12;
      BugCheckParameter2 = 0LL;
      v16 = 0LL;
      LOWORD(v15) = 8 * ((v12 >> 12) + 6);
      HIWORD(v15) = 2;
      v17 = v12;
      result = (__int64)MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0);
    }
  }
  *(_WORD *)(v4 + 10) &= ~2u;
  return result;
}
