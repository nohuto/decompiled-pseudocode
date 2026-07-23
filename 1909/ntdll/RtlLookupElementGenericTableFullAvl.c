/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1800641B0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800641E8 (FindNodeOrParent.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v6; // eax

  v6 = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  *SearchResult = v6;
  if ( v6 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
