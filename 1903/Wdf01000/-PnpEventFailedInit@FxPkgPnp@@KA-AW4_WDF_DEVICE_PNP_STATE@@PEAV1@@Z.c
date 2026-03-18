/*
 * XREFs of ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D570
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C007E5F4 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0086220 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedInit(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl

  FxPkgPnp::ReleasePowerThread(This);
  This->ReleaseReenumerationInterface(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return 261LL;
}
