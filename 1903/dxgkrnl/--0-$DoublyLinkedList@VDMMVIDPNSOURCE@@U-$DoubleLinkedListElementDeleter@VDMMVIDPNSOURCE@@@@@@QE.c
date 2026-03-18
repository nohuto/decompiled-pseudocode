/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0004954
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C000473C (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0004AC4 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // r14
  const struct DMMVIDPNSOURCE *v6; // rbp
  __int64 v7; // rcx
  DMMVIDPNSOURCE *PoolWithTag; // rax
  DMMVIDPNSOURCE *v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = (_QWORD *)(a1 + 16);
  v6 = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 != a2 + 16 )
    v6 = (const struct DMMVIDPNSOURCE *)(v7 - 8);
  if ( v6 )
  {
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNSOURCE *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x4B677844u);
      v9 = PoolWithTag ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(PoolWithTag, v6) : 0LL;
      if ( !v9 )
        break;
      v10 = 0LL;
      if ( (_QWORD *)*v5 != v5 )
        v10 = *v5 - 8LL;
      while ( v10 && (DMMVIDPNSOURCE *)v10 != v9 )
      {
        v15 = *(_QWORD **)(v10 + 8);
        v10 = (__int64)(v15 - 1);
        if ( v15 == v5 )
          v10 = 0LL;
      }
      if ( !v10 )
      {
        v11 = *(_QWORD **)(a1 + 24);
        v12 = (_QWORD *)((char *)v9 + 8);
        if ( (_QWORD *)*v11 != v5 )
          __fastfail(3u);
        *v12 = v5;
        *((_QWORD *)v9 + 2) = v11;
        *v11 = v12;
        *(_QWORD *)(a1 + 24) = v12;
        ++*(_QWORD *)(a1 + 32);
      }
      v13 = *((_QWORD *)v6 + 1);
      v6 = (const struct DMMVIDPNSOURCE *)(v13 - 8);
      if ( v13 == a2 + 16 )
        v6 = 0LL;
      if ( !v6 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_20;
      }
    }
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_20:
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
