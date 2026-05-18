/*
 * XREFs of sub_1800180D0 @ 0x1800180D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001790C @ 0x18001790C (sub_18001790C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800180D0(__int64 a1, char a2)
{
  sub_18001790C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
