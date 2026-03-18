/*
 * XREFs of SmHpChunkAlloc @ 0x140151C1C
 * Callers:
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14014E254 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1401503A0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     SmHpBufferAlloc @ 0x14014E474 (SmHpBufferAlloc.c)
 *     SmHpBufferUpdateFullness @ 0x140151CAC (SmHpBufferUpdateFullness.c)
 */

_WORD *__fastcall SmHpChunkAlloc(_DWORD *a1)
{
  _DWORD *v1; // rbx
  bool v2; // zf
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  _WORD *v7; // rdi

  v1 = a1;
  v2 = !_BitScanForward((unsigned int *)&a1, a1[71]);
  if ( v2 )
  {
    v7 = 0LL;
    while ( SmHpBufferAlloc(v1) )
    {
      v2 = !_BitScanForward((unsigned int *)&a1, v1[71]);
      if ( !v2 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v3 = *(_QWORD *)&v1[4 * (unsigned int)a1 + 72];
    v4 = *(unsigned int *)(v3 + 16);
    _BitScanReverse((unsigned int *)&v5, v4);
    v6 = *(_QWORD *)&v1[2 * v5] + 16 * (v4 ^ (unsigned int)(1 << v5));
    v7 = (_WORD *)(v3 + *(unsigned __int16 *)(v6 + 8));
    *(_WORD *)(v6 + 8) = *v7;
    SmHpBufferUpdateFullness(v1, v6, 0xFFFFFFFFLL);
    ++v1[141];
  }
  return v7;
}
