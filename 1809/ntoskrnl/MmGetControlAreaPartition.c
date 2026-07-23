/*
 * XREFs of MmGetControlAreaPartition @ 0x1400E8900
 * Callers:
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400E8840 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140138DF8 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteSectionsForPartition @ 0x14026B544 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR *v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&dword_140439C80);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v3[21];
}
