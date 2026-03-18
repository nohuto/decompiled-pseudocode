/*
 * XREFs of MiRemoveUnusedSubsection @ 0x1400C08CC
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x140071D5C (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiPrepareSegmentForDeletion @ 0x1400BF684 (MiPrepareSegmentForDeletion.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReduceUnusedSubsectionCount @ 0x1400C0958 (MiReduceUnusedSubsectionCount.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  v3 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(v4 + 8) != a1 + 80 || (v5 = *(_QWORD **)(a1 + 88), (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_WORD *)(a1 + 34) &= ~8u;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *v3 = v3;
  MiReduceUnusedSubsectionCount(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
}
