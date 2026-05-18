/*
 * XREFs of sub_1800EA190 @ 0x1800EA190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EA164 @ 0x1800EA164 (sub_1800EA164.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800EA190(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800EA164(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
