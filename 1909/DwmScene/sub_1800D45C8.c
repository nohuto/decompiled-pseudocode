/*
 * XREFs of sub_1800D45C8 @ 0x1800D45C8
 * Callers:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 * Callees:
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_1800A1B54 @ 0x1800A1B54 (sub_1800A1B54.c)
 *     sub_1800A54C8 @ 0x1800A54C8 (sub_1800A54C8.c)
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D45C8(__int64 *Src, __int64 a2, const void **a3, int a4)
{
  int i; // edi
  __int64 *v10[3]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  v10[2] = (__int64 *)-2LL;
  v10[0] = Src;
  v11 = 0LL;
  *(_QWORD *)&v11 = sub_18006DEEC();
  for ( i = 0; i < a4; a3 += 4 )
  {
    if ( ((1LL << i) & a2) != 0 )
      sub_1800A1B54(&v11, (__int64)v10, 0, a3);
    ++i;
  }
  sub_1800A54C8(Src, (_QWORD **)&v11);
  sub_1800A6168((__int64 ***)&v11, v10, *(__int64 **)v11, (__int64 *)v11);
  j_j__o_free(v11);
  return Src;
}
