/*
 * XREFs of MiReleaseControlAreaCharges @ 0x140079C58
 * Callers:
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140076770 (MiIncludeSharedCommit.c)
 *     MiAweControlArea @ 0x140077E5C (MiAweControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402C4BAC (MiComputeCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v6; // rsi
  KIRQL v7; // di
  char v8; // al
  int v9; // ecx
  BOOL v10; // r9d
  __int64 v11; // r8
  int v12; // r10d
  struct _KPRCB *CurrentPrcb; // rcx

  if ( MiAweControlArea(a1) || !MiIncludeSharedCommit(v2) )
    return 0LL;
  v6 = 0LL;
  if ( v3 == 1 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  v8 = *(_BYTE *)(a1 + 62);
  if ( (v8 & 2) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 62) = v8 & 0xFD;
    v10 = (v9 & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v11 = a1 + 128;
    if ( a1 != -128 )
    {
      v12 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v11 + 34) & 1) != 0 )
          goto LABEL_22;
        if ( (v12 & *(_DWORD *)(v11 + 48)) == v12 || v10 )
          break;
LABEL_23:
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_7;
      }
      v6 += MiComputeCrossPartitionSectionCharges(v11);
LABEL_22:
      if ( v10 )
        goto LABEL_7;
      goto LABEL_23;
    }
  }
LABEL_7:
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
  }
  return v6;
}
