/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14015042C
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140150104 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140153070 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152ADC (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140152D4C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140153070 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     SmArrayGrow @ 0x1401534F0 (SmArrayGrow.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F80C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 *v10; // rsi
  _DWORD *v11; // rdi
  char v12; // cl
  int v13; // edx
  unsigned int v14; // r12d
  _DWORD *v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // r10
  int v24; // edx
  __int64 v25; // rax
  void **v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  void **v29; // rax
  bool v30; // cc
  struct NP_CONTEXT::NP_CTX *v31; // rcx
  __int64 v32; // rax
  void **v33; // rdx
  unsigned __int64 v34; // rcx
  void **v35; // rax
  struct NP_CONTEXT::NP_CTX *v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // ebp
  char v40; // al
  __int64 v41; // rax
  _DWORD *v42; // r8

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v41 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *a1 = v41;
    if ( !v41 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v41;
    v10[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  v12 = *(_BYTE *)(*v10 + 3);
  v13 = *(_DWORD *)*v10;
  v14 = v12 != 0 ? 1020 : 255;
  if ( (unsigned __int16)v13 >= v14 )
  {
    v17 = v10[1] - (_QWORD)v11 - 16;
    v18 = v17 >> 2;
    v19 = v17 >> 4;
    if ( !v12 )
      LODWORD(v18) = v19;
    if ( v11 == (_DWORD *)*a1 )
    {
      v23 = 0LL;
      v22 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      v21 = *(v10 - 1);
      v13 = *v11;
      v22 = v20;
      v23 = v21 + 32LL * ((v20 & 1) == 0) - 16;
    }
    if ( (unsigned __int16)v13 < v14 )
    {
      if ( (v22 & 1) == 0 )
      {
        if ( (int)v18 <= (unsigned __int16)v13 )
        {
          v21 = v23;
LABEL_19:
          v24 = v18;
LABEL_20:
          *v10 = (__int64)v11;
          v25 = v24;
          if ( *((_BYTE *)v11 + 3) )
          {
            v26 = (void **)(v21 - 8);
            v10[1] = (__int64)&v11[v25 + 4];
            v27 = *(v10 - 2);
            v28 = v27 + 16;
            v29 = (void **)(v27 + 8);
            v30 = v21 <= v28;
            v31 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
            if ( v30 )
              v26 = v29;
            if ( **(_DWORD **)v31 != -1 )
              NP_CONTEXT::NpLeafDerefInternal(v31, v26);
          }
          else
          {
            v10[1] = (__int64)&v11[4 * v24 + 4];
          }
          v13 = *v11;
          v12 = *((_BYTE *)v11 + 3);
          goto LABEL_7;
        }
        v40 = *((_BYTE *)v11 + 3);
        v39 = v18 - (unsigned __int16)v13;
        v11 = (_DWORD *)v22;
        *(v10 - 1) = v23;
        goto LABEL_35;
      }
      v42 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFFEuLL);
      v24 = v18 + (unsigned __int16)v13 - v14;
      if ( *((_BYTE *)v11 + 3) )
      {
        if ( v24 > 0 )
          goto LABEL_45;
      }
      else
      {
        if ( v24 >= 0 )
          goto LABEL_45;
        ++v24;
      }
      v11 = v42;
      v24 += (unsigned __int16)*v42;
LABEL_45:
      if ( v11 == v42 )
        *(v10 - 1) = v23;
      else
        v21 = v23;
      goto LABEL_20;
    }
    if ( v22 && *((_BYTE *)v11 + 3) )
    {
      v32 = *(v10 - 2);
      v33 = (void **)(v23 - 8);
      v34 = v32 + 16;
      v35 = (void **)(v32 + 8);
      v30 = v23 <= v34;
      v36 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( v30 )
        v33 = v35;
      if ( **(_DWORD **)v36 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v36, v33);
    }
    v37 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2);
    if ( v37 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v38 = (unsigned __int16)*v11;
      v21 = *(v10 - 1);
      if ( (int)v18 <= v38 )
      {
        v21 += 16LL;
        goto LABEL_19;
      }
      v39 = v18 - v38;
      v40 = *((_BYTE *)v11 + 3);
      v11 = (_DWORD *)v37;
      *(v10 - 1) = v21 + 16;
LABEL_35:
      v24 = v39 - 1;
      if ( v40 )
        v24 = v39;
      goto LABEL_20;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = (_DWORD *)v10[1];
  if ( v12 )
  {
    memmove(v15 + 1, v15, (size_t)v11 + 4LL * (unsigned __int16)v13 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v11 + 16 * ((unsigned __int16)v13 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
