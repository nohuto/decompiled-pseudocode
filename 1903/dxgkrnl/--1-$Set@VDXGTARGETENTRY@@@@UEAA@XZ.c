/*
 * XREFs of ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C0001284
 * Callers:
 *     ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x1C0049480 (--_E-$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C00C5B78 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x1C001AE68 (-Clear@-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(_QWORD *a1)
{
  *a1 = &Set<DXGTARGETENTRY>::`vftable';
  a1[1] = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  return DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear();
}
