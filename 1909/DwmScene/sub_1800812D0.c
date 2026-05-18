/*
 * XREFs of sub_1800812D0 @ 0x1800812D0
 * Callers:
 *     sub_180081208 @ 0x180081208 (sub_180081208.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800812D0(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 (__fastcall *a5)(_QWORD *, _QWORD *))
{
  _QWORD *v9; // rsi
  char v10; // al

  v9 = a2;
  do
  {
    while ( 1 )
    {
      v10 = a5(v9, a1);
      *a4 = 0LL;
      a4[1] = 0LL;
      if ( !v10 )
        break;
      *a4 = *v9;
      a4[1] = v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      a4 += 2;
      v9 += 2;
      if ( v9 == a3 )
      {
        while ( a1 != a2 )
        {
          *a4 = 0LL;
          a4[1] = 0LL;
          *a4 = *a1;
          a4[1] = a1[1];
          *a1 = 0LL;
          a1[1] = 0LL;
          a4 += 2;
          a1 += 2;
        }
        return a4;
      }
    }
    *a4 = *a1;
    a4[1] = a1[1];
    *a1 = 0LL;
    a1[1] = 0LL;
    a4 += 2;
    a1 += 2;
  }
  while ( a1 != a2 );
  while ( v9 != a3 )
  {
    *a4 = 0LL;
    a4[1] = 0LL;
    *a4 = *v9;
    a4[1] = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    a4 += 2;
    v9 += 2;
  }
  return a4;
}
