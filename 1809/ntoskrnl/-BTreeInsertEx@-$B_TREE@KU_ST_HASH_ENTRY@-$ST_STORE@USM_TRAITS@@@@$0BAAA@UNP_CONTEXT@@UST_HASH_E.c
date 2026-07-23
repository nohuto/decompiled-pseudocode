/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140149458
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014912C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401572C0 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401457A0 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401572C0 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1401574DC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x140158428 (SmArrayGrow.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140301B38 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdi
  unsigned int *v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r12d
  _DWORD *v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  unsigned int v24; // eax
  int v25; // edx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int *v31; // r8
  int v32; // ebp
  bool v33; // zf
  void **v34; // rax
  void **v35; // rdx
  void **v36; // rax
  void **v37; // rdx

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = *(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1);
  }
  else
  {
    v30 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *(_QWORD *)a1 = v30;
    if ( !v30 )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD *)a2;
    *(_QWORD *)v10 = v30;
    *(_QWORD *)(v10 + 8) = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = *(unsigned int **)v10;
  v12 = **(_DWORD **)v10;
  v13 = HIBYTE(v12);
  v14 = *(_BYTE *)(*(_QWORD *)v10 + 3LL) != 0 ? 1020 : 255;
  if ( (unsigned __int16)v12 >= v14 )
  {
    v17 = *(_QWORD *)(v10 + 8) - (_QWORD)v11 - 16LL;
    v18 = v17 >> 2;
    v19 = v17 >> 4;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 3LL) )
      LODWORD(v18) = v19;
    if ( v11 == *(unsigned int **)a1 )
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
      v21 = *(_QWORD *)(v10 - 8);
      v12 = *v11;
      v22 = v20;
      v23 = v21 + 32LL * ((v20 & 1) == 0) - 16;
    }
    v24 = HIBYTE(v12);
    if ( (unsigned __int16)v12 < v14 )
    {
      if ( (v22 & 1) == 0 )
      {
        if ( (int)v18 <= (unsigned __int16)v12 )
        {
          v21 = v23;
LABEL_19:
          v25 = v18;
LABEL_20:
          *(_QWORD *)v10 = v11;
          if ( *((_BYTE *)v11 + 3) )
          {
            *(_QWORD *)(v10 + 8) = &v11[v25 + 4];
            v26 = *(_QWORD *)(v10 - 16);
            v27 = v26 + 16;
            if ( **(_DWORD **)(a1 + 16) != -1 )
            {
              v36 = (void **)(v26 + 8);
              v37 = (void **)(v21 - 8);
              if ( v21 <= v27 )
                v37 = v36;
              NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v37);
            }
          }
          else
          {
            *(_QWORD *)(v10 + 8) = &v11[4 * v25 + 4];
          }
          v12 = *v11;
          LOBYTE(v13) = *((_BYTE *)v11 + 3);
          goto LABEL_7;
        }
        v32 = v18 - (unsigned __int16)v12;
        *(_QWORD *)(v10 - 8) = v23;
        v33 = HIBYTE(v12) == 0;
        v11 = (unsigned int *)v22;
        goto LABEL_42;
      }
      v31 = (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFEuLL);
      v25 = v18 + (unsigned __int16)v12 - v14;
      if ( (_BYTE)v24 )
      {
        if ( v25 > 0 )
          goto LABEL_37;
      }
      else
      {
        if ( v25 >= 0 )
        {
LABEL_37:
          if ( v11 == v31 )
            *(_QWORD *)(v10 - 8) = v23;
          else
            v21 = v23;
          goto LABEL_20;
        }
        ++v25;
      }
      v11 = v31;
      v25 += (unsigned __int16)*v31;
      goto LABEL_37;
    }
    if ( v22 )
    {
      if ( HIBYTE(v12) )
      {
        v28 = *(_QWORD *)(v10 - 16);
        v22 = v28 + 16;
        if ( **(_DWORD **)(a1 + 16) != -1 )
        {
          v34 = (void **)(v28 + 8);
          v35 = (void **)(v23 - 8);
          if ( v23 <= v22 )
            v35 = v34;
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v35);
        }
      }
    }
    v29 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2,
            v22);
    if ( v29 )
    {
      v10 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v21 = *(_QWORD *)(v10 - 8);
      if ( (int)v18 <= (unsigned __int16)*v11 )
      {
        v21 += 16LL;
        goto LABEL_19;
      }
      v32 = v18 - (unsigned __int16)*v11;
      v33 = HIBYTE(*v11) == 0;
      *(_QWORD *)(v10 - 8) = v21 + 16;
      v11 = (unsigned int *)v29;
LABEL_42:
      v25 = v32 - 1;
      if ( !v33 )
        v25 = v32;
      goto LABEL_20;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = *(_DWORD **)(v10 + 8);
  if ( (_BYTE)v13 )
  {
    memmove(v15 + 1, v15, (size_t)v11 + 4LL * (unsigned __int16)v12 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v11 + 16 * ((unsigned __int16)v12 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
