/*
 * XREFs of MmAllocateSecureKernelPages @ 0x1402C303C
 * Callers:
 *     PspIumAllocatePartitionState @ 0x1402EB6F8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB83C (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiInitializeMdlPfn @ 0x1400113B8 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     MiReplenishSlabAllocator @ 0x1402C2EA4 (MiReplenishSlabAllocator.c)
 *     MmFreeSecureKernelPages @ 0x1402C3324 (MmFreeSecureKernelPages.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

ULONG_PTR *__fastcall MmAllocateSecureKernelPages(ULONG_PTR **a1, __int64 a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 v6; // r12
  int v7; // edi
  ULONG_PTR *result; // rax
  __int64 v9; // r13
  _QWORD *PoolWithTag; // rax
  __int64 PartitionNodePagesForMdl; // rsi
  __int64 *v12; // rbp
  __int64 *v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  char v16; // si
  unsigned __int64 v17; // r12
  __int64 SlabPage; // rax
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v24; // [rsp+40h] [rbp-58h]
  char v25[3]; // [rsp+41h] [rbp-57h] BYREF
  int v26; // [rsp+44h] [rbp-54h]
  __int64 v27; // [rsp+48h] [rbp-50h] BYREF
  __int64 *v28; // [rsp+50h] [rbp-48h]
  _QWORD *v29; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v7 = a4;
  *a5 = 0;
  result = MiPartitionObjectToPartition(a1, 0, v25);
  v9 = (__int64)result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)result + 1) & 8) != 0 )
  {
    LODWORD(v27) = MiMakeProtectionMask(a3);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 48, 0x69646D4Du);
    v29 = PoolWithTag;
    PartitionNodePagesForMdl = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = PoolWithTag + 6;
      v26 = 64;
      v13 = v12;
      v14 = 8 * v6;
      v15 = (unsigned __int64)&PoolWithTag[v6 + 6];
      v28 = (__int64 *)v15;
      if ( (unsigned __int64)v12 < v15 )
      {
        v16 = v27;
        v17 = v15;
        do
        {
          SlabPage = MiGetSlabPage(v9, v16, &v27);
          *v13 = SlabPage;
          if ( SlabPage == -1 )
          {
            if ( !v27 )
              break;
            v19 = v26;
            while ( !(unsigned int)MiReplenishSlabAllocator(v27, v9, v14 >> 3, v19) )
            {
              if ( v13 != v12 && !a4 || (v26 & 0x40) == 0 )
                goto LABEL_22;
              v19 = v26 & 0xFFFFFFBF;
              v26 &= ~0x40u;
            }
            --v13;
            v14 += 8LL;
          }
          else
          {
            v20 = 48 * SlabPage - 0x58000000000LL;
            v21 = MiLockPageInline(v20);
            v22 = *(_QWORD *)(v20 + 40);
            *(_QWORD *)v20 = 0LL;
            v24 = v21;
            *(_QWORD *)(v20 + 40) = v22 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
            *(_QWORD *)(v20 + 16) = ZeroPte;
            MiInitializeMdlPfn(v20, 512);
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v24);
          }
          ++v13;
          v14 -= 8LL;
        }
        while ( (unsigned __int64)v13 < v17 );
LABEL_22:
        PartitionNodePagesForMdl = (__int64)v29;
        v6 = a2;
        v7 = a4;
        if ( v13 != v12 )
        {
          *v29 = 0LL;
          *(_QWORD *)(PartitionNodePagesForMdl + 32) = 0LL;
          *(_DWORD *)(PartitionNodePagesForMdl + 44) = 0;
          *(_DWORD *)(PartitionNodePagesForMdl + 40) = (unsigned int)(v13 - v12) << 12;
          *(_WORD *)(PartitionNodePagesForMdl + 8) = 8 * (v13 - v12 + 6);
          *(_WORD *)(PartitionNodePagesForMdl + 10) = 2;
          if ( !a4 || v13 == v28 )
          {
            *a5 = 1;
            goto LABEL_28;
          }
          MmFreeSecureKernelPages(PartitionNodePagesForMdl, 0LL);
        }
      }
      ExFreePoolWithTag((PVOID)PartitionNodePagesForMdl, 0);
    }
  }
  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0,
                               -1,
                               0LL,
                               v6 << 12,
                               1,
                               0,
                               v7 != 0 ? 517 : 513,
                               (ULONG_PTR)a1);
LABEL_28:
  if ( v25[0] )
    PsDereferencePartition(*(_QWORD *)(v9 + 168));
  return (ULONG_PTR *)PartitionNodePagesForMdl;
}
