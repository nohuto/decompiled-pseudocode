/*
 * XREFs of MiUpdatePartitionMemory @ 0x1402EB738
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x14089C3A4 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeNodeMemory @ 0x140751334 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rbx
  KIRQL v5; // al
  __int64 v6; // rdi
  KIRQL v7; // r14
  __int64 v8; // rbp
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 192);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 96);
  v7 = v5;
  v8 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7);
  if ( *(_QWORD *)(a2 + 16) )
    MiComputeNodeMemory(a1);
  if ( v8 )
    MiDereferencePageRunsEx(v8, 0);
  if ( v6 )
    MiDereferencePageRunsEx(v6, 0);
}
