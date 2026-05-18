/*
 * XREFs of sub_180121BF8 @ 0x180121BF8
 * Callers:
 *     sub_18012201C @ 0x18012201C (sub_18012201C.c)
 * Callees:
 *     sub_180120BBC @ 0x180120BBC (sub_180120BBC.c)
 *     sub_1801218E4 @ 0x1801218E4 (sub_1801218E4.c)
 *     sub_180123704 @ 0x180123704 (sub_180123704.c)
 */

__int64 __fastcall sub_180121BF8(__int64 *a1, _QWORD *a2, _QWORD *a3)
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
          sub_180120BBC((__int64)a1, *a1, (__int64)(a2 + 2));
          a2 = (_QWORD *)*a2;
        }
        return sub_180123704(a1, v8, v6, *a1);
      }
      sub_1801218E4((__int64)a1, (__int64)v6, (__int64)(a2 + 2));
      a2 = (_QWORD *)*a2;
      v6 = (_QWORD *)*v6;
    }
  }
  catch ( ... )
  {
    sub_1801232FC(v8[0]);
    throw;
  }
  return sub_180123704(a1, v8, v6, *a1);
}
