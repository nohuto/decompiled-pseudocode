/*
 * XREFs of sub_18007392C @ 0x18007392C
 * Callers:
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     sub_18006F17C @ 0x18006F17C (sub_18006F17C.c)
 *     sub_180070B10 @ 0x180070B10 (sub_180070B10.c)
 *     sub_18007DE1C @ 0x18007DE1C (sub_18007DE1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007392C(__int64 a1, __m128i *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = sub_18007DE1C();
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v4 != v5 )
  {
    v6 = *(__int64 **)a1;
    v7 = (_QWORD *)sub_18006F17C(a1, v4);
    sub_180070B10((__int64 ***)a1, v9, v6, v7 + 4, v7);
    v4 += 64LL;
  }
  return a1;
}
