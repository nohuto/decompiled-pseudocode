/*
 * XREFs of ?PnpEventInitStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007CFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PnpEventInitStarting(FxPkgPnp *This)
{
  return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 264 : 314;
}
