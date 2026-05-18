/*
 * XREFs of sub_180018060 @ 0x180018060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001789C @ 0x18001789C (sub_18001789C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180018060(__int64 a1, char a2)
{
  sub_18001789C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
