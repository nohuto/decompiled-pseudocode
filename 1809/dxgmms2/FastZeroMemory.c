/*
 * XREFs of FastZeroMemory @ 0x1C005A4B0
 * Callers:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005A3CC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall FastZeroMemory(__m128i *a1, size_t Size)
{
  size_t v2; // rdi
  __m128i *v3; // rbx
  bool v4; // si
  unsigned int v5; // edi
  __int64 result; // rax
  __m128i v7; // xmm0
  __m128i v8; // [rsp+30h] [rbp-18h] BYREF

  v2 = (unsigned int)Size;
  v3 = a1;
  v4 = (Size & 0x3F) == 0;
  if ( ((unsigned __int8)a1 & 0x3F) != 0 || !ExIsProcessorFeaturePresent(0xAu) || !v4 )
    return (__int64)memset(v3, 0, v2);
  v5 = (unsigned int)v2 >> 6;
  result = 0LL;
  v8 = 0uLL;
  v7 = _mm_load_si128(&v8);
  while ( (unsigned int)result < v5 )
  {
    _mm_stream_si128(v3, v7);
    _mm_stream_si128(v3 + 1, v7);
    _mm_stream_si128(v3 + 2, v7);
    _mm_stream_si128(v3 + 3, v7);
    v3 += 4;
    result = (unsigned int)(result + 1);
  }
  _mm_mfence();
  return result;
}
