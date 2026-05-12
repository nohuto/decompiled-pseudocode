/*
 * XREFs of RaidUnitPowerCycleCheck @ 0x1C0043200
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C000717C (RaidUnitAdaptiveIdleTimeout.c)
 */

void __fastcall RaidUnitPowerCycleCheck(__int64 a1, __int64 a2)
{
  RaidUnitAdaptiveIdleTimeout(a2);
}
