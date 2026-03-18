/*
 * XREFs of ExInitializePagedHeaps @ 0x140195964
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     ExCreateHeap @ 0x1401799AC (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x140195ABC (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePagedHeaps()
{
  unsigned int v0; // esi
  __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-20h]
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF

  v0 = 0;
  if ( dword_14046FA10 )
  {
    while ( 1 )
    {
      v1 = 8384LL * v0;
      v6 = 2uLL;
      BYTE2(v6) = v0;
      v8 = v6;
      result = ExCreateHeap(&v8, 0LL, &v9);
      if ( (int)result < 0 )
        break;
      v3 = v9;
      *(_QWORD *)((char *)&ExPoolState + v1 + 14608) = v9;
      RtlpDynamicLookasideInitialize((char *)&ExPoolState + v1 + 14656);
      *(_QWORD *)(v3 + 40) = (char *)&ExPoolState + v1 + 14656;
      v7 = 0xAuLL;
      BYTE2(v7) = v0;
      v8 = v7;
      result = ExCreateHeap(&v8, 0LL, &v9);
      if ( (int)result < 0 )
        break;
      v4 = v9;
      ++v0;
      *(_QWORD *)((char *)&ExPoolState + v1 + 14616) = v9;
      *(_DWORD *)(v4 + 816) |= 2u;
      *(_BYTE *)(v4 + 269) |= 8u;
      *(_BYTE *)(v4 + 461) |= 8u;
      if ( v0 >= dword_14046FA10 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = 2uLL;
    result = ExCreateHeap(&v8, 0LL, &v9);
    if ( (int)result >= 0 )
    {
      v5 = v9;
      *(_DWORD *)(v9 + 816) |= 2u;
      *(_BYTE *)(v5 + 269) |= 8u;
      *(_BYTE *)(v5 + 461) |= 8u;
      qword_1404F2A50 = v5;
      return 0LL;
    }
  }
  return result;
}
