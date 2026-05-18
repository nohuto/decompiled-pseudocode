/*
 * XREFs of sub_1800AA1DC @ 0x1800AA1DC
 * Callers:
 *     sub_1800A7AA4 @ 0x1800A7AA4 (sub_1800A7AA4.c)
 *     sub_1800A7C0C @ 0x1800A7C0C (sub_1800A7C0C.c)
 *     sub_1800A9604 @ 0x1800A9604 (sub_1800A9604.c)
 *     sub_1800A9F98 @ 0x1800A9F98 (sub_1800A9F98.c)
 *     sub_1800AA360 @ 0x1800AA360 (sub_1800AA360.c)
 * Callees:
 *     sub_1800A9F20 @ 0x1800A9F20 (sub_1800A9F20.c)
 *     sub_1800AA2BC @ 0x1800AA2BC (sub_1800AA2BC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800AA1DC(_QWORD **a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // r8
  __int64 **v10; // rax
  _QWORD *i; // rax
  __int64 *j; // rcx
  char v14[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == (_QWORD *)**a1 && a4 == v8 )
  {
    sub_1800A9F20((__int64)a1, (__int64 *)v8[1]);
    (*a1)[1] = v8;
    **a1 = v8;
    (*a1)[2] = v8;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    if ( a3 != a4 )
    {
      do
      {
        v9 = v5;
        v10 = (__int64 **)v5[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          v5 = (_QWORD *)v5[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v5 = j;
        }
        sub_1800AA2BC(a1, v14, v9);
      }
      while ( v5 != a4 );
    }
    *a2 = v5;
  }
  return a2;
}
