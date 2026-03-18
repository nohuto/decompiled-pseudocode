/*
 * XREFs of MmPrefetchPages @ 0x1406473F0
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x140647408 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
