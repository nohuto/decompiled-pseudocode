/*
 * XREFs of sub_18003E3B0 @ 0x18003E3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E2FC @ 0x18003E2FC (sub_18003E2FC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18003E3B0(_QWORD *a1, char a2)
{
  sub_18003E2FC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
