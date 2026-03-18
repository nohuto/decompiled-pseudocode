/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0007AD0
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AFBC (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C000C490 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  char *v2; // r14
  DMMVIDPNSOURCEMODESET *v5; // rbx
  char *v6; // rbx
  __int64 v7; // rax
  DMMVIDPNSOURCEMODESET *v9; // rax
  __int64 v10; // rax

  v2 = (char *)this + 24;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
    (char *)this + 32,
    (char *)a2 + 32);
  *((_DWORD *)v2 + 14) = 0;
  *(_QWORD *)v2 = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v2 = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(__int64))this + 4))((__int64)(v2 + 8)) )
  {
    v5 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v5 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      v6 = (char *)v5 - 8;
      while ( v6 )
      {
        if ( *((_QWORD *)v6 + 5) )
        {
          v10 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v10);
        }
        *((_QWORD *)v6 + 5) = this;
        v9 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)v6 + 1);
        v6 = (char *)v9 - 8;
        if ( v9 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v6 = 0LL;
      }
    }
    v7 = *((_QWORD *)a2 + 18);
    if ( v7 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v2, *(_DWORD *)(v7 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
