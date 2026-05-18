/*
 * XREFs of sub_18006E354 @ 0x18006E354
 * Callers:
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_18006C5D8 @ 0x18006C5D8 (sub_18006C5D8.c)
 *     sub_18011D060 @ 0x18011D060 (sub_18011D060.c)
 *     sub_18011D5B4 @ 0x18011D5B4 (sub_18011D5B4.c)
 *     sub_18011DAD0 @ 0x18011DAD0 (sub_18011DAD0.c)
 *     sub_180122090 @ 0x180122090 (sub_180122090.c)
 *     sub_180123628 @ 0x180123628 (sub_180123628.c)
 *     sub_180124B50 @ 0x180124B50 (sub_180124B50.c)
 *     sub_180124C90 @ 0x180124C90 (sub_180124C90.c)
 *     sub_18013CFC0 @ 0x18013CFC0 (sub_18013CFC0.c)
 * Callees:
 *     sub_18006E068 @ 0x18006E068 (sub_18006E068.c)
 *     sub_18006E434 @ 0x18006E434 (sub_18006E434.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006E354(_QWORD **a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
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
    sub_18006E068((__int64)a1, (__int64 *)v8[1]);
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
        sub_18006E434(a1, v14, v9);
      }
      while ( v5 != a4 );
    }
    *a2 = v5;
  }
  return a2;
}
