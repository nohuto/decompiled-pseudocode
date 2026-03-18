/*
 * XREFs of MiSortMdlFrames @ 0x1402C2A80
 * Callers:
 *     MiRemoveMdlPages @ 0x140889380 (MiRemoveMdlPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1401A11F0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
}
