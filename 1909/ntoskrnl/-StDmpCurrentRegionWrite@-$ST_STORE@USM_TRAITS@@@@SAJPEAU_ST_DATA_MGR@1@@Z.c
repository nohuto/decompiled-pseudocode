/*
 * XREFs of ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140323108
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1401503A0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x140152E14 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x1403237B4 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpCurrentRegionWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  unsigned int v6; // edi
  _DWORD *v7; // rdx

  v4 = (_DWORD *)(a1 + 1248);
  v6 = ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(a1, (unsigned int *)(a1 + 1248), a3, a4);
  if ( v6 == -1073741697 )
  {
    v7 = (_DWORD *)(a1 + 1104);
    v6 = 0;
    while ( *v7 != *v4 )
      v7 += 6;
    ST_STORE<SM_TRAITS>::StStagingRegionIssueIo(a1);
  }
  return v6;
}
