/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403053B4
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DAF4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140303A60 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140145660 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140145690 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140146008 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401466F4 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x140305370 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, __int64 a3)
{
  int v5; // r13d
  int v6; // r12d
  int v7; // ebx
  char v8; // di
  __int64 v9; // rax
  unsigned int v10; // esi
  int NextForwardRunClearCapped; // eax
  bool v12; // cf
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rdi
  void *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int16 v24; // ax
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h]
  int v28; // [rsp+90h] [rbp+18h]
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v8 = a2 & 1;
  v26 = 0;
  v27 = a2 & 1;
  v9 = a1 + 840;
  v10 = 0;
LABEL_4:
  while ( 1 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v9, v10, 0xFFFFFFFF, &v26);
    if ( !NextForwardRunClearCapped )
      break;
    v10 = v26;
    v29 = v26 + NextForwardRunClearCapped;
    v12 = v26 < v26 + NextForwardRunClearCapped;
    v9 = a1 + 840;
    if ( v12 )
    {
      while ( 1 )
      {
        v28 = ++v7;
        if ( (v7 & 0xF) == 0 && a3 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL) >> 8)
             + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6576LL)
             + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL) )
          {
            v5 = 1;
            v6 = 1;
            goto LABEL_33;
          }
          v10 = v26;
        }
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v10) != 8 )
        {
LABEL_29:
          _bittestandset(*(signed __int32 **)(a1 + 848), v10);
          goto LABEL_30;
        }
        v14 = *(_QWORD *)(a1 + 800);
        v15 = v10;
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2LL * v10) & 0x1FFF) != 0 )
          break;
        if ( (*(_BYTE *)(v14 + 6021) & 4) != 0 )
        {
          v16 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), v13, v8 | 2u);
        }
        else
        {
          v17 = *(_QWORD *)(v14 + 6216);
          v18 = (void *)(*(_QWORD *)(v17 + 8LL * v10) & 0xFFFFFFFFFFFFFFF8uLL);
          MiFreePagesFromMdl((ULONG_PTR)v18, 0);
          ExFreePoolWithTag(v18, 0);
          *(_QWORD *)(v17 + 8LL * v10) = 0LL;
          v7 = v28;
          v8 = v27;
          v16 = 0;
        }
        if ( v16 >= 0 )
          goto LABEL_29;
        v6 = 1;
LABEL_30:
        v26 = ++v10;
        if ( v10 >= v29 )
        {
          v9 = a1 + 840;
          goto LABEL_4;
        }
      }
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v13) )
        goto LABEL_29;
      if ( (*(_BYTE *)(v20 + 6021) & 4) != 0 )
      {
        v21 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v19, v10, 0, v20, 8u);
LABEL_27:
        if ( v21 != 3 )
          goto LABEL_29;
        v6 = 1;
        goto LABEL_30;
      }
      v22 = *(_QWORD *)(v20 + 6216);
      v23 = *(_QWORD *)(v22 + 8LL * v10) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (*(_QWORD *)(v22 + 8LL * v10) & 3) == 0 )
      {
        v21 = SmFpAllocate((PEX_SPIN_LOCK)(v20 + 6592), 5, (__int64)KeGetCurrentThread(), v23, 0);
        v10 = v26;
        if ( v21 )
LABEL_25:
          *(_QWORD *)(v22 + 8 * v15) |= 1uLL;
        v7 = v28;
        goto LABEL_27;
      }
      v21 = *(_QWORD *)(v23 + 24);
      goto LABEL_25;
    }
  }
LABEL_33:
  if ( a3 )
  {
    v24 = *(_WORD *)(a3 + 12) & 1;
    if ( v24 || v6 )
    {
      if ( v5 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v24 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
