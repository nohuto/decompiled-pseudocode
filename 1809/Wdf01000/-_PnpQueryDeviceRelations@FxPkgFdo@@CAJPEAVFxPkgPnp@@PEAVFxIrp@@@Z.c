/*
 * XREFs of ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000F2B4 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::_PnpQueryDeviceRelations(FxPkgFdo *This, FxIrp *Irp)
{
  return FxPkgFdo::PnpQueryDeviceRelations(This, Irp);
}
