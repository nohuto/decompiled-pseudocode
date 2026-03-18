/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x1402C48BC
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140077950 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794C0 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseControlAreaCharges @ 0x140079C68 (MiReleaseControlAreaCharges.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140095894 (MiGetCommittedPages.c)
 */

__int64 __fastcall MiComputeCrossPartitionSectionCharges(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx

  v2 = *a1;
  v3 = *(_DWORD *)(v2 + 56);
  if ( (v3 & 0x20) != 0 )
    return *(_QWORD *)(v2 + 120);
  if ( (v3 & 0x80u) != 0 )
    return *((_DWORD *)a1 + 11) - (*((_DWORD *)a1 + 13) & 0x3FFFFFFFu);
  return MiGetCommittedPages((_QWORD *)v2);
}
