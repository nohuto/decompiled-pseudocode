/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140155FE0
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140149F5C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1401503A0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmHpBufferProtectEx @ 0x140151A20 (SmHpBufferProtectEx.c)
 *     RtlHashBytes2 @ 0x1401C0650 (RtlHashBytes2.c)
 *     MiAddMdlTracker @ 0x1402BF5AC (MiAddMdlTracker.c)
 *     MiValidateMdlTracker @ 0x1402C000C (MiValidateMdlTracker.c)
 *     SmFixSingleBitCorruption @ 0x140323A50 (SmFixSingleBitCorruption.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(const unsigned __int8 *a1, unsigned __int64 a2, unsigned __int8 *const a3)
{
  const unsigned __int8 *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax

  v3 = &a1[a2];
  v5 = 0x52BC33FEDBE4CBB5LL;
  if ( a2 >= 0x20 )
  {
    v6 = 0x52BC33FEDBE4CBB5LL;
    v7 = 0x52BC33FEDBE4CBB5LL;
    v8 = 0x52BC33FEDBE4CBB5LL;
    v9 = 0x52BC33FEDBE4CBB5LL;
    do
    {
      v6 = v8 + __ROR8__(3603962101LL * *(_QWORD *)a1 + v6, 29);
      v7 = v9 + __ROR8__(2729050939LL * *((_QWORD *)a1 + 1) + v7, 29);
      v10 = 817650473LL * *((_QWORD *)a1 + 3);
      v11 = __ROR8__(1654206401LL * *((_QWORD *)a1 + 2) + v8, 29);
      a1 += 32;
      v8 = v6 + v11;
      v9 = v7 + __ROR8__(v10 + v9, 29);
    }
    while ( a1 <= v3 - 32 );
    v12 = v8 ^ (2729050939LL * __ROR8__(v7 + 3603962101LL * (v6 + v9), 37));
    v13 = v9 ^ (3603962101LL * __ROR8__(v6 + 2729050939LL * (v12 + v7), 37));
    v5 = (v7 ^ v6 ^ (3603962101LL * __ROR8__(v12 + 2729050939LL * (v7 + v13), 37)) ^ (2729050939LL
                                                                                    * __ROR8__(
                                                                                        v13 + 3603962101LL * (v12 + v6),
                                                                                        37)))
       + 0x52BC33FEDBE4CBB5LL;
  }
  if ( v3 - a1 >= 16 )
  {
    v17 = 1654206401LL * *(_QWORD *)a1;
    v18 = *((_QWORD *)a1 + 1);
    a1 += 16;
    v19 = 817650473LL * __ROR8__(v5 + v17, 29);
    v20 = 817650473LL * __ROR8__(v5 + 1654206401 * v18, 29);
    v5 += v20 ^ (__ROR8__(817650473 * v20, 21) + (v19 ^ (v20 + __ROR8__(3603962101LL * v19, 21))));
  }
  if ( v3 - a1 >= 8 )
  {
    v15 = 817650473LL * *(_QWORD *)a1;
    a1 += 8;
    v5 = (2729050939LL * __ROR8__(v15 + v5, 55)) ^ (v15 + v5);
  }
  if ( v3 - a1 >= 4 )
  {
    v21 = *(unsigned int *)a1;
    a1 += 4;
    v5 = (2729050939LL * __ROR8__(817650473 * v21 + v5, 26)) ^ (817650473 * v21 + v5);
  }
  if ( v3 - a1 >= 2 )
  {
    v16 = *(unsigned __int16 *)a1;
    a1 += 2;
    v5 = (2729050939LL * __ROR8__(817650473 * v16 + v5, 48)) ^ (817650473 * v16 + v5);
  }
  if ( v3 - a1 >= 1 )
    v5 = (2729050939LL * __ROR8__(817650473LL * *a1 + v5, 37)) ^ (817650473LL * *a1 + v5);
  v14 = v5 ^ __ROR8__(v5, 28);
  *(_QWORD *)a3 = (3603962101LL * v14) ^ __ROR8__(3603962101LL * v14, 29);
}
