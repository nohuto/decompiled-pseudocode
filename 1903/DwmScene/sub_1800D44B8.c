/*
 * XREFs of sub_1800D44B8 @ 0x1800D44B8
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 *     sub_18005DAC8 @ 0x18005DAC8 (sub_18005DAC8.c)
 *     sub_18005DED4 @ 0x18005DED4 (sub_18005DED4.c)
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 * Callees:
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     sub_1800A1A44 @ 0x1800A1A44 (sub_1800A1A44.c)
 *     sub_1800A53B8 @ 0x1800A53B8 (sub_1800A53B8.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D44B8(__int64 *Src, __int64 a2, const void **a3, int a4)
{
  int i; // edi
  __int64 *v10[3]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  v10[2] = (__int64 *)-2LL;
  v10[0] = Src;
  v11 = 0LL;
  *(_QWORD *)&v11 = sub_18006DDDC();
  for ( i = 0; i < a4; a3 += 4 )
  {
    if ( ((1LL << i) & a2) != 0 )
      sub_1800A1A44(&v11, (__int64)v10, 0, a3);
    ++i;
  }
  sub_1800A53B8(Src, (_QWORD **)&v11);
  sub_1800A6058((__int64 ***)&v11, v10, *(__int64 **)v11, (__int64 *)v11);
  j_j__o_free(v11);
  return Src;
}
