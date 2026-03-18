/*
 * XREFs of MmPrefetchPages @ 0x140662440
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x140662458 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
