/*
 * XREFs of ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000BEE4
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C000BD0C (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0004F80 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C000C02C (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODESET *a2)
{
  char *v2; // rsi
  DMMVIDPNTARGETMODESET *v5; // rbx
  __int64 v6; // rax
  struct DMMVIDPNSOURCEMODE *i; // rbx
  __int64 v9; // rax

  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 24;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
    (char *)this + 32,
    (char *)a2 + 32);
  *((_DWORD *)v2 + 14) = 0;
  *(_QWORD *)v2 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173005;
  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v2 = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 15) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(__int64))this + 4))((__int64)(v2 + 8)) )
  {
    v5 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
    if ( v5 != (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    {
      for ( i = (DMMVIDPNTARGETMODESET *)((char *)v5 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
      {
        if ( *((_QWORD *)i + 5) )
        {
          v9 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v9);
        }
        *((_QWORD *)i + 5) = this;
      }
    }
    v6 = *((_QWORD *)a2 + 18);
    if ( v6 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v2, *(_DWORD *)(v6 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
