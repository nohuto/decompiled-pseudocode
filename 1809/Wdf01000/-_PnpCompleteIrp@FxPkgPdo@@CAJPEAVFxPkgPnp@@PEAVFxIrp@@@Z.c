/*
 * XREFs of ?_PnpCompleteIrp@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

int __fastcall FxPkgPdo::_PnpCompleteIrp(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePnpRequest(This, Irp, Irp->m_Irp->IoStatus.Status);
}
