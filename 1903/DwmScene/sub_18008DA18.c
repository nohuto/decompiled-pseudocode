/*
 * XREFs of sub_18008DA18 @ 0x18008DA18
 * Callers:
 *     sub_180088EFC @ 0x180088EFC (sub_180088EFC.c)
 *     sub_18008D98C @ 0x18008D98C (sub_18008D98C.c)
 * Callees:
 *     sub_18008DC94 @ 0x18008DC94 (sub_18008DC94.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008DA18(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx

  v4 = 0xCBF29CE484222325uLL;
  v5 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= a3 + 3 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - (unsigned __int8 *)(a3 + 2) != (a3 + 3 >= a3 + 2 ? 8 : 0) );
  }
  v7 = a1[3];
  v8 = 2 * (v4 & a1[6]);
  if ( *(_QWORD **)(v7 + 16 * (v4 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v7 + 16 * (v4 & a1[6])) == a3 )
    {
      *(_QWORD *)(v7 + 16 * (v4 & a1[6])) = a1[1];
      *(_QWORD *)(a1[3] + 8 * v8 + 8) = a1[1];
    }
    else
    {
      *(_QWORD *)(v7 + 16 * (v4 & a1[6]) + 8) = a3[1];
    }
  }
  else if ( *(_QWORD **)(v7 + 16 * (v4 & a1[6])) == a3 )
  {
    *(_QWORD *)(v7 + 16 * (v4 & a1[6])) = *a3;
  }
  sub_18008DC94(a1 + 1, a2, a3);
  return a2;
}
