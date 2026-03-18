/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C000C490
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0007AD0 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  v6 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 != a2 + 16 )
    v6 = v7 - 8;
  if ( v6 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4B677844u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *PoolWithTag = &SetElement::`vftable';
      v11 = PoolWithTag + 1;
      PoolWithTag[2] = 0LL;
      PoolWithTag[1] = 0LL;
      *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(v6 + 24);
      PoolWithTag[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      PoolWithTag[5] = 0LL;
      PoolWithTag[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v6 + 56);
      *PoolWithTag = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      PoolWithTag[4] = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      PoolWithTag[6] = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
      PoolWithTag[8] = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)PoolWithTag + 18) = *(_DWORD *)(v6 + 72);
      v12 = 0LL;
      *(_OWORD *)((char *)v10 + 76) = *(_OWORD *)(v6 + 76);
      *(_OWORD *)((char *)v10 + 92) = *(_OWORD *)(v6 + 92);
      if ( (_QWORD *)*v5 != v5 )
        v12 = *v5 - 8LL;
      if ( !v12 )
        goto LABEL_20;
      do
      {
        if ( (_QWORD *)v12 == v10 )
          break;
        v13 = *(_QWORD **)(v12 + 8);
        v12 = (__int64)(v13 - 1);
        if ( v13 == v5 )
          v12 = 0LL;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_20:
        v14 = *(_QWORD **)(a1 + 24);
        if ( (_QWORD *)*v14 != v5 )
          __fastfail(3u);
        *v11 = v5;
        v11[1] = v14;
        *v14 = v11;
        *(_QWORD *)(a1 + 24) = v11;
        ++*(_QWORD *)(a1 + 32);
      }
      v15 = *(_QWORD *)(v6 + 8);
      v6 = v15 - 8;
      if ( v15 == a2 + 16 )
        v6 = 0LL;
      if ( !v6 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_7;
      }
    }
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_7:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v18 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v18 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
