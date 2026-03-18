/*
 * XREFs of ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C0009F7C
 * Callers:
 *     ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C000A020 (--_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C00150B0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

void __fastcall DMMVIDPNSOURCEMODESET::~DMMVIDPNSOURCEMODESET(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 24) )
  {
    v4 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v4 + 24) = *((int *)this + 24);
    WdLogEvent5_WdError(v4);
  }
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear();
  *(_QWORD *)this = &SetElement::`vftable';
}
