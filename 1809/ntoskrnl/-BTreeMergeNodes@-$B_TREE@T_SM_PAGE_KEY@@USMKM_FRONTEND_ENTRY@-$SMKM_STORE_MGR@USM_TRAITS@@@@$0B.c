/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140151914
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C454 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C454 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        int **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  void **v4; // r11
  _DWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r10d
  size_t v12; // r8
  void *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v3 = (_QWORD *)a3;
  v4 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = *(v4 - 1);
  if ( (a3 & 1) != 0 )
    v3 = *v4;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v8 = (unsigned __int64)*v4;
  v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = (unsigned __int16)*(_DWORD *)v8;
  v11 = HIBYTE(*(_DWORD *)v8);
  if ( (a3 & 1) == 0 )
    v9 = a3;
  if ( v8 == v9 )
  {
    v7 -= 4;
    *(v4 - 1) = v7;
    LOBYTE(v11) = *(_BYTE *)(v8 + 3);
  }
  if ( (_BYTE)v11 )
  {
    *(_QWORD *)(v8 + 8) = v3[1];
    v12 = 8LL * (unsigned __int16)*(_DWORD *)v3;
    v13 = (void *)(v8 + 8 * (v10 + 2));
  }
  else
  {
    v15 = 2 * v10;
    LODWORD(v10) = v10 + 1;
    *(_DWORD *)(v8 + 8 * v15 + 16) = *v7;
    *(_QWORD *)(v8 + 8 * v15 + 24) = v3[1];
    v12 = 16LL * (unsigned __int16)*(_DWORD *)v3;
    v13 = (void *)(v8 + 16 * ((unsigned int)v10 + 1LL));
  }
  memmove(v13, v3 + 2, v12);
  *(_WORD *)v8 = v10 + *(_WORD *)v3;
  ExFreePoolWithTag(v3, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
