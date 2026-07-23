/*
 * XREFs of MiFreeLargePages @ 0x1402C57BC
 * Callers:
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 */

unsigned __int64 __fastcall MiFreeLargePages(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 v5; // r14
  unsigned __int64 LeafPfnBuddy; // r12
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  do
  {
    v5 = MiLockPageInline(v1);
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)v1);
    *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 24) & 0xC000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
    v2 += MiLargePageSizes[(*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFBLL];
    v3 += MiFreeLargePageMemory((v1 + 0x58000000000LL) / 48, (*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFBLL, 0);
    v1 = LeafPfnBuddy;
  }
  while ( LeafPfnBuddy );
  if ( v3 )
  {
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      MiReturnResidentAvailable(v3);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7360), v3);
  }
  if ( v4 != *(_QWORD *)(qword_14043B808
                       + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3)) )
  {
    if ( v3 )
      MiReturnCommit(v4, v3);
    MiReturnCrossPartitionCharges(v4, 4LL, 1LL, v2);
    v3 = v2;
  }
  return v2 - v3;
}
