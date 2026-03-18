/*
 * XREFs of MmMarkImageForHiberPhase @ 0x1405AC58C
 * Callers:
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1405AC190 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = MiLookupDataTableEntry(a1, 2LL);
  return MiMarkNonPagedHiberPhasePages(*(_QWORD *)(v1 + 48), *(_QWORD *)(v1 + 48) + *(unsigned int *)(v1 + 64) - 1LL, 0);
}
