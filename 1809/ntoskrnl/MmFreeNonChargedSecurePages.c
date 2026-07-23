/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x1402AA6A8
 * Callers:
 *     PspIumFreePartitionPages @ 0x1402EB95C (PspIumFreePartitionPages.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG_PTR **a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR *i; // rdi
  __int64 v6; // rbx
  unsigned __int8 v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  char v9; // [rsp+58h] [rbp+10h] BYREF

  for ( i = MiPartitionObjectToPartition(a1, 1, &v9); a2; --a2 )
  {
    v6 = 48 * *a3 - 0x58000000000LL;
    v7 = MiLockPageInline(v6);
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
    *(_QWORD *)(v6 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( _InterlockedDecrement64((volatile signed __int64 *)i + 52) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)i, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList(*a3, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
    ++a3;
  }
  if ( v9 )
    PsDereferencePartition(i[21]);
}
