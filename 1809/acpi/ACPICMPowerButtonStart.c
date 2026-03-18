/*
 * XREFs of ACPICMPowerButtonStart @ 0x1C008E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1C008E39C (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMPowerButtonStart(__int64 a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, 2147483649LL);
}
