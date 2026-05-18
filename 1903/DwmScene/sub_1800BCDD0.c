/*
 * XREFs of sub_1800BCDD0 @ 0x1800BCDD0
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800ED920 @ 0x1800ED920 (sub_1800ED920.c)
 *     sub_1800EE260 @ 0x1800EE260 (sub_1800EE260.c)
 *     sub_1800EE3F8 @ 0x1800EE3F8 (sub_1800EE3F8.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_180110C10 @ 0x180110C10 (sub_180110C10.c)
 * Callees:
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     sub_1800A02E4 @ 0x1800A02E4 (sub_1800A02E4.c)
 *     sub_1800BBF4C @ 0x1800BBF4C (sub_1800BBF4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall sub_1800BCDD0(__int64 **a1, __m128i *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18006DDDC();
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v4 != v5 )
  {
    v6 = *a1;
    v7 = sub_1800A02E4(a1, v4);
    sub_1800BBF4C((__int64 ***)a1, v9, v6, v7 + 4, v7);
    v4 += 32LL;
  }
  return a1;
}
