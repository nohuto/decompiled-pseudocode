/*
 * XREFs of ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140305E58
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148D30 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x140145158 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140306584 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpCurrentRegionWrite(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // edi
  _DWORD *v4; // rdx

  v1 = (_DWORD *)(a1 + 1248);
  v3 = ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(a1, (unsigned int *)(a1 + 1248));
  if ( v3 == -1073741697 )
  {
    v4 = (_DWORD *)(a1 + 1104);
    v3 = 0;
    while ( *v4 != *v1 )
      v4 += 6;
    ST_STORE<SM_TRAITS>::StStagingRegionIssueIo(a1);
  }
  return v3;
}
