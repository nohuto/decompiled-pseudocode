/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014A928
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147E6C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14030422C (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400E4AB4 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DF7C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014A0C4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140301BF4 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

char *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        char **a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // edx
  _OWORD *v6; // r8
  char *result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void **v11; // rax
  bool v12; // cc
  void **v13; // r9
  __int64 v14; // r15
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  _QWORD v25[3]; // [rsp+20h] [rbp+0h] BYREF
  int v26; // [rsp+38h] [rbp+18h]
  unsigned int v27; // [rsp+3Ch] [rbp+1Ch]

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 == -1 || !v4 )
    v6 = (_OWORD *)(a3 + 8);
  else
    v6 = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v4 - 1));
  *(_OWORD *)a2 = *v6;
  result = *(char **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
  if ( *(_DWORD *)result != -1 )
  {
    if ( *a2 )
    {
      result = *a1;
      if ( (char *)*a2 != *a1 )
      {
        if ( v4 == -1 )
        {
          v14 = *(_QWORD *)v6;
          if ( result )
            v15 = (unsigned __int8)result[2];
          else
            v15 = 0;
          v16 = 16LL * v15;
          v17 = v16 + 15;
          if ( v16 + 15 < v16 )
            v17 = 0xFFFFFFFFFFFFFF0LL;
          v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
          v19 = alloca(v18);
          v20 = alloca(v18);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            v25,
            2);
          v21 = *(_DWORD *)(v14 + 16);
          v26 = 0;
          v25[0] = v25;
          v27 = v15;
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            a1,
            v21,
            (__int64)v25);
          v22 = 2LL * (v15 - 2);
          v23 = v25[2 * v15 - 3];
          v24 = v25[v22];
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
            (__int64 *)a1,
            (__int64)v25);
          v12 = v23 <= v24 + 16;
          v11 = (void **)(v24 + 8);
          v13 = (void **)(v23 - 8);
        }
        else
        {
          v8 = *((_QWORD *)v6 - 2);
          v9 = *((_QWORD *)v6 - 1);
          v10 = v8 + 16;
          v11 = (void **)(v8 + 8);
          v12 = v9 <= v10;
          v13 = (void **)(v9 - 8);
        }
        if ( v12 )
          v13 = v11;
        result = a1[2];
        if ( *(_DWORD *)result != -1 )
          result = (char *)NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 2), v13, 3u);
      }
    }
  }
  a2[1] -= 8LL;
  return result;
}
