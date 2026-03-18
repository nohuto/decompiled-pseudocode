/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008EEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0086DEC (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryPnpDeviceState(FxPkgFdo *This, FxIrp *Irp)
{
  int _a1; // ebx
  unsigned __int8 v5; // r8

  _a1 = ((__int64 (__fastcall *)(FxPkgFdo *))This->SendIrpSynchronously)(This);
  if ( _a1 == -1073741637 )
  {
    _a1 = 0;
    Irp->m_Irp->IoStatus.Status = 0;
  }
  if ( _a1 < 0 )
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xCu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  else
    FxPkgFdo::HandleQueryPnpDeviceStateCompletion(This, Irp, v5);
  return FxPkgPnp::CompletePnpRequest(This, Irp, _a1);
}
