/*
 * XREFs of sub_180114B5C @ 0x180114B5C
 * Callers:
 *     sub_180009E90 @ 0x180009E90 (sub_180009E90.c)
 *     sub_180009EB0 @ 0x180009EB0 (sub_180009EB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180114B5C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = 0LL;
  result = a1 + 4;
  while ( *(float *)(result + 12) >= *(float *)result )
  {
    ++v1;
    result += 4LL;
    if ( v1 >= 3 )
      return result;
  }
  *(_QWORD *)(a1 + 4) = _mm_unpacklo_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu).m128_u64[0];
  *(_DWORD *)(a1 + 12) = 2139095039;
  result = 4286578687LL;
  *(_QWORD *)(a1 + 16) = _mm_unpacklo_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF).m128_u64[0];
  *(_DWORD *)(a1 + 24) = -8388609;
  *(_BYTE *)a1 = 0;
  return result;
}
