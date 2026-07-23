/*
 * XREFs of ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401481A4
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14014A770 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DEDC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14014674C (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140147208 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140148400 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140148484 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014A260 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineRegion(__int64 a1, int a2)
{
  unsigned __int16 *v2; // rbx
  int v5; // r15d
  int v6; // eax
  _DWORD *PreviousEntry; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r15
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+28h] [rbp-8h]
  unsigned __int16 *PoolWithTag; // [rsp+60h] [rbp+30h] BYREF

  v2 = *(unsigned __int16 **)(a1 + 1056);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1056) = 0LL;
    PoolWithTag = v2;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x74536D73u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  *(_QWORD *)v2 = 0LL;
  *(_DWORD *)v2 = a2;
  *((_DWORD *)v2 + 1) = 528384;
  v5 = *(_DWORD *)(a1 + 808) | (a2 << *(_DWORD *)(a1 + 812));
  v13 = 0LL;
  v14 = 0;
  v6 = *(_DWORD *)(a1 + 120);
  if ( (v6 & 1) == 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
    v6 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v6 | 1;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  **(_DWORD **)(a1 + 760) = v5;
  if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
              a1 + 88,
              a1 + 64,
              *(_DWORD *)(a1 + 768)) < 0 )
    __int2c();
  while ( 1 )
  {
    PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                a1 + 64,
                                a1 + 88);
    if ( !PreviousEntry )
      break;
    v8 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v9, v8);
    v10 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + (unsigned int)(*(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460)))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v9 + 192) + 16 * (v8 ^ (unsigned int)(1 << v9))));
    if ( *v10 >> *(_DWORD *)(a1 + 812) != a2 )
      break;
    if ( (v10[1] & 0xFFFFF000) <= 0x1000
      && (unsigned int)((__int64 (__fastcall *)(__int64, unsigned __int16 *, __int64 *, _DWORD *))ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry)(
                         a1,
                         v2,
                         &v13,
                         v10) == -2147483643 )
    {
      result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &PoolWithTag);
      if ( (int)result < 0 )
        goto LABEL_26;
      v12 = *(_DWORD *)(a1 + 120);
      if ( (v12 & 1) == 0 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (__int64 *)(a1 + 64),
          a1 + 88);
        v12 = *(_DWORD *)(a1 + 120);
      }
      *(_DWORD *)(a1 + 120) = v12 | 1;
      **(_DWORD **)(a1 + 760) = *v10;
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                  a1 + 88,
                  a1 + 64,
                  *(_DWORD *)(a1 + 768)) < 0 )
        __int2c();
      v2 = PoolWithTag;
      v13 = 0LL;
      v14 = 0;
      *(_QWORD *)PoolWithTag = 0LL;
      *(_DWORD *)v2 = a2;
      *((_DWORD *)v2 + 1) = 528384;
    }
  }
  if ( v2 + 4 >= (unsigned __int16 *)((char *)v2 + v2[3]) )
  {
LABEL_18:
    result = 0LL;
    goto LABEL_19;
  }
  result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &PoolWithTag);
  if ( (int)result >= 0 )
  {
    v2 = PoolWithTag;
    goto LABEL_18;
  }
LABEL_26:
  v2 = PoolWithTag;
LABEL_19:
  if ( v2 )
    *(_QWORD *)(a1 + 1056) = v2;
  return result;
}
