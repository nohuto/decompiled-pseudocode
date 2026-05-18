/*
 * XREFs of sub_18010DB00 @ 0x18010DB00
 * Callers:
 *     sub_1801104D0 @ 0x1801104D0 (sub_1801104D0.c)
 * Callees:
 *     sub_18010D6EC @ 0x18010D6EC (sub_18010D6EC.c)
 *     sub_18010D8DC @ 0x18010D8DC (sub_18010D8DC.c)
 *     sub_18010DA8C @ 0x18010DA8C (sub_18010DA8C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18010DB00(_QWORD *a1, __m128i *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 **v6; // rbx
  int v8; // [rsp+24h] [rbp-44h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD *v10; // [rsp+30h] [rbp-38h]
  _BYTE v11[48]; // [rsp+38h] [rbp-30h] BYREF

  v9 = -2LL;
  v10 = a1;
  v8 = 0;
  sub_18010DA8C(a1, &v8);
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  if ( a2->m128i_i64[0] != v5 )
  {
    v6 = (__int64 **)(a1 + 1);
    do
    {
      sub_18010D8DC((__int64)(a1 + 1), **v6, v4);
      sub_18010D6EC(a1, (__int64)v11, (const void **)(**v6 + 16), **v6);
      v4 += 40LL;
    }
    while ( v4 != v5 );
  }
  return a1;
}
