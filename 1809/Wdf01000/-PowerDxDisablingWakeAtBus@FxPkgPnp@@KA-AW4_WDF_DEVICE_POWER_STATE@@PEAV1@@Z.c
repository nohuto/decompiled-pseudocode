/*
 * XREFs of ?PowerDxDisablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001A950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerDxDisablingWakeAtBus(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 819LL;
}
