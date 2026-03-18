/*
 * XREFs of ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DA10
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008750 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001468C (-EarlyDispose@FxObject@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventPdoInitFailed(FxPkgPnp *This)
{
  FxObject::EarlyDispose(This->m_DeviceBase);
  FxObject::DestroyChildren(This->m_DeviceBase);
  return 309LL;
}
