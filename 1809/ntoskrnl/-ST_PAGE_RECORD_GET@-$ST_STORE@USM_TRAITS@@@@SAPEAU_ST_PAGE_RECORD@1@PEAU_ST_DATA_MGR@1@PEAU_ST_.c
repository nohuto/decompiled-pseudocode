/*
 * XREFs of ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14014B010
 * Callers:
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14014AF14 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140304C0C (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140305064 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v4; // r11d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 i; // rdx
  _DWORD *v11; // rdx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = *(_DWORD *)(a2 + 4);
  v4 = a1[114];
  v5 = v2 >> v4;
  v6 = a1[115];
  v7 = a1[116];
  v8 = (unsigned int)a1[118];
  _BitScanReverse((unsigned int *)&v9, v5);
  for ( i = v7 * (v2 & v6) + *(_QWORD *)(*(_QWORD *)&a1[2 * v9 + 48] + 16 * (v5 ^ (unsigned int)(1 << v9)));
        ;
        i = v7 * (v13 & v6) + *(_QWORD *)(*(_QWORD *)&a1[2 * v15 + 48] + 16 * (v14 ^ (unsigned int)(1 << v15))) )
  {
    v11 = (_DWORD *)(v8 + i);
    if ( *v11 != -1 )
      break;
    v13 = v11[1];
    v14 = v13 >> v4;
    _BitScanReverse((unsigned int *)&v15, v14);
  }
  return v11;
}
