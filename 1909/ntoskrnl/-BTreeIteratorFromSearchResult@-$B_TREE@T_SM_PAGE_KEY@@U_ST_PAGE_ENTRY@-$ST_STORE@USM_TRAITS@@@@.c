/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14015202C
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014EC94 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140321400 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400D876C (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011BDD4 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14015177C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14031F318 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

_DWORD *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // edx
  _OWORD *v6; // r8
  _DWORD *result; // rax
  char *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  void **v12; // rax
  bool v13; // cc
  void **v14; // r9
  __int64 v15; // r15
  unsigned int v16; // edi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  _QWORD v26[5]; // [rsp+20h] [rbp+0h] BYREF

  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 == -1 || !v4 )
    v6 = (_OWORD *)(a3 + 8);
  else
    v6 = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v4 - 1));
  *(_OWORD *)a2 = *v6;
  result = *(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
  if ( *result != -1 )
  {
    result = *(_DWORD **)a2;
    if ( *(_QWORD *)a2 )
    {
      v8 = *(char **)a1;
      if ( result != *(_DWORD **)a1 )
      {
        if ( v4 == -1 )
        {
          v15 = *(_QWORD *)v6;
          memset(v26, 0, sizeof(v26));
          if ( v8 )
            v16 = (unsigned __int8)v8[2];
          else
            v16 = 0;
          v17 = 16LL * v16;
          v18 = v17 + 15;
          if ( v17 + 15 < v17 )
            v18 = 0xFFFFFFFFFFFFFF0LL;
          v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
          v20 = alloca(v19);
          v21 = alloca(v19);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            v26,
            2);
          v22 = *(_DWORD *)(v15 + 16);
          LODWORD(v26[3]) = 0;
          v26[0] = v26;
          HIDWORD(v26[3]) = v16;
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            (char **)a1,
            v22,
            (__int64)v26);
          v23 = 2LL * (v16 - 2);
          v24 = v26[2 * v16 - 3];
          v25 = v26[v23];
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
            (__int64 *)a1,
            (__int64)v26);
          v13 = v24 <= v25 + 16;
          v12 = (void **)(v25 + 8);
          v14 = (void **)(v24 - 8);
        }
        else
        {
          v9 = *((_QWORD *)v6 - 2);
          v10 = *((_QWORD *)v6 - 1);
          v11 = v9 + 16;
          v12 = (void **)(v9 + 8);
          v13 = v10 <= v11;
          v14 = (void **)(v10 - 8);
        }
        if ( v13 )
          v14 = v12;
        result = *(_DWORD **)(a1 + 16);
        if ( *result != -1 )
          result = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v14, 3u);
      }
    }
  }
  *(_QWORD *)(a2 + 8) -= 8LL;
  return result;
}
