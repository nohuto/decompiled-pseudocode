/*
 * XREFs of sub_18008D884 @ 0x18008D884
 * Callers:
 *     sub_18008DAF4 @ 0x18008DAF4 (sub_18008DAF4.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18008D884(_QWORD *a1, _QWORD *a2, unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *i; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // rdx
  _QWORD *v15; // r8

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  v10 = a1[1];
  for ( i = *(_QWORD **)(v8 + 16 * (v5 & a1[6])); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD *)(v8 + 8 * v9) == v10 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v9 + 8);
    if ( i == v12 )
      break;
    v13 = *(_QWORD *)a3;
    if ( i[2] == *(_QWORD *)a3 )
    {
      v14 = i;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v8 + 8 * v9) == v10 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v9 + 8);
        if ( i == v15 || v13 != i[2] )
          break;
        i = (_QWORD *)*i;
      }
      if ( v14 != i )
      {
        *a2 = v14;
        a2[1] = i;
        return a2;
      }
      break;
    }
  }
  *a2 = v10;
  a2[1] = v10;
  return a2;
}
