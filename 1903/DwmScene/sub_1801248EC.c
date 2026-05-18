/*
 * XREFs of sub_1801248EC @ 0x1801248EC
 * Callers:
 *     sub_180124CF0 @ 0x180124CF0 (sub_180124CF0.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801248EC(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  _QWORD *v9; // [rsp+48h] [rbp-10h]

  v8 = -2LL;
  v9 = a1;
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(a3) = 0;
  LOBYTE(v6[0]) = 0;
  sub_18000E118(v6, 0x17uLL, a3, "Operation was cancelled");
  sub_18011D9DC((__int64)a1, v6, 0);
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
