/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C0008B20
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C00047C8 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0008F40 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  const struct DMMVIDPNTARGET *v8; // rsi
  __int64 v9; // rcx
  DMMVIDPNTARGET *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DMMVIDPNTARGET *v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v20 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v7 = (_QWORD *)(a1 + 16);
  v8 = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 != a2 + 16 )
    v8 = (const struct DMMVIDPNTARGET *)(v9 - 8);
  if ( v8 )
  {
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4B677844u);
      if ( !PoolWithTag )
        break;
      v14 = DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, v8);
      if ( !v14 )
        break;
      v9 = 0LL;
      v5 = *v7 - 8LL;
      if ( (_QWORD *)*v7 != v7 )
        v9 = *v7 - 8LL;
      if ( !v9 )
        goto LABEL_17;
      do
      {
        if ( (DMMVIDPNTARGET *)v9 == v14 )
          break;
        v15 = *(_QWORD **)(v9 + 8);
        v9 = (__int64)(v15 - 1);
        if ( v15 == v7 )
          v9 = 0LL;
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_17:
        v16 = *(_QWORD **)(a1 + 24);
        v17 = (_QWORD *)((char *)v14 + 8);
        if ( (_QWORD *)*v16 != v7 )
          __fastfail(3u);
        *v17 = v7;
        v17[1] = v16;
        *v16 = v17;
        *(_QWORD *)(a1 + 24) = v17;
        ++*(_QWORD *)(a1 + 32);
      }
      v18 = *((_QWORD *)v8 + 1);
      v8 = (const struct DMMVIDPNTARGET *)(v18 - 8);
      if ( v18 == a2 + 16 )
        v8 = 0LL;
      if ( !v8 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_23;
      }
    }
    v21 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v21 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v21);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_23:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9, v5);
      *(_QWORD *)(v22 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v22);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
