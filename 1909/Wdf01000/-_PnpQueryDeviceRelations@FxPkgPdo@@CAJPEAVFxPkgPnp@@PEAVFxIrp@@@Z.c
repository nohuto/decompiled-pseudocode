/*
 * XREFs of ?_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0003A70
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003A84 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryDeviceRelations(FxPkgPdo *This, FxIrp *Irp)
{
  return FxPkgPdo::PnpQueryDeviceRelations(This, Irp);
}
