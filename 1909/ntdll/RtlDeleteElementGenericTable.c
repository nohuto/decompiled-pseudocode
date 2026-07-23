/*
 * XREFs of RtlDeleteElementGenericTable @ 0x180064720
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180064968 (FindNodeOrParent_0.c)
 *     RtlDelete @ 0x180064C00 (RtlDelete.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  PRTL_GENERIC_FREE_ROUTINE FreeRoutine; // rax
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(Table, Buffer, &Links) != 1 )
    return 0;
  v3 = Links;
  Table->TableRoot = RtlDelete(Links);
  Parent = v3[1].Parent;
  if ( Parent->LeftChild != &v3[1] || (LeftChild = v3[1].LeftChild, LeftChild->Parent != &v3[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  FreeRoutine = Table->FreeRoutine;
  Table->OrderedPointer = &Table->InsertOrderList;
  ((void (__fastcall *)(PRTL_GENERIC_TABLE, PRTL_SPLAY_LINKS))FreeRoutine)(Table, v3);
  return 1;
}
