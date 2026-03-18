/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140149454
 * Callers:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1401493DC (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140168B78 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014D4C4 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140167EB0 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140168B78 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 *v4; // rdi
  unsigned int v5; // ebx
  _BYTE *v7; // r14
  char *v8; // rcx
  char v9; // dl
  __int64 v10; // rbp
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rax
  size_t v14; // rbp
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  char v27[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v28; // [rsp+28h] [rbp-30h]
  unsigned int v29; // [rsp+60h] [rbp+8h]

  v2 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v28 = 0LL;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16 * v2);
  v5 = 0;
  v7 = (_BYTE *)*v4;
  v8 = (char *)v4[1];
  v9 = *(_BYTE *)(*v4 + 3);
  v10 = (unsigned __int16)*(_DWORD *)*v4;
  if ( v9 )
  {
    v11 = 8 * v10 + 8;
    v12 = 255;
    v13 = 8LL;
  }
  else
  {
    v12 = 127;
    v11 = 16 * v10;
    v13 = 16LL;
  }
  v29 = v12;
  v14 = (size_t)&v7[v11 - (_QWORD)v8];
  if ( v14 )
  {
    memmove(v8, &v8[v13], v14);
    v9 = v7[3];
  }
  --*(_WORD *)v7;
  if ( v9 )
    --a1[1];
  v15 = (unsigned __int16)*(_DWORD *)v7;
  if ( (_BYTE *)*a1 != v7 )
  {
    if ( (unsigned int)v15 >= v12 )
    {
LABEL_9:
      v16 = *v4;
      v17 = (_DWORD *)v4[1];
      if ( v17 == (_DWORD *)(v16 + 16)
        && *(_BYTE *)(v16 + 3)
        && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                           a2,
                           0LL,
                           v27) )
      {
        *v28 = *v17;
      }
      return v5;
    }
    v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v15,
            a2);
    if ( !v19 )
      return (unsigned int)-1073741818;
    v20 = (unsigned __int16)*(_DWORD *)v7;
    if ( v20 < v29 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v19);
      v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      if ( (v19 & 1) == 0 )
        goto LABEL_9;
      v21 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      *v4 = v21;
      v22 = (unsigned __int16)*(_DWORD *)v21;
      if ( *(_BYTE *)(v21 + 3) )
        v23 = 8 * v22 + 16;
      else
        v23 = 16 * (v22 + 1);
      v24 = v21 + v23 - v14;
    }
    else
    {
      if ( (v19 & 1) == 0 )
        goto LABEL_9;
      v25 = v4[1];
      v26 = v20 - v29 + 1;
      if ( v7[3] )
        v24 = v25 + 8 * v26;
      else
        v24 = v25 + 16 * v26;
    }
    v4[1] = v24;
    goto LABEL_9;
  }
  if ( !(unsigned __int16)*(_DWORD *)v7 && !v7[3] )
  {
    memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
    --*(_DWORD *)(a2 + 24);
    *a1 = *((_QWORD *)v7 + 1);
    ExFreePoolWithTag(v7, 0);
  }
  return v5;
}
