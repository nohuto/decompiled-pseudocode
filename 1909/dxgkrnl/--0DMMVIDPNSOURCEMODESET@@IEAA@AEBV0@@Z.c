/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0004E50
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0004A84 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0005EE0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C0009640 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  DMMVIDPNSOURCEMODESET *v4; // rbx
  char *v5; // rbx
  DMMVIDPNSOURCEMODESET *v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax

  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
    (char *)this + 32,
    (char *)a2 + 32);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 4))((char *)this + 32) )
  {
    v4 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v4 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      v5 = (char *)v4 - 8;
      while ( v5 )
      {
        if ( *((_QWORD *)v5 + 5) )
        {
          v9 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v9);
        }
        *((_QWORD *)v5 + 5) = this;
        v6 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)v5 + 1);
        v5 = (char *)v6 - 8;
        if ( v6 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v5 = 0LL;
      }
    }
    v7 = *((_QWORD *)a2 + 18);
    if ( v7 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((char *)this + 24, *(unsigned int *)(v7 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
