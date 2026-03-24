/*
 * XREFs of KeZeroPages @ 0x1401C0930
 * Callers:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiZeroLargePage @ 0x140118D7C (MiZeroLargePage.c)
 *     MiFillPhysicalPages @ 0x14012AF80 (MiFillPhysicalPages.c)
 *     MiZeroInParallelWorker @ 0x14013C6C0 (MiZeroInParallelWorker.c)
 *     MiPageNotZero @ 0x1402BFB48 (MiPageNotZero.c)
 *     MiMapBBTMemory @ 0x1409BA008 (MiMapBBTMemory.c)
 *     MxMapVa @ 0x1409BB8F8 (MxMapVa.c)
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
