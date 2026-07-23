/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C454
 * Callers:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14014C3DC (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140151914 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14014F838 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140150B34 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140151914 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        int **a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  int *v6; // r14
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // r13d
  __int64 v11; // rdx
  size_t v12; // rbp
  int v13; // eax
  int *v14; // rcx
  int *v15; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-38h] BYREF
  int *v25; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v6 = *(int **)v4;
  v7 = *(char **)(v4 + 8);
  v8 = **(_DWORD **)v4;
  if ( *(_BYTE *)(*(_QWORD *)v4 + 3LL) )
  {
    v9 = 8LL * (unsigned __int16)v8 + 8;
    v10 = 255;
    v11 = 8LL;
  }
  else
  {
    v11 = 16LL;
    v9 = 16LL * (unsigned __int16)v8;
    v10 = 127;
  }
  v12 = (size_t)v6 + v9 - (_QWORD)v7;
  if ( v12 )
  {
    memmove(v7, &v7[v11], v12);
    LOWORD(v8) = *(_WORD *)v6;
  }
  *(_WORD *)v6 = v8 - 1;
  if ( *((_BYTE *)v6 + 3) )
    a1[1] = (int *)((char *)a1[1] - 1);
  v13 = *v6;
  if ( *a1 != v6 )
  {
    if ( (unsigned __int16)*v6 >= v10 )
    {
LABEL_9:
      v14 = *(int **)v4;
      v15 = *(int **)(v4 + 8);
      if ( v15 == v14 + 4
        && *((_BYTE *)v14 + 3)
        && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                           a2,
                           0LL,
                           v24) )
      {
        *v25 = *v15;
      }
      return v2;
    }
    v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            (unsigned __int16)v13,
            a2);
    if ( !v17 )
      return (unsigned int)-1073741818;
    if ( (unsigned __int16)*v6 < v10 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v17);
      v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      if ( (v17 & 1) == 0 )
        goto LABEL_9;
      v21 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)v4 = v21;
      v22 = (unsigned __int16)*(_DWORD *)v21;
      if ( *(_BYTE *)(v21 + 3) )
        v23 = 8 * v22 + 16;
      else
        v23 = 16 * (v22 + 1);
      v20 = v21 + v23 - v12;
    }
    else
    {
      if ( (v17 & 1) == 0 )
        goto LABEL_9;
      v18 = *(_QWORD *)(v4 + 8);
      v19 = (unsigned __int16)*v6 - v10 + 1;
      if ( HIBYTE(*v6) )
        v20 = v18 + 8 * v19;
      else
        v20 = v18 + 16 * v19;
    }
    *(_QWORD *)(v4 + 8) = v20;
    goto LABEL_9;
  }
  if ( !(unsigned __int16)*v6 && !HIBYTE(v13) )
  {
    memmove((void *)v4, (const void *)(v4 + 16), 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
    --*(_DWORD *)(a2 + 24);
    *a1 = (int *)*((_QWORD *)v6 + 1);
    ExFreePoolWithTag(v6, 0);
  }
  return v2;
}
