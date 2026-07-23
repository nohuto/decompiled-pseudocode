/*
 * XREFs of RtlLookupElementGenericTable @ 0x18006C510
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x18006C590 (RtlSplay.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  void *v5; // rdi
  int v6; // eax

  TableRoot = Table->TableRoot;
  v5 = 0LL;
  while ( TableRoot )
  {
    v6 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
           Table,
           Buffer,
           &TableRoot[1].RightChild);
    if ( v6 )
    {
      if ( v6 != 1 )
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
  return v5;
}
