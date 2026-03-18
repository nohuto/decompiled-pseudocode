/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14014E07C
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14014F144 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140105AA8 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140105AEC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140108874 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140147980 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401481BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14014DF08 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x14014DF80 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014F3A0 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140150C2C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, struct _PRIVILEGE_SET **a2)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  struct _PRIVILEGE_SET *v6; // rdx
  int v7; // eax
  int v8; // edi
  struct _PRIVILEGE_SET *v9; // r15
  LUID_AND_ATTRIBUTES *Privilege; // rdi
  int v11; // ecx
  int v12; // r14d
  LUID_AND_ATTRIBUTES *v13; // r14
  _QWORD *v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // r15
  _QWORD v25[5]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+68h] [rbp-8h]

  memset(v25, 0, sizeof(v25));
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    v25,
    2);
  v5 = *(_QWORD *)(a1 + 800);
  v6 = *a2;
  if ( (*(_BYTE *)(v5 + 6021) & 4) != 0 )
  {
    v28 = 0LL;
    v26[1] = v6;
    v26[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v27 = 0LL;
    v7 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v5, 5, (__int64)v26, 0xCu);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v8 = v28;
    }
  }
  else
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v5 + 6232, v6, 0LL, v4);
  }
  if ( v8 >= 0 )
  {
    v9 = *a2;
    Privilege = v9->Privilege;
    v11 = *(_DWORD *)(a1 + 120);
    v12 = (v9->Privilege[0].Luid.LowPart >> 4) | (v9->PrivilegeCount << *(_DWORD *)(a1 + 812));
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
    v13 = (LUID_AND_ATTRIBUTES *)((char *)v9 + HIWORD(v9->Control));
    while ( Privilege < v13 )
    {
      if ( HIBYTE(Privilege->Luid.HighPart) < 0x10u )
      {
        Privilege->Luid.LowPart >>= 4;
        do
        {
          v20 = *(_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                             a1 + 64,
                             a1 + 88);
          v21 = v20 >> *(_DWORD *)(a1 + 456);
          _BitScanReverse((unsigned int *)&v22, v21);
          v23 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v20 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22))));
        }
        while ( (*(_DWORD *)(a1 + 808) & *v23) != Privilege->Luid.LowPart );
        if ( (v23[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(&Privilege[1].Luid.LowPart + 2 * HIBYTE(Privilege->Luid.HighPart)) >> 4) | (*(&Privilege->Attributes + 2 * HIBYTE(Privilege->Luid.HighPart)) << *(_DWORD *)(a1 + 812));
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      a1 + 64,
                      *(unsigned int *)(a1 + 768),
                      v25) >= 0 )
          {
            if ( LODWORD(v25[3]) == -1 || !LODWORD(v25[3]) )
              v14 = &v25[1];
            else
              v14 = (_QWORD *)(v25[0] + 16LL * (unsigned int)(LODWORD(v25[3]) - 1));
            v15 = *(_DWORD *)v14[1];
            v16 = v15 & *(_DWORD *)(a1 + 460);
            v17 = v15 >> *(_DWORD *)(a1 + 456);
            _BitScanReverse((unsigned int *)&v18, v17);
            v19 = *(unsigned int *)(a1 + 472)
                + (unsigned int)(*(_DWORD *)(a1 + 464) * v16)
                + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v17 ^ (unsigned int)(1 << v18)));
            if ( (*(_DWORD *)(v19 + 4) & 0xFFFFF000) != 0xFFFFF000 )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v23, a1 + 88, v19);
          }
        }
      }
      Privilege = (LUID_AND_ATTRIBUTES *)((char *)Privilege + 8 * BYTE2(Privilege->Luid.HighPart) + 8);
    }
    v8 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    (__int64)v25,
    0);
  return (unsigned int)v8;
}
