/*
 * XREFs of MiSortMdlFrames @ 0x1402AA4D0
 * Callers:
 *     MiRemoveMdlPages @ 0x14084F140 (MiRemoveMdlPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x140196420 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
}
