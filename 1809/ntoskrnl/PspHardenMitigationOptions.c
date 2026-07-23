/*
 * XREFs of PspHardenMitigationOptions @ 0x1406C4928
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall PspHardenMitigationOptions(__m128i *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int8 result; // al
  __m128i v4; // [rsp+0h] [rbp-28h]

  v1 = a1->m128i_i64[0];
  v2 = a1->m128i_i64[0] - PspHardenedMitigationOptionsMap;
  v4 = *a1;
  if ( !v2 )
    v2 = _mm_srli_si128(*a1, 8).m128i_u64[0] - qword_140542970;
  if ( v2 )
  {
    if ( (v1 & 3) != 1 )
    {
      v1 = v1 & 0xFFFFFFFFFFFFFFFCuLL | 1;
      v4.m128i_i64[0] = v1;
    }
    if ( (BYTE1(v1) & 3) != 3 )
    {
      v1 |= 0x300uLL;
      v4.m128i_i64[0] = v1;
    }
    if ( ((v1 >> 12) & 3) != 1 )
    {
      v1 = v1 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
      v4.m128i_i64[0] = v1;
    }
    if ( (((unsigned __int8)v1 >> 4) & 3) != 1 )
    {
      v1 = v1 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
      v4.m128i_i64[0] = v1;
    }
    if ( (BYTE2(v1) & 3) != 1 )
    {
      v1 = v1 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
      v4.m128i_i64[0] = v1;
    }
    result = ((v1 >> 20) & 3) - 1;
    if ( result > 1u )
    {
      result = ((unsigned __int64)PspSystemMitigationOptions >> 20) & 3;
      if ( result != 2 )
        v4.m128i_i64[0] = v1 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
    }
    *a1 = v4;
  }
  return result;
}
