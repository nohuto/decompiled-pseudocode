/*
 * XREFs of sub_18009BF4C @ 0x18009BF4C
 * Callers:
 *     sub_18012F2EE @ 0x18012F2EE (sub_18012F2EE.c)
 * Callees:
 *     sub_180098560 @ 0x180098560 (sub_180098560.c)
 */

__int64 __fastcall sub_18009BF4C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_180098560(v4);
      v4 += 11;
    }
    while ( v4 != a3 );
  }
  return result;
}
