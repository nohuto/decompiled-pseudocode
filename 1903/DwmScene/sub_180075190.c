/*
 * XREFs of sub_180075190 @ 0x180075190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180074DAC @ 0x180074DAC (sub_180074DAC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180075190(__int64 a1, char a2)
{
  sub_180074DAC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
