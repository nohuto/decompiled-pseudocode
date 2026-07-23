/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14014DFB4
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151058 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140150B34 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151058 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1401511F8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     SmArrayGrow @ 0x140158428 (SmArrayGrow.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rsi
  unsigned int *v11; // r14
  unsigned int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // r12d
  _QWORD *v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r10
  unsigned int *v23; // r8
  unsigned int *v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // edi
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rax

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
    v10 = *(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1);
  }
  else
  {
    v31 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1LL,
            1LL);
    *a1 = v31;
    if ( !v31 )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD *)a2;
    *(_QWORD *)v10 = v31;
    *(_QWORD *)(v10 + 8) = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = *(unsigned int **)v10;
  v12 = **(_DWORD **)v10;
  v13 = HIBYTE(v12);
  v14 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v10 + 3LL) != 0) + 255;
  if ( (unsigned __int16)v12 >= v14 )
  {
    v17 = *(_QWORD *)(v10 + 8) - (_QWORD)v11 - 16LL;
    v18 = v17 >> 3;
    v19 = v17 >> 4;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 3LL) )
      LODWORD(v18) = v19;
    if ( v11 == (unsigned int *)*a1 )
    {
      v22 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              v13,
              a2);
      v12 = *v11;
      v21 = v20;
      v22 = *(_QWORD *)(v10 - 8) + 32LL * ((v20 & 1) == 0) - 16;
    }
    if ( (unsigned __int16)v12 < v14 )
    {
      if ( (v21 & 1) != 0 )
      {
        LODWORD(v18) = (unsigned __int16)v12 + v18 - v14;
        v23 = (unsigned int *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( HIBYTE(v12) )
        {
          if ( (int)v18 > 0 )
            goto LABEL_19;
        }
        else
        {
          if ( (int)v18 >= 0 )
            goto LABEL_19;
          LODWORD(v18) = v18 + 1;
        }
        v11 = v23;
        LODWORD(v18) = (unsigned __int16)*v23 + (_DWORD)v18;
LABEL_19:
        if ( v11 == v23 )
          *(_QWORD *)(v10 - 8) = v22;
        goto LABEL_21;
      }
      if ( (int)v18 > (unsigned __int16)v12 )
      {
        v28 = v18 - (unsigned __int16)v12;
        v29 = HIBYTE(v12) == 0;
        *(_QWORD *)(v10 - 8) = v22;
        v11 = (unsigned int *)v21;
        goto LABEL_27;
      }
      goto LABEL_21;
    }
    v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
            a1,
            a2,
            v21);
    if ( v25 )
    {
      v26 = *v11;
      v10 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v27 = (unsigned __int16)*v11;
      if ( (int)v18 > v27 )
      {
        *(_QWORD *)(v10 - 8) += 16LL;
        v28 = v18 - v27;
        v11 = (unsigned int *)v25;
        v29 = HIBYTE(v26) == 0;
LABEL_27:
        v30 = v28 - 1;
        if ( !v29 )
          v30 = v28;
        LODWORD(v18) = v30;
      }
LABEL_21:
      *(_QWORD *)v10 = v11;
      if ( *((_BYTE *)v11 + 3) )
        v24 = &v11[2 * (int)v18 + 4];
      else
        v24 = &v11[4 * (int)v18 + 4];
      *(_QWORD *)(v10 + 8) = v24;
      LOBYTE(v13) = *((_BYTE *)v11 + 3);
      v12 = *v11;
      goto LABEL_7;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = *(_QWORD **)(v10 + 8);
  if ( (_BYTE)v13 )
  {
    memmove(v15 + 1, v15, (size_t)v11 + 8LL * (unsigned __int16)v12 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v15 + 2, v15, (size_t)v11 + 16 * ((unsigned __int16)v12 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
