/*
 * XREFs of sub_1800B6570 @ 0x1800B6570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800B6570(__int64 a1, char a2)
{
  sub_1800CEA90(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
