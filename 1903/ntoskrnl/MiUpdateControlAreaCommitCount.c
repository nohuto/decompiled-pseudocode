/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x1400E0358
 * Callers:
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400A9158 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v4; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 8584LL),
    a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 16LL) += a2;
    return 0LL;
  }
  else
  {
    v4 = (volatile LONG *)(a1 + 72);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(a1 + 120) ^= (*(_QWORD *)(a1 + 120) ^ (*(_QWORD *)(a1 + 120) + a2)) & 0xFFFFFFFFFLL;
    v6 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1 + 128) + 48) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
    return v6;
  }
}
