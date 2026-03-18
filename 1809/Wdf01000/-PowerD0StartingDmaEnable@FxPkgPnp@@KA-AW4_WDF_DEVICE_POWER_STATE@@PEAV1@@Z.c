/*
 * XREFs of ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C008000C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingDmaEnable(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This, 1u) != 0 ? 786 : 834;
}
