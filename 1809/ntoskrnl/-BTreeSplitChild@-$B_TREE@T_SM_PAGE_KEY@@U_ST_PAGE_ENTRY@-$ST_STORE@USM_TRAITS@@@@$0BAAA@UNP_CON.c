/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140157540
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140149E28 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140149E28 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1401574DC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140158A80 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x140301B08 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

_BYTE *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbp
  _BYTE *v5; // r14
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  __int64 v9; // r12
  int *v10; // rdx
  int v11; // eax
  int *v12; // r15
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  char v18; // cl
  _BYTE *v20; // rax
  struct NP_CONTEXT::NP_CTX *v21; // rcx
  union _NP_LEAF_PTR *v22; // rdx
  int v23; // r8d
  _BYTE *v24; // r15
  __int64 v25; // r8
  struct NP_CONTEXT::NP_CTX *v26; // rcx
  union _NP_LEAF_PTR *v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-48h] BYREF
  __int16 v29; // [rsp+78h] [rbp+10h]
  _BYTE *v30; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0LL;
  v6 = *v4;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v4 + 3LL),
         *(_BYTE *)(*v4 + 2LL));
  v8 = v7;
  if ( !v7 )
    return v30;
  *((_QWORD *)&v28 + 1) = v7;
  *(_QWORD *)&v28 = 0LL;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( HIBYTE(*(_DWORD *)v6) )
  {
    v10 = (int *)(v6 + 16 + 8 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 2) < v4[1] )
    {
      v10 += 2;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v12 = (int *)(v6 + 16 * (((*(_DWORD *)v6 >> 1) & 0x7FFF) + 1LL));
    v10 = 0LL;
    v11 = *v12;
  }
  LODWORD(v28) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (unsigned int)v9;
  v29 = *(_DWORD *)v6 - v9;
  if ( HIBYTE(*(_DWORD *)v6) )
  {
    v14 = **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( v14 == -1 )
      v15 = *(_QWORD *)(v6 + 8);
    else
      v15 = 3358LL;
    if ( v14 == -1 )
      *((_QWORD *)v8 + 1) = v15;
    memmove(v8 + 16, v10, 8 * v13);
  }
  else
  {
    v25 = (unsigned int)(v13 - 1);
    v29 = v25;
    memmove(v8 + 16, v12 + 4, 16 * v25);
    *((_QWORD *)v8 + 1) = *((_QWORD *)v12 + 1);
  }
  *(_WORD *)v8 = v29;
  if ( *(_QWORD *)a1 == v6 )
  {
    v20 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0,
            *(_BYTE *)(v6 + 2) + 1);
    v5 = v20;
    if ( v20 )
    {
      v22 = (union _NP_LEAF_PTR *)(v20 + 8);
      v23 = 1;
      *((_QWORD *)v20 + 1) = v6;
      v24 = v20 + 16;
      *((_OWORD *)v20 + 1) = v28;
      *(_WORD *)v20 = 1;
      *(_QWORD *)a1 = v20;
      if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)(a1 + 16) != -1 )
      {
        *(_DWORD *)v22 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v21, v22);
      }
      memmove(v4 + 2, v4, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v23));
      *v4 = v5;
      v4[1] = v24;
      v17 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_13;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v28);
    v17 = ++*(_DWORD *)(a2 + 24);
    if ( v16 >= 0 )
    {
LABEL_13:
      v18 = *(_BYTE *)(v6 + 3);
      if ( v18 && **(_DWORD **)(a1 + 16) != -1 )
      {
        v26 = (struct NP_CONTEXT::NP_CTX *)(16LL * (unsigned int)(v17 - 2));
        v27 = (union _NP_LEAF_PTR *)(*(_QWORD *)((char *)v26 + *(_QWORD *)a2 + 8) + 8LL);
        *(_DWORD *)v27 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v26, v27);
        v18 = *(_BYTE *)(v6 + 3);
      }
      *(_WORD *)v6 = v9;
      if ( v18 && **(_DWORD **)(a1 + 16) == -1 )
        *(_QWORD *)(v6 + 8) = v8;
      v30 = v8;
      v8 = 0LL;
      v5 = 0LL;
    }
  }
  if ( v8 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v8);
  if ( v5 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v5);
  return v30;
}
