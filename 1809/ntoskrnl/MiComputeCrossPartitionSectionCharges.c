/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x1402C4BAC
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseControlAreaCharges @ 0x140079C58 (MiReleaseControlAreaCharges.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
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
