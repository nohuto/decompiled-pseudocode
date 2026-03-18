/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014F96C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14014DC30 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     SmKmStoreReference @ 0x14009A60C (SmKmStoreReference.c)
 *     SmHpChunkHeapProtect @ 0x140105C8C (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140105D04 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014E5F4 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14014FB88 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014FBE8 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1401512B8 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140151A3C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140161B98 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140161C2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140162560 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140169240 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140321008 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1403211F0 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1403219B0 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140321CB4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14032222C (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140322B28 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140323718 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1403237A0 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14032382C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140323E80 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmStoreActionNotify @ 0x140326FCC (SmStoreActionNotify.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v6; // r15d
  unsigned __int64 v7; // rbp
  unsigned int v8; // r14d
  int v9; // ebx
  unsigned int Stats; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  char v25; // bl
  int v26; // eax

  v4 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = 0;
  v7 = 0LL;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v8 = -1;
  v9 = *(_DWORD *)v4 & 7;
  if ( (a2 & 1) == 0 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 5744);
  if ( !v9 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 80, v4);
LABEL_7:
    v11 = Stats;
    goto LABEL_8;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove(a1 + 80, v4);
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 992, v4);
    goto LABEL_7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v4);
    goto LABEL_7;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (*(_DWORD *)(v4 + 8) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 7u) - 4 <= 1 )
      {
        Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v4);
        v8 = 0;
        goto LABEL_7;
      }
      goto LABEL_54;
    }
    ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
    goto LABEL_37;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v22 = a1 + 80;
    v23 = *(_DWORD *)(v4 + 8) & 7;
    if ( !v23 )
    {
      ST_STORE<SM_TRAITS>::StDmEtaRefresh(v22);
      goto LABEL_37;
    }
    if ( v23 != 1 )
    {
      if ( v23 == 3 )
      {
        v24 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v22, 0LL);
        if ( v24 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 80, v24);
      }
      else
      {
        while ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v22, 1LL) == 2 )
        {
          v25 = *(_BYTE *)(a1 + 1984);
          *(_BYTE *)(a1 + 1984) = v25 | 3;
          v26 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1 + 80, 0LL);
          *(_BYTE *)(a1 + 1984) ^= (*(_BYTE *)(a1 + 1984) ^ v25) & 3;
          if ( v26 < 0 )
            break;
          v22 = a1 + 80;
        }
      }
      goto LABEL_37;
    }
    goto LABEL_40;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1 + ((*(_DWORD *)(v4 + 28) & 2) != 0 ? 2016LL : 80LL), v4);
      v11 = 259;
    }
    else
    {
      v11 = -1073741822;
    }
    goto LABEL_8;
  }
  v7 = v4;
  v8 = 259;
  if ( *(_DWORD *)(v4 + 8) == 1 )
    v7 = 0LL;
  v19 = -(__int64)SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 6016LL), a3, a4);
  v11 = v19 == 0 ? 0xC0000189 : 0;
  if ( v19 )
  {
    v20 = *(_DWORD *)(v4 + 8);
    v6 = 1;
    if ( v20 != 1 )
    {
      switch ( v20 )
      {
        case 2:
          Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
          goto LABEL_7;
        case 3:
          Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v4);
          v7 = 0LL;
          goto LABEL_7;
        case 4:
          ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
            *(_QWORD *)(a1 + 1992),
            2LL,
            (*(_WORD *)(v4 + 14) & 1) != 0 ? 200 : 2000,
            (*(_WORD *)(v4 + 14) & 1) != 0 ? 2000 : 30000);
          goto LABEL_32;
        case 5:
          _InterlockedAnd16((volatile signed __int16 *)(v4 + 12), 0xFFFEu);
LABEL_32:
          v7 = 0LL;
          goto LABEL_8;
        case 6:
          _InterlockedAnd16((volatile signed __int16 *)(v4 + 12), 0xFFFEu);
          v7 = 0LL;
          if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 6008)) >= 0x989680
            && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL) == 2 )
          {
            ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
            *(_QWORD *)(a1 + 6008) = KiQueryUnbiasedInterruptTime();
          }
          goto LABEL_8;
      }
LABEL_54:
      v11 = -1073741811;
      goto LABEL_8;
    }
    v21 = *(_DWORD *)(v4 + 16);
    if ( v21 < 0 )
      goto LABEL_8;
    if ( v21 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(a1 + (v21 != 0 ? 2016LL : 80LL));
      goto LABEL_7;
    }
    switch ( v21 )
    {
      case 4:
        SmHpChunkHeapProtect(a1 + 272, 0, 0);
        goto LABEL_37;
      case 3:
        v22 = a1 + 80;
LABEL_40:
        ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(v22);
        goto LABEL_37;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL, a1 + 944);
        goto LABEL_7;
    }
    if ( v21 != 5 )
    {
      if ( v21 != 6 )
        goto LABEL_8;
      goto LABEL_54;
    }
    ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(a1 + 80);
LABEL_37:
    v11 = 0;
  }
LABEL_8:
  if ( v11 == -1073741818 )
  {
    if ( *(_DWORD *)(a1 + 5736) != 2 )
      SmStoreActionNotify(*(_QWORD *)(a1 + 880), 0LL, 0LL);
    ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
  }
  if ( v7 )
    ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v7);
  if ( v6 )
    SmStoreActionNotify(*(_QWORD *)(a1 + 24), 2LL, 0LL);
  if ( v8 == -1 )
    return v11;
  return v8;
}
