/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C000C02C
 * Callers:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000BEE4 (--0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C000A680 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNT.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 != a2 + 16 )
    v5 = v6 - 8;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = (char *)operator new(0x90uLL, 0x4B677844u, PagedPool);
      v9 = (__int64)v8;
      if ( v8 )
      {
        *((_QWORD *)v8 + 1) = 0LL;
        *((_QWORD *)v8 + 2) = 0LL;
        *(_QWORD *)v8 = &SetElement::`vftable';
        *((_DWORD *)v8 + 6) = *(_DWORD *)(v5 + 24);
        *(_OWORD *)(v8 + 72) = *(_OWORD *)(v5 + 72);
        *(_OWORD *)(v8 + 88) = *(_OWORD *)(v5 + 88);
        *(_OWORD *)(v8 + 104) = *(_OWORD *)(v5 + 104);
        *((_QWORD *)v8 + 15) = *(_QWORD *)(v5 + 120);
        *((_QWORD *)v8 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v8 + 5) = 0LL;
        *((_QWORD *)v8 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v8 + 14) = *(_DWORD *)(v5 + 56);
        *(_QWORD *)v8 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v8 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v8 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v8 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v8 + 32) = *(_DWORD *)(v5 + 128);
        *((_DWORD *)v8 + 33) = *(_DWORD *)(v5 + 132);
        *((_DWORD *)v8 + 34) = *(_DWORD *)(v5 + 136);
      }
      else
      {
        v9 = 0LL;
      }
      if ( !v9 )
        break;
      DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail(a1, v9);
      v10 = *(_QWORD *)(v5 + 8);
      v5 = v10 - 8;
      if ( v10 == a2 + 16 )
        v5 = 0LL;
      if ( !v5 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_7;
      }
    }
    v12 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v12 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v12);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_7:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v13 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v13 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v13);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
