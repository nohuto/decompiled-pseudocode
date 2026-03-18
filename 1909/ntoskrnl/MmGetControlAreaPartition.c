/*
 * XREFs of MmGetControlAreaPartition @ 0x140124950
 * Callers:
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140124764 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x140124870 (CcGetFlushedValidData.c)
 *     CcDeleteSectionsForPartition @ 0x14027EB34 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR *v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&dword_140464280);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v3[21];
}
