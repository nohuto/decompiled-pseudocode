/*
 * XREFs of MmMarkImageForHiberPhase @ 0x14057C5C8
 * Callers:
 *     PoSetHiberRange @ 0x1401447B0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400DA570 (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14057C1BC (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  _QWORD *v1; // rax

  v1 = MiLookupDataTableEntry(a1, 2);
  return MiMarkNonPagedHiberPhasePages(v1[6], v1[6] + *((unsigned int *)v1 + 16) - 1LL, 0);
}
