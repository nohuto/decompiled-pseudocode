/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0006030
 * Callers:
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00E6CC0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0006080 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r11
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  char result; // al

  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference() )
    return 0;
  v4 = *(_QWORD **)(v3 + 24);
  v5 = (_QWORD *)(a2 + 8);
  if ( *v4 != v3 + 16 )
    __fastfail(3u);
  *v5 = v3 + 16;
  *(_QWORD *)(a2 + 16) = v4;
  *v4 = v5;
  *(_QWORD *)(v3 + 24) = v5;
  result = 1;
  ++*(_QWORD *)(v3 + 32);
  return result;
}
