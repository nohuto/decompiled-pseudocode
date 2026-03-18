/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ @ 0x1C004E550
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0015540 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear((void (__fastcall ***)(_QWORD, __int64))(a1 + 8));
}
