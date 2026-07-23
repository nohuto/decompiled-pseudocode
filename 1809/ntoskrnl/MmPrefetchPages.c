/*
 * XREFs of MmPrefetchPages @ 0x1406635E0
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
