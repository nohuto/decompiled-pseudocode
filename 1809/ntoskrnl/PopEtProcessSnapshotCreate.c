/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x1406A0ABC
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1405FD4C0 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopEtStringSet @ 0x1405FDCE8 (PopEtStringSet.c)
 *     PopEtAggregateKeyCleanup @ 0x1406011A4 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406A0D98 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtBucketsAllocate @ 0x1406DD404 (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x1406DD460 (PopEtBucketsFree.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned __int64 v13; // rdx
  char *v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r13
  _QWORD *v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // cl

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1F0uLL, 0x54456F50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1F0uLL);
    memset(v6 + 2, 0, 0x20uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v6 + 2, v4, v2 + 32);
    PopEtStringSet(v6 + 3, 0LL);
    v7 = v2 + 64;
    v8 = *(_DWORD *)(v2 + 68);
    v9 = 2 * (v8 >> 5);
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v9 )
      goto LABEL_3;
    if ( (unsigned int)v9 < 4 )
      v9 = 4LL;
    v15 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v9);
    if ( v15 )
    {
      if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
      {
        v23 = -1;
        do
        {
          ++v23;
          LODWORD(v9) = (unsigned int)v9 >> 1;
        }
        while ( (_DWORD)v9 );
        v9 = (unsigned int)(1 << v23);
      }
      if ( (unsigned int)v9 > 0x4000000 )
        v9 = 0x4000000LL;
      v16 = (unsigned int)v9;
      if ( v15 > &v15[8 * v9] )
        v16 = 0LL;
      if ( v16 )
        memset64(v15, v7 | 1, v16);
      v17 = 0LL;
      v18 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (*(_DWORD *)(v2 + 68) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v19 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v20 = *(_QWORD **)(v19 + 8LL * (unsigned int)v17);
            if ( ((unsigned __int8)v20 & 1) != 0 )
              break;
            *(_QWORD *)(v19 + 8LL * (unsigned int)v17) = *v20;
            v21 = ((((unsigned __int64)v18 & v20[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v18 & v20[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v18 & v20[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v18 & v20[1]) >> 32)
                    + 37
                    * ((((unsigned int)v18 & (_DWORD)v20[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v18 & (_DWORD)v20[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v18 & v20[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v18 & v20[1]) >> 8)))))))) & (unsigned int)(v9 - 1);
            *v20 = *(_QWORD *)&v15[8 * v21];
            *(_QWORD *)&v15[8 * v21] = v20;
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *(_DWORD *)(v2 + 68) >> 5 );
        v3 = a2;
      }
      v22 = *(_QWORD *)(v2 + 72);
      v8 = (32 * v9) | *(_DWORD *)(v2 + 68) & 0x1F;
      *(_QWORD *)(v2 + 72) = v15;
      *(_DWORD *)(v2 + 68) = v8;
      if ( v22 )
      {
        PopEtBucketsFree(v22, 0LL, v17);
        v8 = *(_DWORD *)(v2 + 68);
      }
      goto LABEL_3;
    }
    v8 = *(_DWORD *)(v2 + 68);
    if ( v8 >= 0x20 )
    {
LABEL_3:
      *v3 = v6;
      v10 = v6[1] & (-1LL << (v8 & 0x1F));
      v11 = *(_QWORD *)(v2 + 72);
      v12 = 0;
      v13 = (HIBYTE(v10)
           + 37
           * (BYTE6(v10)
            + 37
            * (BYTE5(v10)
             + 37
             * (BYTE4(v10)
              + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (37 * ((unsigned __int8)v10 + 11623883) + BYTE1(v10)))))))) & ((v8 >> 5) - 1);
      *v6 = *(_QWORD *)(v11 + 8 * v13);
      *(_QWORD *)(v11 + 8 * v13) = v6;
      ++*(_DWORD *)v7;
      return v12;
    }
  }
  ++*(_DWORD *)(v2 + 612);
  v12 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v12;
}
