/*
 * XREFs of sub_18007E0AC @ 0x18007E0AC
 * Callers:
 *     sub_180131F40 @ 0x180131F40 (sub_180131F40.c)
 * Callees:
 *     sub_1800752D0 @ 0x1800752D0 (sub_1800752D0.c)
 */

_QWORD *__fastcall sub_18007E0AC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800752D0(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
