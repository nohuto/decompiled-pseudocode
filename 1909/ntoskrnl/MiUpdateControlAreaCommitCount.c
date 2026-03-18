/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x1400C01D8
 * Callers:
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400979B0 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v4; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 8584LL),
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
