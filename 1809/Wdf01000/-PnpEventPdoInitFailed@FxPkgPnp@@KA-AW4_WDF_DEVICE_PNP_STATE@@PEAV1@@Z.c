/*
 * XREFs of ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D020
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008C30 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C005D600 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventPdoInitFailed(FxPkgPnp *This)
{
  FxObject::EarlyDispose(This->m_DeviceBase);
  FxObject::DestroyChildren(This->m_DeviceBase);
  return 309LL;
}
