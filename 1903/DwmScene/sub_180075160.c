/*
 * XREFs of sub_180075160 @ 0x180075160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180075160(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800748FC(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
