/*
 * XREFs of ?PowerDxStoppedDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDisarmWake(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 854LL;
}
