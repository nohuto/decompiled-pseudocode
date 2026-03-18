/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152710
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014EC94 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1401507A4 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140167AC8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152BF8 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14016298C (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140167AA0 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140167AC8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F25C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14031F318 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F39C (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned __int64 *v4; // rdi
  _DWORD *v7; // rsi
  char *v8; // rcx
  int v9; // eax
  __int64 v10; // rbp
  unsigned int v11; // r14d
  const void *v12; // rdx
  size_t v13; // rbp
  _DWORD *v14; // rcx
  _DWORD *v15; // rdi
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  void **v22; // r8
  unsigned __int64 v23; // rcx
  void **v24; // rax
  bool v25; // cc
  struct NP_CONTEXT::NP_CTX *v26; // rcx
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD **v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v34[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v35; // [rsp+28h] [rbp-30h]
  unsigned int v36; // [rsp+60h] [rbp+8h]

  v2 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v35 = 0LL;
  v3 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16 * v2);
  v7 = (_DWORD *)*v4;
  v8 = (char *)v4[1];
  v9 = *(_DWORD *)*v4;
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v10 = 8LL * (unsigned __int16)v9 + 8;
    v11 = 255;
    v12 = v8 + 8;
  }
  else
  {
    v10 = 16LL * (unsigned __int16)v9;
    v12 = v8 + 16;
    v11 = 127;
  }
  v36 = v11;
  v13 = (size_t)v7 + v10 - (_QWORD)v8;
  if ( v13 )
    memmove(v8, v12, v13);
  --*(_WORD *)v7;
  if ( *((_BYTE *)v7 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v7 )
  {
    if ( !(unsigned __int16)*v7 && !*((_BYTE *)v7 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v30 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v7 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v7 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1, 1u);
        if ( **v30 != -1 )
        {
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
          if ( **v30 != -1 )
          {
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
            if ( **v30 != -1 )
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
      v17 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              a1,
              a2);
      if ( !v17 )
        return (unsigned int)-1073741818;
      v18 = (unsigned __int16)*v7;
      if ( v18 < v36 )
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
          a1,
          a2,
          v17);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v27 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v27;
          v28 = (unsigned __int16)*(_DWORD *)v27;
          if ( *(_BYTE *)(v27 + 3) )
            v29 = 8 * v28 + 16;
          else
            v29 = 16 * (v28 + 1);
          v4[1] = v27 + v29 - v13;
        }
      }
      else
      {
        if ( (v17 & 1) != 0 )
        {
          v31 = v4[1];
          v32 = v18 - v36 + 1;
          if ( *((_BYTE *)v7 + 3) )
            v33 = v31 + 8 * v32;
          else
            v33 = v31 + 16 * v32;
          v4[1] = v33;
        }
        if ( *((_BYTE *)v7 + 3) )
        {
          v19 = *(v4 - 1);
          v20 = v19 + 16;
          if ( (v17 & 1) != 0 )
            v20 = v19 - 16;
          v21 = *(v4 - 2);
          v22 = (void **)(v20 - 8);
          v23 = v21 + 16;
          v24 = (void **)(v21 + 8);
          v25 = v20 <= v23;
          v26 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
          if ( v25 )
            v22 = v24;
          if ( **(_DWORD **)v26 != -1 )
            NP_CONTEXT::NpLeafDerefInternal(v26, v22);
        }
      }
    }
    v14 = (_DWORD *)*v4;
    v15 = (_DWORD *)v4[1];
    if ( v15 == v14 + 4
      && *((_BYTE *)v14 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         v34) )
    {
      *v35 = *v15;
    }
  }
  return v3;
}
