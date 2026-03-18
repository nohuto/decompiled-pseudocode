/*
 * XREFs of MiDeleteControlArea @ 0x1400DF8FC
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x1400DF7D0 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1402B95FC (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiDecrementControlAreaCount @ 0x1400DFA24 (MiDecrementControlAreaCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402DEC54 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDeleteFileExtents @ 0x140688710 (MiDeleteFileExtents.c)
 *     SeReleaseImageValidationContext @ 0x14071EC2C (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x14072A130 (MiFreeRelocations.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  int v2; // ecx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rbx
  KIRQL v9; // r13
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *((_DWORD *)P + 14);
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_140466188 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1288;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v8 + 32));
  }
  else
  {
    if ( (v2 & 0x80u) != 0 )
    {
      v6 = *((_QWORD *)P + 18);
      if ( !v6 )
        goto LABEL_6;
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v6 + 34) & 1) != 0 && (*(_DWORD *)(v6 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v6, 1LL);
          v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          v3 += MiDecrementSubsectionViewCount((_QWORD *)v6, 24LL, v10);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
    }
    else
    {
      v5 = v4 + 1296;
    }
    if ( v3 )
      MiReturnCrossPartitionSectionCharges(v4, 1LL, v3);
  }
LABEL_6:
  MiDecrementControlAreaCount(v4, v5);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(P, 0);
}
