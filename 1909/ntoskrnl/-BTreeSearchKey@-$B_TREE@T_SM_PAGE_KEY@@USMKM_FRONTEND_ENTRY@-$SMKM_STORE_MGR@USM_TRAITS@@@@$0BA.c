/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C900
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011ACD4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1401492A4 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1401496F4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140149A7C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014BCA8 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014C428 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14016490C (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031F980 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403258E4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     SmArrayGrow @ 0x140153B90 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // r9
  char v13; // r14
  int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // r10d
  int v18; // eax
  _DWORD *v19; // r10
  unsigned int v21; // r10d
  int v22; // eax
  __int64 *v23; // r9

  v3 = 0;
  v5 = a2;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v11 = (_QWORD *)(a3 + 8);
    v7 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 0;
    v7 = 1;
    v8 = *a1;
    v9 = 0LL;
    if ( v8 )
      v9 = *(unsigned __int8 *)(v8 + 2);
    v10 = (_DWORD *)(a3 + 28);
    if ( *v10 < (unsigned int)v9 && !(unsigned int)SmArrayGrow(v9, a2, v10, a3) )
      return (unsigned int)-1073741670;
    v11 = *(_QWORD **)a3;
  }
  v12 = *a1;
  if ( !*a1 )
  {
    if ( !v7 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v13 = *(_BYTE *)(v12 + 3);
    v14 = -1;
    v15 = (unsigned __int16)*(_DWORD *)v12;
    if ( v13 )
    {
      if ( (unsigned __int16)*(_DWORD *)v12 )
      {
        do
        {
          v16 = (v15 + v14) >> 1;
          v17 = (v15 + v14) >> 1;
          if ( *(_DWORD *)(v12 + 8 * v16 + 16) >= v5 )
            v18 = *(_DWORD *)(v12 + 8 * v16 + 16) != v5;
          else
            v18 = -1;
          if ( v18 >= 0 )
          {
            v15 = (v15 + v14) >> 1;
            v17 = v14;
          }
          v14 = v17;
        }
        while ( v17 + 1 != v15 );
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v12 )
    {
      do
      {
        v21 = (v15 + v14) >> 1;
        if ( *(_DWORD *)(v12 + 16LL * v21 + 16) >= v5 )
          v22 = *(_DWORD *)(v12 + 16LL * ((v15 + v14) >> 1) + 16) != v5;
        else
          v22 = -1;
        if ( v22 > 0 )
        {
          v15 = (v15 + v14) >> 1;
          v21 = v14;
        }
        v14 = v21;
      }
      while ( v21 + 1 != v15 );
    }
    if ( v13 )
      break;
    if ( v7 )
    {
      *v11 = v12;
      v11[1] = v12 + 16 * (v15 + 1LL);
      v11 += 2;
    }
    if ( v15 )
      v23 = (__int64 *)(16LL * (v15 - 1) + v12 + 24);
    else
      v23 = (__int64 *)(v12 + 8);
    v12 = *v23;
  }
  *v11 = v12;
  v19 = (_DWORD *)(v12 + 8 * (v15 + 2LL));
  v11[1] = v19;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v11 - *(_QWORD *)a3) >> 4) + 1;
  if ( v15 >= (unsigned __int16)*(_DWORD *)v12 || *v19 != v5 )
    return (unsigned int)-1073741275;
  return v3;
}
