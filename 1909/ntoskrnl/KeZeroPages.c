/*
 * XREFs of KeZeroPages @ 0x1401C8590
 * Callers:
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiFillPhysicalPages @ 0x14012C484 (MiFillPhysicalPages.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x1402D91A8 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x1402E81BC (MiDoGangAssignment.c)
 *     MxMapVa @ 0x1409F35B4 (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A23054 (MiMapBBTMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
