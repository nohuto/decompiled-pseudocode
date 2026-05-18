/*
 * XREFs of sub_18012201C @ 0x18012201C
 * Callers:
 *     sub_1801220F8 @ 0x1801220F8 (sub_1801220F8.c)
 * Callees:
 *     sub_18012056C @ 0x18012056C (sub_18012056C.c)
 *     sub_180121BF8 @ 0x180121BF8 (sub_180121BF8.c)
 *     sub_180122EC0 @ 0x180122EC0 (sub_180122EC0.c)
 *     sub_180122FFC @ 0x180122FFC (sub_180122FFC.c)
 *     sub_1801232FC @ 0x1801232FC (sub_1801232FC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012201C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int128 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  __int128 v9; // [rsp+48h] [rbp-18h] BYREF

  v8 = -2LL;
  if ( a1 != a2 )
  {
    v9 = 0LL;
    v4 = (_QWORD *)sub_180122EC0(&v9, 0LL, 0LL);
    *(_QWORD *)&v9 = v4;
    if ( (__int128 *)(a1 + 8) != &v9 )
      sub_180121BF8((__int64 *)(a1 + 8), (_QWORD *)*v4, v4);
    v7 = 0LL;
    v6 = 0LL;
    if ( (__int128 *)(a1 + 24) != &v6 )
      sub_18012056C((char **)(a1 + 24), 0LL, 0LL);
    sub_180122FFC(a1, a2);
    sub_1801232FC(&v9);
    j_j__o_free(v9);
  }
  return a1;
}
