/*
 * XREFs of sub_180073794 @ 0x180073794
 * Callers:
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 * Callees:
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_18006F00C @ 0x18006F00C (sub_18006F00C.c)
 *     sub_1800705EC @ 0x1800705EC (sub_1800705EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall sub_180073794(__int64 **a1, __m128i *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18002B6D4();
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v4 != v5 )
  {
    v6 = *a1;
    v7 = sub_18006F00C(a1, v4);
    sub_1800705EC((__int64 ***)a1, v9, v6, v7 + 4, v7);
    v4 += 40LL;
  }
  return a1;
}
