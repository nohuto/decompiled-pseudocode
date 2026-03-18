/*
 * XREFs of ?PowerInitialConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00814C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00807F4 (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialConnectInterruptFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerConnectInterruptFailed(This);
  return 836LL;
}
