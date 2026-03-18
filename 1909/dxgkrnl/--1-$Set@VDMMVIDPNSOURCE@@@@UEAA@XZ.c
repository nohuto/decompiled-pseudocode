/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C00054C4
 * Callers:
 *     ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C0004FF4 (--1DMMVIDPNSOURCESET@@UEAA@XZ.c)
 *     ??_E?$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0055970 (--_E-$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0055A10 (--_E-$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C0017D24 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(_QWORD *a1)
{
  *a1 = &Set<DMMVIDPNSOURCE>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  return DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear();
}
