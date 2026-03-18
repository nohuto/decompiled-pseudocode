/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x1400A72D4
 * Callers:
 *     MiDereferenceDataSubsections @ 0x1402DE92C (MiDereferenceDataSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiReleaseReadListResources @ 0x14066E178 (MiReleaseReadListResources.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveViewsFromSection @ 0x1400714B0 (MiRemoveViewsFromSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  BOOL v7; // r12d
  KIRQL v8; // bp
  __int64 v9; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *BugCheckParameter2;
  v7 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v9 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  if ( v9 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
             v7,
             v9);
  return result;
}
