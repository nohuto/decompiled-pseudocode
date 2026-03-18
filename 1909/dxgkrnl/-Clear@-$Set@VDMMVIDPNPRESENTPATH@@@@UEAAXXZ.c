/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNPRESENTPATH@@@@UEAAXXZ @ 0x1C0055B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAXXZ @ 0x1C0019A8C (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNPRESE.c)
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::Clear(__int64 a1, __int64 a2)
{
  return DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::Clear(a1 + 8, a2);
}
