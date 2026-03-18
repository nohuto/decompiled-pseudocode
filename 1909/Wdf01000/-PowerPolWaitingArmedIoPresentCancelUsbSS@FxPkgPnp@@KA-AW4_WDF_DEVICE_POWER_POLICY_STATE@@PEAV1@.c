/*
 * XREFs of ?PowerPolWaitingArmedIoPresentCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C030
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C008C430 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedIoPresentCancelUsbSS(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1467 : 1344;
}
