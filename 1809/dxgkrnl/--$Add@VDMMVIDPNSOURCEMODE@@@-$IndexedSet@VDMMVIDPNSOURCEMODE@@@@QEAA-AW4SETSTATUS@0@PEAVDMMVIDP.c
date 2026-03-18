/*
 * XREFs of ??$Add@VDMMVIDPNSOURCEMODE@@@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000B9E0
 * Callers:
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C00DB47C (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0006290 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000BAA0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000BAF0 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

__int64 __fastcall IndexedSet<DMMVIDPNSOURCEMODE>::Add<DMMVIDPNSOURCEMODE>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // rax

  v2 = a1 + 3;
  v5 = (_QWORD *)a1[3];
  if ( v5 == v2 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (__int64)(v5 - 1);
    if ( !v6 )
      goto LABEL_7;
    while ( *(_DWORD *)(v6 + 24) != *(_DWORD *)(a2 + 24) )
    {
      v7 = *(_QWORD **)(v6 + 8);
      v6 = (__int64)(v7 - 1);
      if ( v7 == v2 )
        v6 = 0LL;
      if ( !v6 )
        goto LABEL_7;
    }
  }
  if ( v6 )
  {
    if ( !DMMVIDPNSOURCEMODE::operator==(v6, a2) )
      return 2LL;
    return 1LL;
  }
LABEL_7:
  if ( Set<DMMVIDPNSOURCEMODE>::FindByValue(a1) )
    return 1LL;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
                          a1 + 1,
                          a2) )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    v8 = (_QWORD *)a1[4];
    v9 = (_QWORD *)(a2 + 8);
    if ( (_QWORD *)*v8 != a1 + 3 )
      __fastfail(3u);
    *v9 = a1 + 3;
    *(_QWORD *)(a2 + 16) = v8;
    *v8 = v9;
    a1[4] = v9;
    ++a1[5];
  }
  return 3LL;
}
