/*
 * XREFs of sub_180122840 @ 0x180122840
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180122840(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __m128i v7; // [rsp+30h] [rbp-48h] BYREF
  __m128i si128; // [rsp+40h] [rbp-38h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
  v7.m128i_i16[0] = 0;
  if ( (unsigned int)sub_180120150(a1, a3, &v7) )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)a4;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
  }
  else
  {
    *(__m128i *)a2 = v7;
    *(__m128i *)(a2 + 16) = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
    v7.m128i_i16[0] = 0;
  }
  unknown_libname_116(v7.m128i_i64);
  unknown_libname_116((__int64 *)a4);
  return a2;
}
