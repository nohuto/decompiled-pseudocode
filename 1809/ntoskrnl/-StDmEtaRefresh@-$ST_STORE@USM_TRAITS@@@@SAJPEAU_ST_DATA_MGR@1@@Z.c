/*
 * XREFs of ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140304AA4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1403049A0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x140305758 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtaRefresh(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // r14d
  __int64 v4; // r8
  int v5; // r10d
  __int64 v6; // r9
  unsigned __int64 *i; // rdx
  unsigned __int64 j; // rax
  int v9; // ecx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int *k; // rcx
  unsigned int m; // ebx
  int v16; // eax

  v1 = 0xFFFF;
  if ( *(_DWORD *)(a1 + 784) <= 0xFFFFu )
    v1 = *(_DWORD *)(a1 + 784);
  v3 = 0;
  while ( 2 )
  {
    v4 = *(_QWORD *)(a1 + 1000);
    v5 = 0;
    v6 = 0LL;
    for ( i = (unsigned __int64 *)(v4 + 16); !*i; ++i )
    {
LABEL_11:
      ++v5;
      if ( ++v6 >= 2 )
        return 0;
    }
    for ( j = *i; *(_WORD *)(j + 4) <= 0x80u || !*(_QWORD *)(j + 8); j += 32LL )
    {
      if ( *(_DWORD *)j == -1 )
        goto LABEL_11;
    }
    if ( j <= *i )
      v11 = 0LL;
    else
      v11 = (unsigned int)(*(_DWORD *)(j - 32) + 1);
    v12 = *(_DWORD *)j;
    if ( (_DWORD)v11 )
      v12 = v11 + ((v12 - (unsigned int)v11) >> 1);
    v13 = v1;
    if ( v12 < v1 )
      v13 = v12;
    if ( *(int *)(v4 + 8) <= 0 )
    {
      _m_prefetchw((const void *)(v4 + 48));
      if ( (_InterlockedOr((volatile signed __int32 *)(v4 + 48), 1u) & 1) == 0 )
      {
        for ( k = *(unsigned int **)(v4 + 8LL * v5 + 16); *k < v13; k += 8 )
          ;
        k[1] = 112;
        for ( m = 0; m < 0x20; ++m )
        {
          v16 = ST_STORE<SM_TRAITS>::StDmPickRandomRegion(a1, v11, v4, v6);
          if ( v16 == -1 )
          {
            v9 = -1073741448;
LABEL_33:
            _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1000) + 48LL), 0xFFFFFFFE);
            return (unsigned int)v9;
          }
          v9 = ST_STORE<SM_TRAITS>::StDmEtaPerformIo(a1, v16, v13);
          if ( v9 < 0 )
            goto LABEL_33;
        }
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1000) + 48LL), 0xFFFFFFFE);
        if ( (unsigned int)++v3 < 0xA )
          continue;
        return 0;
      }
    }
    break;
  }
  return (unsigned int)-1073741637;
}
