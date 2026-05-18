/*
 * XREFs of sub_1800180C0 @ 0x1800180C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BB18 @ 0x18001BB18 (sub_18001BB18.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800180C0(__int64 a1, char a2)
{
  sub_18001BB18();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
