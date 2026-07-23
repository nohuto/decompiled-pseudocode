/*
 * XREFs of ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14014938C
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DAF4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140146BC0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140147CE4 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014912C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14014ABE0 (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 */

char __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // rbx
  unsigned __int16 v8; // r8
  __int64 v9; // rax
  _DWORD *v10; // r10

  v4 = *(_QWORD *)(a1 + 1032);
  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = *(_WORD *)(v4 + 2LL * (unsigned int)a2);
  if ( *(_BYTE *)(a1 + 776) )
    v9 = 0LL;
  else
    v9 = v8 >> 13;
  *(_WORD *)(v4 + 2LL * (unsigned int)a2) = v5 + v8;
  v10 = (_DWORD *)(a1 + 16 * (v9 + 78));
  *(_DWORD *)(a1 + 8 * v9 + 1828) += v5;
  if ( *v10 != (_DWORD)a2 )
    LOBYTE(v9) = ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
                   a1,
                   a2,
                   v8 & 0x1FFF,
                   *(_WORD *)(v4 + 2LL * (unsigned int)a2) & 0x1FFF);
  if ( v5 <= 0 )
  {
    if ( (*(_WORD *)(v4 + 2 * v6) & 0x1FFF) == 0 && (_DWORD)a2 != *v10 && !a4 )
      LOBYTE(v9) = ST_STORE<SM_TRAITS>::StReleaseRegion(a1, a2);
  }
  else if ( (_DWORD)a2 == *v10 )
  {
    v10[1] += v5;
  }
  return v9;
}
