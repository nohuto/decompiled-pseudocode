/*
 * XREFs of ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140321400
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14015000C (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011BDD4 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14014EA38 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14015177C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140151958 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140151FBC (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14015202C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     SmWorkQueueGetDepth @ 0x140165434 (SmWorkQueueGetDepth.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14031ECA0 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x14031EED0 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 LeafSibling; // rax
  __int64 v11; // rsi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 1905);
  v12 = 0LL;
  v13 = 0LL;
  if ( (v2 & 3) == 1 )
  {
    *(_BYTE *)(a1 + 1905) = v2 & 0xFC | 2;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
      &v12,
      (_QWORD *)a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 1064);
    v4 = *(_DWORD *)(a1 + 56);
    if ( (v4 & 1) == 0 )
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
      v4 = *(_DWORD *)(a1 + 56);
    }
    *(_DWORD *)(a1 + 56) = v4 | 1;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (char **)a1,
      v3,
      a1 + 24);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      (__int64)&v12,
      a1 + 24);
  }
  v5 = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 1896) )
  {
    v7 = v13;
    v8 = v12;
    while ( v8 )
    {
      v7 += 8LL;
      v9 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
      v13 = v7;
      if ( v7 < v8 + 8 * v9 )
        goto LABEL_17;
      if ( **(_DWORD **)(a1 + 16) == -1 )
      {
        LeafSibling = *(_QWORD *)(v8 + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        v8);
        if ( LeafSibling == -1 )
        {
          v11 = -1LL;
          goto LABEL_18;
        }
      }
      if ( LeafSibling )
      {
        v7 = LeafSibling + 16;
        v12 = LeafSibling;
        v13 = LeafSibling + 16;
        v8 = LeafSibling;
LABEL_17:
        v11 = v7;
        goto LABEL_18;
      }
      v11 = 0LL;
LABEL_18:
      if ( !v11 )
        break;
      if ( v6 < 0x200
        || !(unsigned int)SmWorkQueueGetDepth(*(_DWORD **)(a1 + 800), *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6022LL) == 0) )
      {
        ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v11);
        ++v6;
        if ( *(_DWORD *)(a1 + 1896) )
          continue;
      }
      *(_DWORD *)(a1 + 1064) = *(_DWORD *)v11;
      goto LABEL_24;
    }
  }
  v5 = 1024;
  *(_BYTE *)(a1 + 1905) = *(_BYTE *)(a1 + 1905) & 0xFC | 1;
LABEL_24:
  if ( *(_DWORD *)(a1 + 1896) <= v5 )
    *(_BYTE *)(a1 + 1905) &= 0xFCu;
  else
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), 5LL, 0x7530u, 0xFFFFFFFE);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    &v12,
    (char **)a1);
}
