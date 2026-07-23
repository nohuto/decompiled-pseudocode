/*
 * XREFs of ?SmStEtwFillStoreStatsEvent@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140308D58
 * Callers:
 *     SmKmEtwLogStoreStats @ 0x1408ADAA8 (SmKmEtwLogStoreStats.c)
 * Callees:
 *     ?StCopyIoStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_IO_STATS@@PEAU_ST_IO_COUNTS@@@Z @ 0x140303CF0 (-StCopyIoStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_IO_STATS@@PEAU_ST_IO_COUNTS@@@Z.c)
 *     StLcBucketsCopy @ 0x140306CCC (StLcBucketsCopy.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreStatsEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  _DWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // rbx
  unsigned int **v11; // rax
  __int64 v12; // rdx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 1896) )
  {
    v5 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    *v5 = a1;
    v6 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
    *v6 = v5;
    v6[1] = 8LL;
    ++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 8;
    v7 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    *v7 = 1348;
    v8 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
    *v8 = v7;
    v8[1] = 4LL;
    v9 = (unsigned int)++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 4;
    v10 = (unsigned int *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    v11 = (unsigned int **)(*(_QWORD *)a2 + 16 * v9);
    *v11 = v10;
    v11[1] = (unsigned int *)1348;
    ++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 1348;
    ST_STORE<SM_TRAITS>::StCopyIoStats(v10, a1 + 4280);
    StLcBucketsCopy(v10 + 321, v12, *(_QWORD **)(a1 + 5600), *(_DWORD *)(a1 + 5592));
    return 1;
  }
  return v2;
}
