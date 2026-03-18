/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007C210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqdq @ 0x1C007C4E4 (WPP_IFR_SF_qqdq.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0083530 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryPnpDeviceState(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int globals; // r8d
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a3; // r10

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x16u, WPP_FxPkgPdo_cpp_Traceguids);
  globals = FxPkgPnp::HandleQueryPnpDeviceState(This, Irp->m_Irp->IoStatus.Information);
  Irp->m_Irp->IoStatus.Information = globals;
  m_DeviceBase = This->m_DeviceBase;
  _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    m_Globals,
    (unsigned __int8)m_DeviceBase,
    globals,
    0x17u,
    WPP_FxPkgPdo_cpp_Traceguids,
    _a3,
    m_DeviceBase->m_DeviceObject.m_DeviceObject,
    globals,
    Irp->m_Irp);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x18u, WPP_FxPkgPdo_cpp_Traceguids);
  return FxPkgPnp::CompletePnpRequest(This, Irp, 0);
}
