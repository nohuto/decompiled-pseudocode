/*
 * XREFs of PopEtAggregateGet @ 0x1405FDD54
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1405FD7EC (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopEtAggregateFind @ 0x1405FE070 (PopEtAggregateFind.c)
 *     PopEtAggregateKeyCleanup @ 0x1406011A4 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x1406011EC (PopEtAggregateKeyCopy.c)
 *     PopEtBucketsAllocate @ 0x1406DD404 (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x1406DD460 (PopEtBucketsFree.c)
 */

void __fastcall PopEtAggregateGet(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  int v15; // edi
  char *v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rsi
  _QWORD *v21; // r11
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // cl
  _QWORD *v25; // r8
  int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // r15
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // [rsp+68h] [rbp+20h] BYREF

  v6 = PopEtAggregateFind(a1, a2, &v31);
  if ( v6 )
  {
    *a3 = v6;
    return;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 616);
LABEL_34:
    ++*(_DWORD *)(a1 + 604);
    v25 = (_QWORD *)(a1 + 80);
    v26 = *(_DWORD *)(a1 + 636);
    *a3 = a1 + 80;
    if ( (v26 & 4) == 0 )
    {
      *(_DWORD *)(a1 + 636) = v26 | 4;
      v27 = *(_DWORD *)(v7 + 4);
      v28 = *(_QWORD *)(a1 + 88) & (-1LL << (v27 & 0x1F));
      v29 = *(_QWORD *)(v7 + 8);
      v30 = (HIBYTE(v28)
           + 37
           * (BYTE6(v28)
            + 37
            * (BYTE5(v28)
             + 37
             * (BYTE4(v28)
              + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))) & ((v27 >> 5) - 1);
      *v25 = *(_QWORD *)(v29 + 8 * v30);
      *(_QWORD *)(v29 + 8 * v30) = v25;
      ++*(_DWORD *)v7;
    }
    return;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x54456F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_34;
  memset(PoolWithTag, 0, 0x200uLL);
  memset(v9 + 2, 0, 0x20uLL);
  PopEtAggregateKeyCopy(v9 + 2, a2);
  v9[1] = v31;
  v10 = *(_DWORD *)(a1 + 52);
  v11 = 2 * (v10 >> 5);
  if ( *(_DWORD *)v7 < (unsigned int)v11 )
    goto LABEL_5;
  if ( (unsigned int)v11 < 4 )
    v11 = 4LL;
  v16 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v11);
  if ( v16 )
  {
    if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
    {
      v24 = -1;
      do
      {
        ++v24;
        LODWORD(v11) = (unsigned int)v11 >> 1;
      }
      while ( (_DWORD)v11 );
      v11 = (unsigned int)(1 << v24);
    }
    if ( (unsigned int)v11 > 0x4000000 )
      v11 = 0x4000000LL;
    v17 = (unsigned int)v11;
    if ( v16 > &v16[8 * v11] )
      v17 = 0LL;
    if ( v17 )
      memset64(v16, v7 | 1, v17);
    v18 = 0LL;
    v19 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
    if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v20 = *(_QWORD *)(v7 + 8);
        while ( 1 )
        {
          v21 = *(_QWORD **)(v20 + 8LL * (unsigned int)v18);
          if ( ((unsigned __int8)v21 & 1) != 0 )
            break;
          *(_QWORD *)(v20 + 8LL * (unsigned int)v18) = *v21;
          v22 = ((((unsigned __int64)v19 & v21[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v19 & v21[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v19 & v21[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v19 & v21[1]) >> 32)
                  + 37
                  * ((((unsigned int)v19 & (_DWORD)v21[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v19 & (_DWORD)v21[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v19 & v21[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v19 & v21[1]) >> 8)))))))) & (unsigned int)(v11 - 1);
          *v21 = *(_QWORD *)&v16[8 * v22];
          *(_QWORD *)&v16[8 * v22] = v21;
        }
        v7 = a1 + 48;
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < *(_DWORD *)(a1 + 52) >> 5 );
    }
    v23 = *(_QWORD *)(v7 + 8);
    v10 = (32 * v11) | *(_DWORD *)(v7 + 4) & 0x1F;
    *(_QWORD *)(v7 + 8) = v16;
    *(_DWORD *)(v7 + 4) = v10;
    if ( v23 )
    {
      PopEtBucketsFree(v23, 0LL, v18);
      v10 = *(_DWORD *)(a1 + 52);
    }
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a1 + 52);
  if ( v10 >= 0x20 )
  {
LABEL_5:
    *a3 = (__int64)v9;
    v12 = v9[1] & (-1LL << (v10 & 0x1F));
    v13 = *(_QWORD *)(v7 + 8);
    v14 = (HIBYTE(v12)
         + 37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37
            * ((((_DWORD)v9[1] & (unsigned int)(-1 << (v10 & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)(((_DWORD)v9[1] & (unsigned int)(-1 << (v10 & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(v9[1] & (-1 << (v10 & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v12 + 11623883)))))))) & ((v10 >> 5) - 1);
    *v9 = *(_QWORD *)(v13 + 8 * v14);
    *(_QWORD *)(v13 + 8 * v14) = v9;
    v9 = 0LL;
    ++*(_DWORD *)v7;
    v15 = 0;
    goto LABEL_6;
  }
  v15 = -1073741670;
LABEL_6:
  if ( v9 )
  {
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  if ( v15 < 0 )
    goto LABEL_34;
}
