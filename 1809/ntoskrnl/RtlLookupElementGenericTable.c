/*
 * XREFs of RtlLookupElementGenericTable @ 0x14008D520
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14008D5A0 (RtlSplay.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax

  TableRoot = Table->TableRoot;
  while ( TableRoot )
  {
    v5 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
           Table,
           Buffer,
           &TableRoot[1].RightChild);
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        Table->TableRoot = RtlSplay(TableRoot);
        return &TableRoot[1].RightChild;
      }
      TableRoot = TableRoot->RightChild;
    }
    else
    {
      TableRoot = TableRoot->LeftChild;
    }
  }
  return 0LL;
}
