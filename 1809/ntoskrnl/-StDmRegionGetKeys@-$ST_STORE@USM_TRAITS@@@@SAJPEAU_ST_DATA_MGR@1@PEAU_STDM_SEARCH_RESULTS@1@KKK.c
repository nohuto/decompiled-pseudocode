/*
 * XREFs of ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x140305974
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1403057D4 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DEDC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140148400 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140149C18 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionGetKeys(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  char **v10; // r15
  _DWORD *v11; // r12
  int v12; // ebp
  int v13; // eax
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *PreviousEntry; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  int v23; // r8d

  v8 = a6;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = (char **)(a1 + 64);
  v11 = &a6[*a7];
  v12 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  v13 = *(_DWORD *)(v9 + 32);
  if ( (v13 & 1) == 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      *(_QWORD *)(a2 + 8));
    v13 = *(_DWORD *)(v9 + 32);
  }
  *(_DWORD *)(v9 + 32) = v13 | 1;
  **(_DWORD **)(a1 + 760) = v12;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
             v10,
             *(_DWORD *)(a1 + 768),
             v9);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v15 = *(_DWORD *)(v9 + 24);
      if ( v15 == -1 || !v15 )
        v16 = v9 + 8;
      else
        v16 = *(_QWORD *)v9 + 16LL * (unsigned int)(v15 - 1);
      v8 = a6 + 1;
      v17 = (unsigned int)(**(_DWORD **)(v16 + 8) >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v18, v17);
      *a6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v17 ^ (unsigned int)(1 << v18)))
                      + (unsigned int)(*(_DWORD *)(a1 + 464) * (**(_DWORD **)(v16 + 8) & *(_DWORD *)(a1 + 460)))
                      + *(unsigned int *)(a1 + 472)
                      + 8LL);
    }
    if ( v8 >= v11 )
    {
LABEL_16:
      *a7 = v8 - a6;
      return 0LL;
    }
    else
    {
      while ( 1 )
      {
        PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                    (__int64)v10,
                                    v9);
        if ( PreviousEntry == (_DWORD *)-1LL )
          return 3221225478LL;
        if ( PreviousEntry )
        {
          v20 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v21, v20);
          v22 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460)))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v21 + 192) + 16 * (v20 ^ (unsigned int)(1 << v21))));
          v23 = *v22 & *(_DWORD *)(a1 + 808);
          if ( *v22 >> *(_DWORD *)(a1 + 812) == a3 )
          {
            *v8++ = v22[2];
            if ( v23 )
            {
              if ( v8 < v11 )
                continue;
            }
          }
        }
        goto LABEL_16;
      }
    }
  }
  return result;
}
