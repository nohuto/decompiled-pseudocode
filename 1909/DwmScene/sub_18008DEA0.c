/*
 * XREFs of sub_18008DEA0 @ 0x18008DEA0
 * Callers:
 *     sub_180089C5C @ 0x180089C5C (sub_180089C5C.c)
 *     sub_18008A904 @ 0x18008A904 (sub_18008A904.c)
 *     sub_18008BE6C @ 0x18008BE6C (sub_18008BE6C.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18008DEA0(_QWORD *a1, _QWORD *a2, unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r11
  _QWORD *i; // rax
  _QWORD *v12; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v7 = a1[3];
  v9 = a1[1];
  v8 = v4 & a1[6];
  v10 = 2 * v8;
  for ( i = *(_QWORD **)(v7 + 16 * v8); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD *)(v7 + 8 * v10) == v9 ? (_QWORD *)a1[1] : **(_QWORD ***)(v7 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v9;
  return a2;
}
