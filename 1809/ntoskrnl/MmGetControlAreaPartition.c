/*
 * XREFs of MmGetControlAreaPartition @ 0x1400E8860
 * Callers:
 *     CcPurgeCacheSection @ 0x1400E7A80 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400E87A0 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140138CD8 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteSectionsForPartition @ 0x14026B254 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR *v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&dword_140438BC0);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_14043A748 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438BC0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v3[21];
}
