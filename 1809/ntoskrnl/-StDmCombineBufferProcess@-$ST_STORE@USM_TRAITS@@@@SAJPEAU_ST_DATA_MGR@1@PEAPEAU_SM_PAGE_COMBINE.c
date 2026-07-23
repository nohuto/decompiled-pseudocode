/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140147208
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401481A4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400E4AF8 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DE98 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DEDC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401461EC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14014674C (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x140147B74 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140148400 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140149C18 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int16 *v6; // r14
  int v7; // eax
  int v8; // edi
  unsigned __int16 *v9; // r15
  unsigned __int16 *v10; // rdi
  int v11; // ecx
  int v12; // r14d
  unsigned __int16 *v13; // r14
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // r15
  char *v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-50h] BYREF
  char v25; // [rsp+28h] [rbp-48h] BYREF
  int v26; // [rsp+38h] [rbp-38h]
  _QWORD v27[5]; // [rsp+48h] [rbp-28h] BYREF

  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    &v24,
    2);
  v5 = *(_QWORD *)(a1 + 800);
  v6 = *a2;
  if ( (*(_BYTE *)(v5 + 6021) & 4) != 0 )
  {
    memset(v27, 0, sizeof(v27));
    v27[1] = v6;
    v27[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v7 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v5, 5, (__int64)v27, 0xCu);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v8 = v27[4];
    }
  }
  else
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v5 + 6232, *a2, 0LL, v4);
  }
  if ( v8 >= 0 )
  {
    v9 = *a2;
    v10 = v9 + 4;
    v11 = *(_DWORD *)(a1 + 120);
    v12 = (*((_DWORD *)v9 + 2) >> 4) | (*(_DWORD *)v9 << *(_DWORD *)(a1 + 812));
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        a1 + 88);
      v11 = *(_DWORD *)(a1 + 120);
    }
    *(_DWORD *)(a1 + 120) = v11 & 0xFFFFFFFE;
    **(_DWORD **)(a1 + 760) = v12;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                a1 + 88,
                a1 + 64,
                *(_DWORD *)(a1 + 768)) < 0 )
      __int2c();
    v13 = (unsigned __int16 *)((char *)v9 + v9[3]);
    while ( v10 < v13 )
    {
      if ( *((_BYTE *)v10 + 7) < 0x10u )
      {
        *(_DWORD *)v10 >>= 4;
        do
        {
          v14 = *(_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                             a1 + 64,
                             a1 + 88);
          v15 = v14 >> *(_DWORD *)(a1 + 456);
          _BitScanReverse((unsigned int *)&v16, v15);
          v17 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v14 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v16 + 192) + 16 * (v15 ^ (unsigned int)(1 << v16))));
        }
        while ( (*(_DWORD *)(a1 + 808) & *v17) != *(_DWORD *)v10 );
        if ( (v17[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)&v10[4 * *((unsigned __int8 *)v10 + 7) + 6] >> 4) | (*(_DWORD *)&v10[4 * *((unsigned __int8 *)v10 + 7) + 4] << *(_DWORD *)(a1 + 812));
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      a1 + 64,
                      *(unsigned int *)(a1 + 768),
                      &v24) >= 0 )
          {
            if ( v26 == -1 || !v26 )
              v18 = &v25;
            else
              v18 = (char *)(v24 + 16LL * (unsigned int)(v26 - 1));
            v19 = **((_DWORD **)v18 + 1);
            v20 = v19 & *(_DWORD *)(a1 + 460);
            v21 = v19 >> *(_DWORD *)(a1 + 456);
            _BitScanReverse((unsigned int *)&v22, v21);
            if ( (*(_DWORD *)(*(unsigned int *)(a1 + 472)
                            + (unsigned int)(*(_DWORD *)(a1 + 464) * v20)
                            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22)))
                            + 4LL) & 0xFFFFF000) != 0xFFFFF000 )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v17, a1 + 88);
          }
        }
      }
      v10 += 4 * *((unsigned __int8 *)v10 + 6) + 4;
    }
    v8 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    (__int64)&v24,
    0);
  return (unsigned int)v8;
}
