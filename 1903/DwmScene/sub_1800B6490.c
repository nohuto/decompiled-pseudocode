/*
 * XREFs of sub_1800B6490 @ 0x1800B6490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F98C4 @ 0x1800F98C4 (sub_1800F98C4.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800B6490(__int64 a1, char a2)
{
  sub_1800F98C4();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
