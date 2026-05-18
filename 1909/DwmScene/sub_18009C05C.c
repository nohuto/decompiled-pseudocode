/*
 * XREFs of sub_18009C05C @ 0x18009C05C
 * Callers:
 *     sub_18012F3FE @ 0x18012F3FE (sub_18012F3FE.c)
 * Callees:
 *     sub_180098670 @ 0x180098670 (sub_180098670.c)
 */

__int64 __fastcall sub_18009C05C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_180098670(v4);
      v4 += 11;
    }
    while ( v4 != a3 );
  }
  return result;
}
