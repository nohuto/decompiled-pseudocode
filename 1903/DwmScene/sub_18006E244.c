/*
 * XREFs of sub_18006E244 @ 0x18006E244
 * Callers:
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_18006C4C8 @ 0x18006C4C8 (sub_18006C4C8.c)
 *     sub_18011CF50 @ 0x18011CF50 (sub_18011CF50.c)
 *     sub_18011D4A4 @ 0x18011D4A4 (sub_18011D4A4.c)
 *     sub_18011D9C0 @ 0x18011D9C0 (sub_18011D9C0.c)
 *     sub_180121F80 @ 0x180121F80 (sub_180121F80.c)
 *     sub_180123518 @ 0x180123518 (sub_180123518.c)
 *     sub_180124A40 @ 0x180124A40 (sub_180124A40.c)
 *     sub_180124B80 @ 0x180124B80 (sub_180124B80.c)
 *     sub_18013CEB0 @ 0x18013CEB0 (sub_18013CEB0.c)
 * Callees:
 *     sub_18006DF58 @ 0x18006DF58 (sub_18006DF58.c)
 *     sub_18006E324 @ 0x18006E324 (sub_18006E324.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006E244(_QWORD **a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
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
    sub_18006DF58((__int64)a1, (__int64 *)v8[1]);
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
        sub_18006E324(a1, v14, v9);
      }
      while ( v5 != a4 );
    }
    *a2 = v5;
  }
  return a2;
}
