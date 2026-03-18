/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x140002780
 * Callers:
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405BD44C (PiPnpRtlObjectEventCreate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F9B64 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v9 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v9 == GenericLessThan )
          break;
        if ( v9 != GenericGreaterThan )
        {
          *NodeOrParent = i;
          *SearchResult = TableFoundNode;
          return (char *)*NodeOrParent + 32;
        }
        if ( !i->RightChild )
        {
          *NodeOrParent = i;
          *SearchResult = TableInsertAsRight;
          return 0LL;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    *NodeOrParent = i;
    *SearchResult = TableInsertAsLeft;
  }
  else
  {
    *SearchResult = TableEmptyTree;
  }
  return 0LL;
}
