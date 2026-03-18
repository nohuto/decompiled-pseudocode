/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0086DEC
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008EEE0 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqdq @ 0x1C007C4E4 (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0083530 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int PnpDeviceState; // r8d
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a3; // r10
  _FX_DRIVER_GLOBALS *v9; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  PnpDeviceState = FxPkgPnp::HandleQueryPnpDeviceState(this, Irp->m_Irp->IoStatus.Information, a3);
  Irp->m_Irp->IoStatus.Information = PnpDeviceState;
  m_DeviceBase = this->m_DeviceBase;
  _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    (unsigned __int8)m_DeviceBase,
    PnpDeviceState,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    m_DeviceBase->m_DeviceObject.m_DeviceObject,
    PnpDeviceState,
    Irp->m_Irp);
  v9 = this->m_Globals;
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_(v9, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
