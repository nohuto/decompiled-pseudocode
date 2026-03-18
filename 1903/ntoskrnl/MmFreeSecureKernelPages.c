/*
 * XREFs of MmFreeSecureKernelPages @ 0x1402DD3AC
 * Callers:
 *     MmAllocateSecureKernelPages @ 0x1402DD0C0 (MmAllocateSecureKernelPages.c)
 *     PspIumAllocatePhysicalPages @ 0x140309198 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1403093BC (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x140309498 (PspIumFreePhysicalPages.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiFreeSmallPageFromMdl @ 0x1400F0614 (MiFreeSmallPageFromMdl.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MmFreeSecureKernelPages(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v3; // r14
  ULONG_PTR *v4; // rdi
  unsigned __int64 v5; // r12
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned __int8 v9; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  ULONG_PTR BugCheckParameter2a[22]; // [rsp+38h] [rbp-89h] BYREF

  v3 = BugCheckParameter2;
  memset(BugCheckParameter2a, 0, sizeof(BugCheckParameter2a));
  v4 = (ULONG_PTR *)(v3 + 48);
  v5 = v3 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 40) >> 12);
  result = *(unsigned int *)(*(_QWORD *)(qword_140466188
                                       + 8
                                       * ((*(_QWORD *)(48LL * *(_QWORD *)(v3 + 48) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL))
                           + 4LL);
  if ( (result & 8) == 0 )
    return (__int64)MiFreePagesFromMdl(v3, 0);
  v7 = 0;
  if ( (unsigned __int64)v4 < v5 )
  {
    do
    {
      v8 = 48 * *v4 - 0x58000000000LL;
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
        _InterlockedDecrement64(&qword_140465BC0);
        result = MiFreeSmallPageFromMdl(*v4, 0);
      }
      else
      {
        result = *v4;
        v11 = v7++;
        BugCheckParameter2a[v11 + 6] = *v4;
        if ( v7 == 16 )
        {
          BugCheckParameter2a[0] = 0LL;
          LODWORD(BugCheckParameter2a[1]) = 131248;
          BugCheckParameter2a[4] = 0LL;
          BugCheckParameter2a[5] = 0x10000LL;
          result = (__int64)MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2a, 0);
          v7 = 0;
        }
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v5 );
    v3 = BugCheckParameter2;
    if ( v7 )
    {
      v12 = v7 << 12;
      BugCheckParameter2a[0] = 0LL;
      BugCheckParameter2a[4] = 0LL;
      LOWORD(BugCheckParameter2a[1]) = 8 * ((v12 >> 12) + 6);
      WORD1(BugCheckParameter2a[1]) = 2;
      BugCheckParameter2a[5] = v12;
      result = (__int64)MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2a, 0);
    }
  }
  *(_WORD *)(v3 + 10) &= ~2u;
  return result;
}
