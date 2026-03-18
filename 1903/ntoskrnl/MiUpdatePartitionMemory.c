/*
 * XREFs of MiUpdatePartitionMemory @ 0x1402EB9D8
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x14089CB84 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRunsEx @ 0x14012B7B0 (MiDereferencePageRunsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeNodeMemory @ 0x1407508A4 (MiComputeNodeMemory.c)
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
