/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140303A60
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140145660 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140145E0C (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14014687C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140146ABC (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140146BC0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     MmStoreDecommitVirtualMemory @ 0x1401580BC (MmStoreDecommitVirtualMemory.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403053B4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // edi
  int v2; // ebp
  int v3; // r14d
  unsigned int v5; // esi
  int v6; // r13d
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // rdx
  _WORD *v9; // r15
  _WORD *v10; // r12
  _WORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  __int64 v18; // rax
  int v19; // r8d
  unsigned int v21; // [rsp+80h] [rbp+8h]
  int v22; // [rsp+88h] [rbp+10h]
  _WORD *v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 784);
  v2 = 0;
  v22 = v1;
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v5 = (unsigned int)(v1 - 4096) >> 4;
  v6 = 0;
  v21 = v5;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v8 = *(_QWORD *)(a1 + 1032);
  v24 = UnbiasedInterruptTime;
  v9 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 1096));
  v23 = v9;
  v10 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 856));
  while ( 2 )
  {
    v11 = v9;
    if ( v9 >= v10 )
      goto LABEL_28;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6576LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL)
        && (v6 & 7) == 0
        && v6 )
      {
        v12 = KiQueryUnbiasedInterruptTime() - v24;
        if ( !(v13 >= 0x40 ? v12 < 0x1C9C380 : v12 < 0x2FAF080) )
          break;
      }
      if ( (*v11 & 0x1FFF) == 0 || (*v11 & 0x1FFFu) > v5 )
        goto LABEL_26;
      v15 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v15) )
      {
        v17 = v16 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v17 = 0;
        if ( (_DWORD)v15 == *(_DWORD *)(a1 + 16 * (v17 + 78LL)) )
          goto LABEL_25;
        ++v6;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v15, 0LL, v15, 0) >= 0 )
          goto LABEL_24;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2) != 2 )
          break;
        v18 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v15, 0, 1);
        if ( v18 )
        {
          if ( v18 != -1 )
          {
            if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v18, v15, v18, v15, 0) < 0 )
              NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v15, v19);
LABEL_24:
            MmStoreDecommitVirtualMemory(
              ((16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000)
            + (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6216LL) + 8LL * (unsigned int)v15) & 0x7FFFFFFFFFFF0000LL),
              v22 - ((16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000));
            goto LABEL_25;
          }
        }
      }
      v3 = 1;
LABEL_25:
      v5 = v21;
LABEL_26:
      ++v11;
    }
    while ( v11 < v10 );
    v9 = v23;
    v5 = v21;
LABEL_28:
    if ( v11 == v10 )
    {
      if ( v9 != *(_WORD **)(a1 + 1032) )
      {
        v10 = v9;
        v23 = *(_WORD **)(a1 + 1032);
        v9 = v23;
        continue;
      }
    }
    else
    {
      v2 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
    }
    break;
  }
  *(_DWORD *)(a1 + 1096) = v2;
  return v3 != 0 ? 0xC000022D : 0;
}
