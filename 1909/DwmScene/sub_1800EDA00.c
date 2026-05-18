/*
 * XREFs of sub_1800EDA00 @ 0x1800EDA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ED948 @ 0x1800ED948 (sub_1800ED948.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800EDA00(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800ED948(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
