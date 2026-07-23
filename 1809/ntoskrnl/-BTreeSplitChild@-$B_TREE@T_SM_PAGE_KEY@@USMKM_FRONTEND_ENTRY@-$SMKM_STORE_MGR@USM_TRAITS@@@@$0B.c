/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151058
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14014DFB4 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14014DFB4 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1401511F8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  void *v3; // r14
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  int *v9; // rdx
  int v10; // eax
  int *v11; // rbx
  void *v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // rbx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+10h]

  v22 = 0LL;
  v3 = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = *v4;
  v6 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v4 + 3LL),
         *(unsigned __int8 *)(*v4 + 2LL));
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return v22;
  *((_QWORD *)&v20 + 1) = v6;
  *(_QWORD *)&v20 = 0LL;
  v8 = (*(_DWORD *)v5 >> 1) & 0x7FFF;
  if ( HIBYTE(*(_DWORD *)v5) )
  {
    v9 = (int *)(v5 + 16 + 8 * v8);
    if ( (*(_DWORD *)v5 & 1) != 0 && (unsigned __int64)(v9 + 2) < v4[1] )
    {
      v9 += 2;
      LODWORD(v8) = v8 + 1;
    }
    v10 = *v9;
    v11 = 0LL;
  }
  else
  {
    v11 = (int *)(v5 + 16 * (((*(_DWORD *)v5 >> 1) & 0x7FFF) + 1LL));
    v9 = 0LL;
    v10 = *v11;
  }
  LODWORD(v20) = v10;
  v12 = v7 + 2;
  v13 = (unsigned __int16)*(_DWORD *)v5 - (_DWORD)v8;
  if ( HIBYTE(*(_DWORD *)v5) )
  {
    v7[1] = *(_QWORD *)(v5 + 8);
    memmove(v12, v9, 8LL * v13);
  }
  else
  {
    memmove(v12, v11 + 4, 16LL * --v13);
    v7[1] = *((_QWORD *)v11 + 1);
  }
  *(_WORD *)v7 = v13;
  if ( *a1 == v5 )
  {
    v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v14,
            0LL,
            (unsigned int)*(unsigned __int8 *)(v5 + 2) + 1);
    v3 = (void *)v18;
    if ( v18 )
    {
      *(_QWORD *)(v18 + 8) = v5;
      v19 = v18 + 16;
      *(_OWORD *)(v18 + 16) = v20;
      *(_WORD *)v18 = 1;
      *a1 = v18;
      memmove(v4 + 2, v4, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *v4 = v3;
      v4[1] = v19;
      ++*(_DWORD *)(a2 + 24);
      goto LABEL_9;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v15 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v20);
    ++*(_DWORD *)(a2 + 24);
    if ( v15 >= 0 )
    {
LABEL_9:
      v16 = *(_BYTE *)(v5 + 3) == 0;
      *(_WORD *)v5 = v8;
      if ( !v16 )
        *(_QWORD *)(v5 + 8) = v7;
      v22 = v7;
      v7 = 0LL;
      v3 = 0LL;
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v22;
}
