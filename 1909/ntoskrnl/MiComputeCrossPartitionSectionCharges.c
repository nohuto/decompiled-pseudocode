/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x1402DE650
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14007105C (MiReleaseControlAreaCharges.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
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
