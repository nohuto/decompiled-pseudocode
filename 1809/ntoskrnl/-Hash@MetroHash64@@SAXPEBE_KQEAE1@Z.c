/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153680
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148D30 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmHpBufferProtectEx @ 0x14014A370 (SmHpBufferProtectEx.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C604 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     MiAddMdlTracker @ 0x1402A81CC (MiAddMdlTracker.c)
 *     MiValidateMdlTracker @ 0x1402A8C08 (MiValidateMdlTracker.c)
 *     RtlHashBytes2 @ 0x1402FE4D8 (RtlHashBytes2.c)
 *     SmFixSingleBitCorruption @ 0x1403067FC (SmFixSingleBitCorruption.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(const unsigned __int8 *a1, unsigned __int64 a2, unsigned __int8 *const a3)
{
  const unsigned __int8 *v3; // r11
  const unsigned __int8 *v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax

  v3 = &a1[a2];
  v5 = a1;
  v6 = 0x52BC33FEDBE4CBB5LL;
  if ( a2 >= 0x20 )
  {
    v7 = 0x52BC33FEDBE4CBB5LL;
    v8 = 0x52BC33FEDBE4CBB5LL;
    v9 = 0x52BC33FEDBE4CBB5LL;
    v10 = 0x52BC33FEDBE4CBB5LL;
    do
    {
      v7 = v9 + __ROR8__(3603962101LL * *(_QWORD *)v5 + v7, 29);
      v8 = v10 + __ROR8__(2729050939LL * *((_QWORD *)v5 + 1) + v8, 29);
      v11 = 817650473LL * *((_QWORD *)v5 + 3);
      v12 = __ROR8__(1654206401LL * *((_QWORD *)v5 + 2) + v9, 29);
      v5 += 32;
      v9 = v7 + v12;
      v10 = v8 + __ROR8__(v11 + v10, 29);
    }
    while ( v5 <= v3 - 32 );
    v13 = v9 ^ (2729050939LL * __ROR8__(v8 + 3603962101LL * (v10 + v7), 37));
    v14 = v10 ^ (3603962101LL * __ROR8__(v7 + 2729050939LL * (v13 + v8), 37));
    v6 = (v7 ^ v8 ^ (3603962101LL * __ROR8__(v13 + 2729050939LL * (v8 + v14), 37)) ^ (2729050939LL
                                                                                    * __ROR8__(
                                                                                        v14 + 3603962101LL * (v13 + v7),
                                                                                        37)))
       + 0x52BC33FEDBE4CBB5LL;
  }
  if ( v3 - v5 >= 16 )
  {
    v18 = 1654206401LL * *(_QWORD *)v5;
    v19 = *((_QWORD *)v5 + 1);
    v5 += 16;
    v20 = 817650473LL * __ROR8__(v6 + v18, 29);
    v21 = 817650473LL * __ROR8__(v6 + 1654206401 * v19, 29);
    v6 += v21 ^ (__ROR8__(817650473 * v21, 21) + (v20 ^ (v21 + __ROR8__(3603962101LL * v20, 21))));
  }
  if ( v3 - v5 >= 8 )
  {
    v16 = 817650473LL * *(_QWORD *)v5;
    v5 += 8;
    v6 = (2729050939LL * __ROR8__(v16 + v6, 55)) ^ (v16 + v6);
  }
  if ( v3 - v5 >= 4 )
  {
    v22 = *(unsigned int *)v5;
    v5 += 4;
    v6 = (2729050939LL * __ROR8__(817650473 * v22 + v6, 26)) ^ (817650473 * v22 + v6);
  }
  if ( v3 - v5 >= 2 )
  {
    v17 = *(unsigned __int16 *)v5;
    v5 += 2;
    v6 = (2729050939LL * __ROR8__(817650473 * v17 + v6, 48)) ^ (817650473 * v17 + v6);
  }
  if ( v3 - v5 >= 1 )
    v6 = (2729050939LL * __ROR8__(817650473LL * *v5 + v6, 37)) ^ (817650473LL * *v5 + v6);
  v15 = 3603962101u * (v6 ^ __ROR8__(v6, 28));
  *(_QWORD *)a3 = v15 ^ __ROR8__(v15, 29);
}
