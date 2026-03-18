/*
 * XREFs of ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00831DC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryInterface(FxPkgPnp *This, FxIrp *Irp)
{
  int v4; // eax
  unsigned __int8 completeIrp; // [rsp+40h] [rbp+18h] BYREF

  v4 = FxPkgPnp::HandleQueryInterface(This, Irp, &completeIrp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, v4);
}
