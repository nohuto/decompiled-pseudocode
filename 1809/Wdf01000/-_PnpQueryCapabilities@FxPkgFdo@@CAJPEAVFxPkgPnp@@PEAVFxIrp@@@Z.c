/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0014A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0014B80 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0014BF0 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int PnpCapsInternal; // eax
  _FX_DRIVER_GLOBALS *v7; // rcx
  int v8; // ebp
  _IRP *m_Irp; // rbx

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  PnpCapsInternal = FxPkgPnp::GetPnpCapsInternal(This);
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (PnpCapsInternal & 0x3000) == 0x1000 )
      HIDWORD(SecurityContext->SecurityQos) |= 4u;
    if ( (PnpCapsInternal & 0xC000) == 0x4000 )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( (PnpCapsInternal & 0x30000) == 0x10000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    if ( (PnpCapsInternal & 0xC0000) == 0x40000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20u;
    if ( (PnpCapsInternal & 0x3000000) == 0x1000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    if ( (PnpCapsInternal & 0x30000000) == 0x10000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    if ( This->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v7 = This->m_Globals;
  if ( v7->FxVerboseOn )
    WPP_IFR_SF_(v7, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
  v8 = This->SendIrpSynchronously(This, Irp);
  if ( v8 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp);
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)v8;
}
