/*
 * XREFs of sub_18003F2C0 @ 0x18003F2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003F1BC @ 0x18003F1BC (sub_18003F1BC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18003F2C0(__int64 a1, char a2)
{
  sub_18003F1BC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
