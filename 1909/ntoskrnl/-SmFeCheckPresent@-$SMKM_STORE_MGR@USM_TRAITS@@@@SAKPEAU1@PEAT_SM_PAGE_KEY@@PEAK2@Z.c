/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14016490C
 * Callers:
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x140164828 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 * Callees:
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C8D0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C900 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // esi
  int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // r12d
  int v11; // r15d
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int *v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-D0h]
  int *v22; // [rsp+38h] [rbp-C8h]
  _QWORD v23[3]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  _BYTE v27[136]; // [rsp+68h] [rbp-98h] BYREF

  v4 = *a2;
  v22 = a4;
  memset(v27, 0, 0x80uLL);
  v26 = 1LL;
  v23[1] = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = 0;
  v23[2] = 0LL;
  v23[0] = v27;
  v8 = 0;
  v9 = *a3;
  v10 = 1024;
  v24 = 0;
  v19 = v9;
  v25 = 8;
  v11 = 1024;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    v4,
    (__int64)v23);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v12,
    (__int64)&v20,
    (__int64)v23);
  v13 = v21;
  v14 = v20;
  while ( v14 )
  {
    v13 += 8LL;
    if ( v13 >= v14 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v14 + 2) )
    {
      v16 = *(_QWORD *)(v14 + 8);
      if ( v16 )
      {
        v14 = *(_QWORD *)(v14 + 8);
        v13 = v16 + 16;
      }
      v15 = (v16 + 16) & -(__int64)(v16 != 0);
    }
    else
    {
      v15 = v13;
    }
    if ( !v15 || v4 < *(_DWORD *)v15 || (*(_BYTE *)(v15 + 7) & 1) != 0 || ((*(_BYTE *)(v15 + 6) - 1) & 0xFD) != 0 )
      break;
    if ( *(_BYTE *)(v15 + 6) == 1 )
      v8 = 1;
    if ( v7 )
    {
      if ( v11 != *(unsigned __int16 *)(v15 + 4) )
        break;
    }
    else
    {
      v11 = *(unsigned __int16 *)(v15 + 4);
    }
    if ( ++v7 >= v19 )
      break;
    ++v4;
  }
  if ( v7 )
  {
    v17 = v22;
    v10 = v11;
    *a3 = v7;
    *v17 = v8;
  }
  return v10;
}
