/*
 * XREFs of sub_1800B4F74 @ 0x1800B4F74
 * Callers:
 *     sub_1800B3794 @ 0x1800B3794 (sub_1800B3794.c)
 *     sub_1800B37CC @ 0x1800B37CC (sub_1800B37CC.c)
 *     sub_1800B50F8 @ 0x1800B50F8 (sub_1800B50F8.c)
 * Callees:
 *     sub_1800B4E64 @ 0x1800B4E64 (sub_1800B4E64.c)
 *     sub_1800B5054 @ 0x1800B5054 (sub_1800B5054.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B4F74(_QWORD **a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
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
    sub_1800B4E64((__int64)a1, (__int64 *)v8[1]);
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
        sub_1800B5054(a1, v14, v9);
      }
      while ( v5 != a4 );
    }
    *a2 = v5;
  }
  return a2;
}
