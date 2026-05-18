/*
 * XREFs of sub_18010D9F0 @ 0x18010D9F0
 * Callers:
 *     sub_1801103C0 @ 0x1801103C0 (sub_1801103C0.c)
 * Callees:
 *     sub_18010D5DC @ 0x18010D5DC (sub_18010D5DC.c)
 *     sub_18010D7CC @ 0x18010D7CC (sub_18010D7CC.c)
 *     sub_18010D97C @ 0x18010D97C (sub_18010D97C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18010D9F0(_QWORD *a1, __m128i *a2)
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
  sub_18010D97C(a1, &v8);
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  if ( a2->m128i_i64[0] != v5 )
  {
    v6 = (__int64 **)(a1 + 1);
    do
    {
      sub_18010D7CC((__int64)(a1 + 1), **v6, v4);
      sub_18010D5DC(a1, (__int64)v11, (const void **)(**v6 + 16), **v6);
      v4 += 40LL;
    }
    while ( v4 != v5 );
  }
  return a1;
}
