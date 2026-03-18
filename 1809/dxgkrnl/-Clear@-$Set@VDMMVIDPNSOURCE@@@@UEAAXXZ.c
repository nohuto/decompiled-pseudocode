/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCE@@@@UEAAXXZ @ 0x1C004EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C00172F0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

void __fastcall Set<DMMVIDPNSOURCE>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(a1 + 8);
}
