/*
 * XREFs of ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140303878
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140305B50 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StAddRemoveRegions(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  char v3; // al
  unsigned int *v6; // r13
  int v7; // edx
  unsigned int v8; // r9d
  int v9; // r11d
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned int v12; // edx
  _QWORD *v13; // rdx
  __int64 i; // r8
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // r10d
  unsigned int v19; // edi
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_DWORD *)(a2 + 8) & 7;
  v21 = 0;
  if ( v3 == 4 )
  {
    v6 = *(unsigned int **)(a2 + 16);
    while ( v2 )
    {
      v7 = *v6 - 1;
      v8 = v21 < *v6 ? v21 : 0;
      v9 = (v6[2] & 4) != 0LL ? 0x20 : 0;
      v10 = *((_QWORD *)v6 + 1) - ((*((_QWORD *)v6 + 1) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v11 = v9 + v7;
        if ( v7 - v8 == -1 )
          goto LABEL_6;
        v13 = (_QWORD *)(v10 + 8 * ((unsigned __int64)(v9 + v8) >> 6));
        for ( i = ~*v13 | ((1LL << ((v9 + v8) & 0x3F)) - 1); i == -1; i = ~*v13 )
        {
          if ( (unsigned __int64)++v13 > v10 + 8 * ((unsigned __int64)v11 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v15, ~i);
        v12 = v15 + ((unsigned int)(((__int64)v13 - v10) >> 3) << 6);
        if ( v12 > v11 )
        {
LABEL_6:
          v12 = -1;
        }
        else if ( v12 != -1 )
        {
          break;
        }
        if ( !v8 )
          break;
        v16 = v21 + 1;
        v8 = 0;
        if ( v21 + 1 > *v6 )
          v16 = *v6;
        v7 = v16 - 1;
      }
      v17 = v12 - v9;
      if ( v12 == -1 )
        v17 = -1;
      --v2;
      *(_BYTE *)(((unsigned __int64)v17 >> 3) + *(_QWORD *)(a1 + 928)) |= 1 << (v17 & 7);
      ++*(_DWORD *)(a1 + 936);
      v21 = v17 + 1;
    }
    return 0;
  }
  else
  {
    v18 = -1;
    v19 = 0;
    if ( v2 )
    {
      while ( 1 )
      {
        v18 = ST_STORE<SM_TRAITS>::StDmRegionRemove(a1 + 80, &v21);
        if ( v18 < 0 )
          break;
        ++v19;
        *(_BYTE *)(((unsigned __int64)v21 >> 3) + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) |= 1 << (v21 & 7);
        if ( v19 >= v2 )
          goto LABEL_28;
      }
      if ( v18 != -1073741818 )
        v18 = 0;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v19;
  }
  return (unsigned int)v18;
}
