/*
 * XREFs of MiDecrementSubsection @ 0x14012F3F4
 * Callers:
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 *     MiTrimSharedPage @ 0x14012F104 (MiTrimSharedPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x140071860 (MiDecrementSubsections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDecrementSubsection(__int64 *BugCheckParameter2)
{
  __int64 v1; // r14
  KIRQL v3; // si
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v4 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, (__int64)BugCheckParameter2, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  v5 = 0;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  if ( v4 )
  {
    LOBYTE(v5) = *(_QWORD *)(v1 + 64) != 0LL;
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)),
             v5,
             v4);
  }
  return result;
}
