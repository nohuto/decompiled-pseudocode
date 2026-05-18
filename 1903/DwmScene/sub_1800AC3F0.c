/*
 * XREFs of sub_1800AC3F0 @ 0x1800AC3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ABDC8 @ 0x1800ABDC8 (sub_1800ABDC8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800AC3F0(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800ABDC8(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
