/*
 * XREFs of sub_1800ED8F0 @ 0x1800ED8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ED838 @ 0x1800ED838 (sub_1800ED838.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800ED8F0(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800ED838(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
