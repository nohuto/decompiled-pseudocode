/*
 * XREFs of RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003B8DC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0009458 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromMiniport(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // bl

  v4 = RaidUnitPoFxActivateComponent(a1, a2, a3, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return v4 == 0 ? 0xC100000C : 0;
}
