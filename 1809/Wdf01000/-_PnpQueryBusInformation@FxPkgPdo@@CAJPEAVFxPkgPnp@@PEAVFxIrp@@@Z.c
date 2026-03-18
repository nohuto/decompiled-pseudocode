/*
 * XREFs of ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007C020
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x1C0082E84 (-HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  int BusInformation; // eax

  BusInformation = FxPkgPnp::HandleQueryBusInformation(
                     *(FxPkgPnp **)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL),
                     Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, BusInformation);
}
