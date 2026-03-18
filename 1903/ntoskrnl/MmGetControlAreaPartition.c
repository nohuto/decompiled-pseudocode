/*
 * XREFs of MmGetControlAreaPartition @ 0x140123CD0
 * Callers:
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140123ADC (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x140123BF0 (CcGetFlushedValidData.c)
 *     CcDeleteSectionsForPartition @ 0x14027EDD4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR *v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&dword_140464580);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v3[21];
}
