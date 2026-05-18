/*
 * XREFs of sub_18008FE40 @ 0x18008FE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F9C8 @ 0x18008F9C8 (sub_18008F9C8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18008FE40(__int64 a1, char a2)
{
  sub_18008F9C8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
