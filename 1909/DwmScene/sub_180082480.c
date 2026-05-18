/*
 * XREFs of sub_180082480 @ 0x180082480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008190C @ 0x18008190C (sub_18008190C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180082480(__int64 a1, char a2)
{
  sub_18008190C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
