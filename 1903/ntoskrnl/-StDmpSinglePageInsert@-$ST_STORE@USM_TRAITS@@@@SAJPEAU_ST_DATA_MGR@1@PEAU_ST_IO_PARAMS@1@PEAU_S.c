/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140150104
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14014FD00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140105970 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140105AEC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140105B94 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmEtwEnabled @ 0x140106994 (SmEtwEnabled.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140150360 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14015042C (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140150718 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140150910 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140150E2C (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401510DC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151C9C (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151E8C (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152070 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwLogStoreOp @ 0x140324AF4 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  int v7; // ecx
  __int64 v9; // r13
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  int v13; // r8d
  int v14; // edi
  int v15; // r13d
  unsigned int v16; // ecx
  int v17; // eax
  ULONGLONG *v18; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  _BYTE *v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  v24 = (_BYTE *)a2;
  v3 = 0;
  v4 = a1 + 24;
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      v4);
    v7 = *(_DWORD *)(v4 + 32);
  }
  *(_DWORD *)(v4 + 32) = v7 & 0xFFFFFFFE;
  v9 = a1 + 64;
  v10 = *(_DWORD *)(a1 + 120);
  v22 = a1 + 64;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
    v10 = *(_DWORD *)(a1 + 120);
  }
  else
  {
    v22 = a1 + 64;
  }
  *(_DWORD *)(a1 + 120) = v10 & 0xFFFFFFFE;
  v11 = *(_DWORD *)(a1 + 184);
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
    v11 = *(_DWORD *)(a1 + 184);
  }
  v26 = 0LL;
  *(_DWORD *)(a1 + 184) = v11 & 0xFFFFFFFE;
  v12 = ((unsigned int)a3 - ((a3 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464);
  v13 = *(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456);
  LODWORD(v26) = *(_DWORD *)(a2 + 16);
  v23 = v12 + v13;
  HIDWORD(v26) = v12 + v13;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1,
    (unsigned int)v26,
    v4);
  v14 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          a1,
          v4,
          &v26);
  if ( v14 >= 0 )
  {
    v3 = 1;
    v15 = 4096;
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v16 = *(_DWORD *)(a3 + 4) + 4096;
      *(_DWORD *)(a3 + 4) = v16;
      if ( (v16 & 0xFFFFF000) > 0x1000 )
        return 0;
      if ( v16 < 0x1000 )
        __int2c();
    }
    v25 = v23;
    v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
            a1 + 64,
            &v25,
            a1 + 88);
    if ( v14 >= 0 )
    {
      v3 = 3;
      if ( *(_BYTE *)(a1 + 776) )
        goto LABEL_17;
      v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 128,
              v23,
              a1 + 152);
      v14 = v17;
      if ( v17 == -1073741275 )
      {
        v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
                a1 + 128,
                a1 + 152,
                &v23);
      }
      else if ( v17 >= 0 )
      {
        v14 = -1073741484;
      }
      if ( v14 >= 0 )
      {
LABEL_17:
        if ( (*(_DWORD *)(a3 + 4) & 0xFFF) != 0 )
          v15 = *(_DWORD *)(a3 + 4) & 0xFFF;
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
          a1,
          (unsigned int)(*(_DWORD *)a3 >> *(_DWORD *)(a1 + 812)),
          (unsigned int)(v15 + *(_DWORD *)(a1 + 824) + 15) >> 4,
          0LL);
        v18 = SmEtwEnabled(0);
        if ( v18 )
          SmEtwLogStoreOp(
            (_DWORD)v18,
            0,
            (unsigned int)&v26,
            (_DWORD)v18,
            *(_DWORD *)a3,
            a1,
            *(_WORD *)(a3 + 4),
            (2 * (*v24 & 7)) | ((*(_DWORD *)v24 & 0x40000000) != 0));
        return 0;
      }
    }
    v9 = v22;
  }
  if ( (v3 & 1) != 0 )
  {
    v20 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            v4);
    if ( v20 < 0 )
    {
      if ( v20 != -1073741818 )
        __int2c();
      v14 = v20;
    }
  }
  if ( v3 >= 2 )
  {
    v21 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
            v9,
            a1 + 88);
    if ( v21 < 0 )
    {
      if ( v21 != -1073741818 )
        __int2c();
      return (unsigned int)v21;
    }
  }
  return (unsigned int)v14;
}
