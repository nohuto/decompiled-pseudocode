/*
 * XREFs of sub_18012212C @ 0x18012212C
 * Callers:
 *     sub_180122208 @ 0x180122208 (sub_180122208.c)
 * Callees:
 *     sub_18012067C @ 0x18012067C (sub_18012067C.c)
 *     sub_180121D08 @ 0x180121D08 (sub_180121D08.c)
 *     sub_180122FD0 @ 0x180122FD0 (sub_180122FD0.c)
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 *     sub_18012340C @ 0x18012340C (sub_18012340C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012212C(__int64 a1, __int64 a2)
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
    v4 = (_QWORD *)sub_180122FD0(&v9, 0LL, 0LL);
    *(_QWORD *)&v9 = v4;
    if ( (__int128 *)(a1 + 8) != &v9 )
      sub_180121D08((__int64 *)(a1 + 8), (_QWORD *)*v4, v4);
    v7 = 0LL;
    v6 = 0LL;
    if ( (__int128 *)(a1 + 24) != &v6 )
      sub_18012067C((char **)(a1 + 24), 0LL, 0LL);
    sub_18012310C(a1, a2);
    sub_18012340C(&v9);
    j_j__o_free(v9);
  }
  return a1;
}
