/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140145E0C
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14011E134 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401451F8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140303A60 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140145660 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140145F84 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140146008 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401477C8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140302894 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403028FC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140305D80 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int VirtualRegion; // eax
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-28h]
  int v26; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v9 + 6021) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v9, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v9, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1824);
    if ( !*(_BYTE *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v11 = 0;
  else
    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v12 = *(_QWORD *)(a1 + 800);
  v25 = a4 | (v11 << 6) | 0x10;
  if ( (*(_BYTE *)(v12 + 6021) & 4) != 0 )
    v13 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v12, v5, 0, v12, v25);
  else
    v13 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v12, v5, 0, v12, v25);
  v15 = v13;
  v16 = v13;
  if ( v13 )
  {
    if ( ((v13 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v5) )
      {
        v17 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v17 + 6021) & 4) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v17, v5, 0, v16, 2);
        else
          SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v17, v5, 0, v16, 2);
        return v15;
      }
      v15 = -1LL;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL);
      v16 = 0LL;
      v15 = (v15 != 1) - 1LL;
    }
  }
  if ( v16 )
  {
    if ( *(_BYTE *)(a1 + 776) )
      v19 = 0;
    else
      v19 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
    v20 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v20 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(*(_QWORD *)(a1 + 800), v5, v14, v20, v26, (8 * v19) | 4);
    }
    else
    {
      v21 = *(_QWORD *)(v20 + 6216);
      v22 = *(_QWORD *)(v21 + 8 * v5);
      v23 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
      v24 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v21 + 8 * v5) = v23;
      if ( (v23 & 3) == 0 )
        SmFpFree(v20 + 6592, 5LL, KeGetCurrentThread(), v24);
    }
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v5);
  return v15;
}
