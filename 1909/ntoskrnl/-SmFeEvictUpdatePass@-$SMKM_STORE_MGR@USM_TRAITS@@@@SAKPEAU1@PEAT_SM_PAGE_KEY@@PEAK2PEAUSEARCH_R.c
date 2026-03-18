/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140149558
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1401492A4 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1400EE398 (SmKmStoreReferenceEx.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C8D0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        unsigned int *a4,
        __int64 a5)
{
  int v5; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // r15d
  __int64 v11; // r8
  int v12; // r9d
  int v13; // r10d
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v20; // ecx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+70h] [rbp+8h]

  v5 = *a3;
  v6 = *a2;
  v7 = 0;
  v21 = 0LL;
  v8 = 0;
  v22 = 0LL;
  v23 = v5;
  v9 = v5 + v6 - 1;
  v10 = 1024;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    0LL,
    &v21,
    a5);
  v14 = v22;
  v15 = v21;
  while ( 1 )
  {
    if ( !v15 )
    {
      v16 = 0LL;
LABEL_23:
      v18 = v9;
      v20 = 1;
      goto LABEL_24;
    }
    v14 += 8LL;
    v16 = v14;
    if ( v14 >= v15 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v15 + 2) )
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( v17 )
      {
        v15 = *(_QWORD *)(v15 + 8);
        v14 = v17 + 16;
      }
      v16 = (v17 + 16) & -(__int64)(v17 != 0);
    }
    if ( !v16 )
      goto LABEL_23;
    v18 = *(_DWORD *)v16;
    if ( v6 >= *(_DWORD *)v16 && (*(_BYTE *)(v16 + 7) & 1) == 0 )
      goto LABEL_10;
    if ( v9 < v18 )
      goto LABEL_23;
    v20 = 0;
LABEL_24:
    v8 += v18 - v6;
    v11 = v8;
    if ( v7 )
      break;
    if ( v20 )
    {
LABEL_20:
      ++v8;
      goto LABEL_21;
    }
    v7 = v18 - v6;
    v6 = v18;
    if ( (*(_BYTE *)(v16 + 7) & 1) == 0 )
    {
LABEL_10:
      if ( v10 != v13 && v10 != *(unsigned __int16 *)(v16 + 4) )
        goto LABEL_21;
      if ( *(_BYTE *)(v16 + 6) == 2 )
      {
        if ( v10 != v13 )
          goto LABEL_21;
      }
      else
      {
        if ( v7 )
        {
          if ( v10 == v13 )
            goto LABEL_21;
        }
        else
        {
          if ( !SmKmStoreReferenceEx((__int64)&SmGlobals, *(unsigned __int16 *)(v16 + 4), v11) )
            goto LABEL_20;
          v10 = *(unsigned __int16 *)(v16 + 4);
          v13 = 1024;
          v12 = v23;
        }
        *(_BYTE *)(v16 + 6) = 2;
      }
    }
    ++v7;
    ++v8;
    if ( v7 == v12 )
      goto LABEL_21;
    ++v6;
  }
  ++v8;
  if ( !v20 )
    v8 = v11;
LABEL_21:
  *a3 = v7;
  *a4 = v8;
  return v10;
}
