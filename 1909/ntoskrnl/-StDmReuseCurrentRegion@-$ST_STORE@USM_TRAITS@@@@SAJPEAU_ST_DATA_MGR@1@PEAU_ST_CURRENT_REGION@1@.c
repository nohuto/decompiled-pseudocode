/*
 * XREFs of ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x140152E14
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140151E20 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140323108 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14014EFEC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14015AB48 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v6; // r10
  unsigned int v7; // ebx
  int v8; // ecx
  __int64 result; // rax

  v4 = *a2;
  v6 = a1;
  v7 = *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v4) & 0x1FFF;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v4, a3, a4) )
  {
    return 3221225599LL;
  }
  v8 = *(_DWORD *)(v6 + 816);
  if ( v7 >= (unsigned int)(3 * v8) >> 2 || v7 >= v8 - *(_DWORD *)(v6 + 820) + 1 )
    return 3221225599LL;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(v6, *((_QWORD *)a2 + 1), v4, *((_QWORD *)a2 + 1), v4, 0);
  if ( (int)result >= 0 )
    a2[1] = v7;
  return result;
}
