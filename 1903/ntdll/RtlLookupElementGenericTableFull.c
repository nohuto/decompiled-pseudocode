/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F3D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 *     RtlSplay @ 0x180064960 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)sub_1800648C8((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
