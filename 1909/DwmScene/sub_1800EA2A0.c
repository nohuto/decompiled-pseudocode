/*
 * XREFs of sub_1800EA2A0 @ 0x1800EA2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EA274 @ 0x1800EA274 (sub_1800EA274.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800EA2A0(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800EA274(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
