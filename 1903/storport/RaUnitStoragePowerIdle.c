/*
 * XREFs of RaUnitStoragePowerIdle @ 0x1C00017B8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006588 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStoragePowerIdle(__int64 a1, IRP *a2)
{
  if ( (unsigned __int8)((__int64 (*)(void))RaidUnitCheckAndAcquirePoFx)() )
  {
    RaidUnitPoFxIdleComponent(a1, 0LL, 2LL);
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
  return RaidCompleteRequestEx(a2);
}
