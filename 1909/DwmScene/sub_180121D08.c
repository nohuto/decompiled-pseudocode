/*
 * XREFs of sub_180121D08 @ 0x180121D08
 * Callers:
 *     sub_18012212C @ 0x18012212C (sub_18012212C.c)
 * Callees:
 *     sub_180120CCC @ 0x180120CCC (sub_180120CCC.c)
 *     sub_1801219F4 @ 0x1801219F4 (sub_1801219F4.c)
 *     sub_180123814 @ 0x180123814 (sub_180123814.c)
 */

__int64 __fastcall sub_180121D08(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = -2LL;
  v8[0] = a1;
  v6 = *(_QWORD **)*a1;
  try
  {
    while ( a2 != a3 )
    {
      if ( v6 == (_QWORD *)*a1 )
      {
        while ( a2 != a3 )
        {
          sub_180120CCC((__int64)a1, *a1, (__int64)(a2 + 2));
          a2 = (_QWORD *)*a2;
        }
        return sub_180123814(a1, v8, v6, *a1);
      }
      sub_1801219F4((__int64)a1, (__int64)v6, (__int64)(a2 + 2));
      a2 = (_QWORD *)*a2;
      v6 = (_QWORD *)*v6;
    }
  }
  catch ( ... )
  {
    sub_18012340C(v8[0]);
    throw;
  }
  return sub_180123814(a1, v8, v6, *a1);
}
