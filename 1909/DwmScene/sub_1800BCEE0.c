/*
 * XREFs of sub_1800BCEE0 @ 0x1800BCEE0
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE370 @ 0x1800EE370 (sub_1800EE370.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 * Callees:
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_1800A03F4 @ 0x1800A03F4 (sub_1800A03F4.c)
 *     sub_1800BC05C @ 0x1800BC05C (sub_1800BC05C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall sub_1800BCEE0(__int64 **a1, __m128i *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18006DEEC();
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v4 != v5 )
  {
    v6 = *a1;
    v7 = sub_1800A03F4(a1, v4);
    sub_1800BC05C((__int64 ***)a1, v9, v6, v7 + 4, v7);
    v4 += 32LL;
  }
  return a1;
}
