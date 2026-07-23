/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x140138428
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014C08C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x14066C7B8 (SmpKeyedStoreCreate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401279C4 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v9; // r11
  _BYTE WorkItem[72]; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+A8h] [rbp+28h] BYREF
  int v12; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *(_DWORD *)(a2 + 6016) & 0x3FF;
  v4 = SmKmStoreRefFromStoreIndex(a1, v2);
  v6 = 0;
  if ( v7 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v4 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v4 + 34) & 1) == 0 )
  {
    return v6;
  }
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v5 + 80, &v11, &v12);
  if ( (unsigned int)(v12 + 1023) < 0x400 )
  {
    _m_prefetchw((const void *)(v9 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v9 + 34), 2u) & 2) == 0 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      *(_WORD *)&WorkItem[32] = 0;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[16] = SmKmStoreDeleteWhenEmptyWorker;
      *(_QWORD *)&WorkItem[24] = WorkItem;
      *(_QWORD *)&WorkItem[56] = a1;
      *(_DWORD *)&WorkItem[64] = v2;
      *(_QWORD *)WorkItem = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&WorkItem[32], WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v6;
}
