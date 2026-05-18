/*
 * XREFs of sub_1800BE040 @ 0x1800BE040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD37C @ 0x1800BD37C (sub_1800BD37C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800BE040(__int64 a1, char a2)
{
  sub_1800BD37C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
