/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140148C18
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148D30 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmMapPage @ 0x14014A87C (SmMapPage.c)
 *     StIoCountsMovePeriod @ 0x140306C5C (StIoCountsMovePeriod.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm0_8
  __int64 v5; // rax
  signed __int32 v6; // edx
  unsigned int v7; // r14d
  unsigned __int32 v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // r10d
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __m128i v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]
  unsigned int v19; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v17 = *(__m128i *)(a2 + 8);
  v18 = v4;
  v5 = SmMapPage(_mm_srli_si128(v17, 8).m128i_u64[0], &v19);
  v6 = v17.m128i_i32[0];
  if ( v5 )
  {
    if ( v17.m128i_i32[0] >= 0 )
    {
      v7 = 0;
      v8 = v19 >> 12;
    }
    else
    {
      v7 = v19;
      v8 = 1;
    }
    for ( v17.m128i_i64[1] = v5; ; v17.m128i_i64[1] += 4096LL )
    {
      v9 = v6 >= 0 ? 1 : (v7 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      v20 = v9;
      do
      {
        v10 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, &v17, a2, &v20);
        v11 = v10;
      }
      while ( v10 == -1073741267 );
      if ( v10 )
        break;
      v17.m128i_i32[0] ^= (v17.m128i_i32[0] ^ ((v17.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8;
      v6 = v17.m128i_i32[0];
      if ( (((unsigned __int32)v17.m128i_i32[0] >> 3) & 0x7FFFFFF) >= v8 )
        goto LABEL_11;
      LODWORD(v18) = v18 + 1;
    }
    v6 = v17.m128i_i32[0];
    if ( v10 == -1073741818 )
    {
      v6 = v17.m128i_i32[0] & 0xC0000007;
      goto LABEL_14;
    }
LABEL_11:
    v12 = ((unsigned int)v6 >> 3) & 0x7FFFFFF;
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 1816);
      if ( v13 )
      {
        v15 = v13 + 24;
        v16 = *(_DWORD **)v15;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v15 + 16) )
          v16 = (_DWORD *)StIoCountsMovePeriod(v15, MEMORY[0xFFFFF78000000008], v11);
        *v16 += v12;
        v6 = v17.m128i_i32[0];
      }
      LODWORD(v11) = 0;
    }
  }
  else
  {
    LODWORD(v11) = -1073741670;
  }
LABEL_14:
  result = (unsigned int)v11;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v6) & 0x3FFFFFF8;
  return result;
}
