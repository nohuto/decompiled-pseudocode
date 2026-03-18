/*
 * XREFs of MiNodeHighLargeFreeZeroPages @ 0x1401BF554
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140887CF4 (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeHighLargeFreeZeroPages(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // r8
  __int64 *v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  __m128i v6; // xmm1
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  __m128i v10; // xmm0
  __m128i v11; // xmm0

  v1 = 0LL;
  v2 = MiLargePageSizes;
  v3 = (__int64 *)(a1 + 16);
  v4 = 3LL;
  do
  {
    v5 = *v2;
    v6 = 0LL;
    v7 = v3;
    v8 = 2LL;
    do
    {
      v9 = 2LL;
      do
      {
        v10.m128i_i64[0] = *v7;
        v10.m128i_i64[1] = v7[1];
        v7 += 2;
        v11 = _mm_add_epi64(v10, v6);
        v6 = v11;
        --v9;
      }
      while ( v9 );
      --v8;
    }
    while ( v8 );
    v3 += 34;
    ++v2;
    v1 += v5 * _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_u64[0];
    --v4;
  }
  while ( v4 );
  return v1;
}
