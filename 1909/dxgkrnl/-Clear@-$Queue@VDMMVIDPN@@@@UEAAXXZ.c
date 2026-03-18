/*
 * XREFs of ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C0054550
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x1C00544C8 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ.c)
 */

void __fastcall Queue<DMMVIDPN>::Clear(__int64 a1, __int64 a2)
{
  DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear(a1 + 8, a2);
}
