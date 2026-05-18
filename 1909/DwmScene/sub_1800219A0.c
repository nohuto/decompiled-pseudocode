/*
 * XREFs of sub_1800219A0 @ 0x1800219A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020888 @ 0x180020888 (sub_180020888.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800219A0(__int64 a1, char a2)
{
  sub_180020888(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
