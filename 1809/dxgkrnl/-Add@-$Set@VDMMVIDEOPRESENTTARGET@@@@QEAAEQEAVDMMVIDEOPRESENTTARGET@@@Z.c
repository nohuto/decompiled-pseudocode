/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C001F7F4
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0158BD8 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000A6D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C001F858 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r11
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v9; // rax

  if ( Set<DMMVIDEOPRESENTTARGET>::FindByValue() )
    return 0;
  if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         v3 + 8,
         a2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v9);
  }
  else
  {
    v6 = *(_QWORD **)(v5 + 32);
    v7 = (_QWORD *)(a2 + 8);
    if ( *v6 != v5 + 24 )
      __fastfail(3u);
    *v7 = v5 + 24;
    *(_QWORD *)(a2 + 16) = v6;
    *v6 = v7;
    *(_QWORD *)(v5 + 32) = v7;
    ++*(_QWORD *)(v5 + 40);
  }
  return 1;
}
