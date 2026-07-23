/*
 * XREFs of SmHpChunkFree @ 0x140147C70
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DAF4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147E6C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148D30 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14014AE50 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x14014A5FC (SmHpBufferUpdateFullness.c)
 *     SmHpBufferCleanup @ 0x1403068C4 (SmHpBufferCleanup.c)
 */

__int64 __fastcall SmHpChunkFree(_DWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  _WORD *v5; // rdi
  __int64 result; // rax
  int v7; // ecx

  v3 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v4, v3);
  v5 = (_WORD *)(*(_QWORD *)&a1[2 * v4] + 16 * (v3 ^ (unsigned int)(1 << v4)));
  *(_WORD *)a2 = v5[4];
  v5[4] = a2 - *v5;
  result = SmHpBufferUpdateFullness(a1, v5);
  v7 = (unsigned __int16)v5[5];
  if ( v7 == a1[137] )
  {
    result = (unsigned int)(a1[140] - v7);
    if ( (unsigned int)result >= a1[139] )
      result = SmHpBufferCleanup(a1);
  }
  --a1[141];
  return result;
}
