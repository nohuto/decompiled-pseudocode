/*
 * XREFs of sub_18007DF9C @ 0x18007DF9C
 * Callers:
 *     sub_180131E30 @ 0x180131E30 (sub_180131E30.c)
 * Callees:
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 */

_QWORD *__fastcall sub_18007DF9C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800751C0(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
