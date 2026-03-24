/*
 * XREFs of MiSortMdlFrames @ 0x1402AA2E0
 * Callers:
 *     MiRemoveMdlPages @ 0x14084DEE0 (MiRemoveMdlPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140850690 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1401962E0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
}
