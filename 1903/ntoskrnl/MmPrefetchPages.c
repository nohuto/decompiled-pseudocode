/*
 * XREFs of MmPrefetchPages @ 0x14066D990
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14066D9A8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
