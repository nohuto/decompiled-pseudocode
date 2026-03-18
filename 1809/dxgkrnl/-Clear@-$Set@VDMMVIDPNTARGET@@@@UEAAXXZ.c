/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C004EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAAXXZ @ 0x1C0016174 (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@.c)
 */

_QWORD *__fastcall Set<DMMVIDPNTARGET>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::Clear((void (__fastcall ***)(_QWORD, __int64))(a1 + 8));
}
