/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140301694
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014AAF0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014AAF0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140158A80 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140301B38 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140301C78 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  void *v14; // rcx
  size_t v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  _DWORD **v18; // rbx
  __int64 result; // rax

  v5 = a3;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = *(v6 - 1);
  if ( (a3 & 1) != 0 )
    v5 = *v6;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v8 = *v6;
  v9 = (unsigned __int16)*(_DWORD *)v8;
  v10 = HIBYTE(*(_DWORD *)v8);
  v11 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v11 = a3;
  if ( v8 == v11 )
  {
    v7 -= 16LL;
    *(v6 - 1) = v7;
    LOBYTE(v10) = *(_BYTE *)(v8 + 3);
  }
  if ( (_BYTE)v10 )
  {
    v12 = **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( v12 == -1 )
      v13 = *(_QWORD *)(v5 + 8);
    else
      v13 = 3358LL;
    if ( v12 == -1 )
      *(_QWORD *)(v8 + 8) = v13;
    v14 = (void *)(v8 + 16 + 4 * v9);
    v15 = 4LL * (unsigned __int16)*(_DWORD *)v5;
  }
  else
  {
    v16 = 2 * v9;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)(v8 + 8 * v16 + 16) = *(_DWORD *)v7;
    *(_QWORD *)(v8 + 8 * v16 + 24) = *(_QWORD *)(v5 + 8);
    v15 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v14 = (void *)(v8 + 16 * ((unsigned int)v9 + 1LL));
  }
  memmove(v14, (const void *)(v5 + 16), v15);
  v17 = *(_BYTE *)(v8 + 3) == 0;
  *(_WORD *)v8 = v9 + *(_WORD *)v5;
  if ( !v17 )
  {
    v18 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v18 != -1 )
    {
      NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)), (void **)(v7 + 8));
      if ( **v18 != -1 )
        NP_CONTEXT::NpLeafRemoveInternal(
          (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
          (void **)(v7 + 8));
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    (unsigned __int8 *)v5);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
