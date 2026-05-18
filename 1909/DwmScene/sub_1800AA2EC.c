/*
 * XREFs of sub_1800AA2EC @ 0x1800AA2EC
 * Callers:
 *     sub_1800A7BB4 @ 0x1800A7BB4 (sub_1800A7BB4.c)
 *     sub_1800A7D1C @ 0x1800A7D1C (sub_1800A7D1C.c)
 *     sub_1800A9714 @ 0x1800A9714 (sub_1800A9714.c)
 *     sub_1800AA0A8 @ 0x1800AA0A8 (sub_1800AA0A8.c)
 *     sub_1800AA470 @ 0x1800AA470 (sub_1800AA470.c)
 * Callees:
 *     sub_1800AA030 @ 0x1800AA030 (sub_1800AA030.c)
 *     sub_1800AA3CC @ 0x1800AA3CC (sub_1800AA3CC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800AA2EC(_QWORD **a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
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
    sub_1800AA030((__int64)a1, (__int64 *)v8[1]);
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
        sub_1800AA3CC(a1, v14, v9);
      }
      while ( v5 != a4 );
    }
    *a2 = v5;
  }
  return a2;
}
