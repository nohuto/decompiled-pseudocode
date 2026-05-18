/*
 * XREFs of sub_1801249FC @ 0x1801249FC
 * Callers:
 *     sub_180124E00 @ 0x180124E00 (sub_180124E00.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18011DAEC @ 0x18011DAEC (sub_18011DAEC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801249FC(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  _QWORD *v9; // [rsp+48h] [rbp-10h]

  v8 = -2LL;
  v9 = a1;
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(a3) = 0;
  LOBYTE(v6[0]) = 0;
  sub_18000E168(v6, 0x17uLL, a3, "Operation was cancelled");
  sub_18011DAEC((__int64)a1, v6, 0);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v4 = v6[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v4 = *(_QWORD *)(v6[0] - 8);
      if ( (unsigned __int64)(v6[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
