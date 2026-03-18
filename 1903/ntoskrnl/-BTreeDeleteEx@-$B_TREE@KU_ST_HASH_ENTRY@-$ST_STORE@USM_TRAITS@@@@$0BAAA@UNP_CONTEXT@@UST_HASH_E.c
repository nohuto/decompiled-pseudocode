/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151C9C
 * Callers:
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14014E45C (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140150104 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1401681D0 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152ADC (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140167EB0 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140168050 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1401681D0 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F80C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14031F8C8 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F94C (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned __int64 *v4; // rdi
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rax
  const void *v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // r12
  unsigned __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  void **v23; // r8
  unsigned __int64 v24; // rcx
  void **v25; // rax
  bool v26; // cc
  struct NP_CONTEXT::NP_CTX *v27; // rcx
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD **v31; // rdi
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  char v35[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v36; // [rsp+28h] [rbp-30h]

  v2 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v36 = 0LL;
  v3 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16 * v2);
  v7 = (_DWORD *)*v4;
  v8 = (unsigned __int16)*(_DWORD *)*v4;
  v9 = (char *)v4[1];
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v10 = v9 + 4;
    v11 = 510;
    v12 = 4 * v8 + 12;
  }
  else
  {
    v10 = v9 + 16;
    v12 = 16 * v8;
    v11 = 127;
  }
  v13 = v12 - (_QWORD)v9;
  v14 = (char *)v7 + v13;
  if ( (_DWORD *)((char *)v7 + v13) )
    memmove(v9, v10, (size_t)v7 + v13);
  --*(_WORD *)v7;
  if ( *((_BYTE *)v7 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v7 )
  {
    if ( !(unsigned __int16)*v7 && !*((_BYTE *)v7 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v31 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v7 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v7 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1, 1u);
        if ( **v31 != -1 )
        {
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
          if ( **v31 != -1 )
          {
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
            if ( **v31 != -1 )
              NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
          }
        }
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v7);
    }
  }
  else
  {
    if ( (unsigned __int16)*v7 < v11 )
    {
      v18 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      if ( !v18 )
        return (unsigned int)-1073741818;
      v19 = (unsigned __int16)*v7;
      if ( v19 < v11 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v18);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v18 & 1) != 0 )
        {
          v28 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v28;
          v29 = (unsigned __int16)*(_DWORD *)v28;
          if ( *(_BYTE *)(v28 + 3) )
            v30 = 4 * v29 + 16;
          else
            v30 = 16 * (v29 + 1);
          v4[1] = v28 + v30 - (_QWORD)v14;
        }
      }
      else
      {
        if ( (v18 & 1) != 0 )
        {
          v32 = v4[1];
          v33 = v19 - v11 + 1;
          if ( *((_BYTE *)v7 + 3) )
            v34 = v32 + 4 * v33;
          else
            v34 = v32 + 16 * v33;
          v4[1] = v34;
        }
        if ( *((_BYTE *)v7 + 3) )
        {
          v20 = *(v4 - 1);
          v21 = v20 + 16;
          if ( (v18 & 1) != 0 )
            v21 = v20 - 16;
          v22 = *(v4 - 2);
          v23 = (void **)(v21 - 8);
          v24 = v22 + 16;
          v25 = (void **)(v22 + 8);
          v26 = v21 <= v24;
          v27 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
          if ( v26 )
            v23 = v25;
          if ( **(_DWORD **)v27 != -1 )
            NP_CONTEXT::NpLeafDerefInternal(v27, v23);
        }
      }
    }
    v15 = *v4;
    v16 = (_DWORD *)v4[1];
    if ( v16 == (_DWORD *)(v15 + 16)
      && *(_BYTE *)(v15 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         v35) )
    {
      *v36 = *v16;
    }
  }
  return v3;
}
