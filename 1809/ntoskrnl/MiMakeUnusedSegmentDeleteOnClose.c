/*
 * XREFs of MiMakeUnusedSegmentDeleteOnClose @ 0x1402A29B0
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     MiUnlinkUnusedControlArea @ 0x14007BAC0 (MiUnlinkUnusedControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiMakeUnusedSegmentDeleteOnClose(__int64 a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // r15
  KIRQL v5; // bl
  _QWORD *v6; // rax
  __int64 v7; // rsi
  volatile LONG *v8; // r14
  struct _KPRCB *v9; // rcx
  __int64 inserted; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  __int64 result; // rax

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v4 = (_QWORD *)(a1 + 1640);
  while ( 1 )
  {
    v5 = v3;
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = (__int64)(v6 - 1);
    v8 = (volatile LONG *)(v6 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8) )
    {
      MiUnlinkUnusedControlArea(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      inserted = MiInsertUnusedSegment(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v5);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v9 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
      __writecr8(v5);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
