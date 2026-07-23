/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014E874
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011CF54 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14014B738 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14014BC54 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014C08C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14014C3DC (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014DC88 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140302268 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140308634 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     SmArrayGrow @ 0x140158428 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
  int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  int v17; // eax
  _DWORD *v18; // r10
  unsigned int v20; // r10d
  unsigned int v21; // r11d
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
    v13 = -1;
    v14 = (unsigned __int16)*(_DWORD *)v12;
    if ( HIBYTE(*(_DWORD *)v12) )
    {
      if ( (unsigned __int16)*(_DWORD *)v12 )
      {
        do
        {
          v15 = (v14 + v13) >> 1;
          v16 = *(_DWORD *)(v12 + 8LL * v15 + 16);
          if ( v16 >= v5 )
            v17 = v16 != v5;
          else
            v17 = -1;
          if ( v17 >= 0 )
          {
            v14 = (v14 + v13) >> 1;
            v15 = v13;
          }
          v13 = v15;
        }
        while ( v15 + 1 != v14 );
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v12 )
    {
      do
      {
        v20 = (v14 + v13) >> 1;
        v21 = *(_DWORD *)(v12 + 16LL * v20 + 16);
        if ( v21 >= v5 )
          v22 = v21 != v5;
        else
          v22 = -1;
        if ( v22 > 0 )
        {
          v14 = (v14 + v13) >> 1;
          v20 = v13;
        }
        v13 = v20;
      }
      while ( v20 + 1 != v14 );
    }
    if ( *(_BYTE *)(v12 + 3) )
      break;
    if ( v7 )
    {
      *v11 = v12;
      v11[1] = v12 + 16 * (v14 + 1LL);
      v11 += 2;
    }
    if ( v14 )
      v23 = (__int64 *)(16LL * (v14 - 1) + v12 + 24);
    else
      v23 = (__int64 *)(v12 + 8);
    v12 = *v23;
  }
  *v11 = v12;
  v18 = (_DWORD *)(v12 + 8 * (v14 + 2LL));
  v11[1] = v18;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v11 - *(_QWORD *)a3) >> 4) + 1;
  if ( v14 >= (unsigned __int16)*(_DWORD *)v12 || *v18 != v5 )
    return (unsigned int)-1073741275;
  return v3;
}
