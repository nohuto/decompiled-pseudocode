/*
 * XREFs of ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011B748
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011B570 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140165264 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400D876C (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400D87B0 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall ST_STORE<SM_TRAITS>::StAcquireReadContext(__int64 a1)
{
  PSLIST_ENTRY v2; // rdi
  SIZE_T v4; // rdx
  _SLIST_ENTRY *PoolWithTag; // rax
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rbx
  _DWORD *v8; // r14

  v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 4048));
  if ( !v2 )
  {
    v4 = (unsigned int)(*(_DWORD *)(a1 + 4024) + 4544);
    if ( (*(_DWORD *)(a1 + 856) & 0x40000) == 0 )
      v4 = (unsigned int)(*(_DWORD *)(a1 + 4024) + 448);
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x74536D73u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v6 = ((unsigned __int64)&v2[5].Next + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(a1 + 4024) )
      {
        v2[1].Next = (_SLIST_ENTRY *)v6;
        v6 += *(unsigned int *)(a1 + 4024);
      }
      v7 = (_DWORD *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      *((_QWORD *)&v2[1].Next + 1) = v7;
      v8 = (_DWORD *)(((unsigned __int64)v7 + 175) & 0xFFFFFFFFFFFFFFF8uLL);
      v2[2].Next = (_SLIST_ENTRY *)v8;
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
        v7,
        0);
      v7[6] = 0;
      *(_QWORD *)v7 = v7 + 10;
      v7[7] = 8;
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
        v8,
        0);
      v8[6] = 0;
      *(_QWORD *)v8 = v8 + 10;
      v8[7] = 8;
      if ( (*(_DWORD *)(a1 + 856) & 0x40000) != 0 )
        v2[3].Next = (_SLIST_ENTRY *)(v8 + 42);
    }
    else
    {
      return 0LL;
    }
  }
  return v2;
}
