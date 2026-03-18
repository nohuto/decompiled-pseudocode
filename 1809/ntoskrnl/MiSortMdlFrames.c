/*
 * XREFs of MiSortMdlFrames @ 0x1402AA1E0
 * Callers:
 *     MiRemoveMdlPages @ 0x14084DF00 (MiRemoveMdlPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1401962C0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
}
