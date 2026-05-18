/*
 * XREFs of sub_18003E2A0 @ 0x18003E2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E1EC @ 0x18003E1EC (sub_18003E1EC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18003E2A0(_QWORD *a1, char a2)
{
  sub_18003E1EC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
