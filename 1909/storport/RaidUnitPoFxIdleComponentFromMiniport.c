/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00388B4
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C00065D8 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  bool v3; // bl

  v3 = RaidUnitPoFxIdleComponent(a1, a2, 0, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return !v3 ? 0xC100000C : 0;
}
