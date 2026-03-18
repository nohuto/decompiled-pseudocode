/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0004348
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0004230 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C000445C (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AFBC (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  const struct DMMVIDPNSOURCE *v5; // rbp
  __int64 v6; // rcx
  DMMVIDPNSOURCE *v7; // rax
  DMMVIDPNSOURCE *v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
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
    v5 = (const struct DMMVIDPNSOURCE *)(v6 - 8);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4B677844u, PagedPool);
      v8 = v7 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v7, v5) : 0LL;
      if ( !v8 )
        break;
      DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(a1, v8);
      v9 = *((_QWORD *)v5 + 1);
      v5 = (const struct DMMVIDPNSOURCE *)(v9 - 8);
      if ( v9 == a2 + 16 )
        v5 = 0LL;
      if ( !v5 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_14;
      }
    }
    v12 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v12 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v12);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_14:
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
