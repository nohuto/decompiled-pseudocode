/*
 * XREFs of ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00145C8
 * Callers:
 *     imp_WdfRequestSend @ 0x1C00017C0 (imp_WdfRequestSend.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008750 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001468C (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C60DC (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C638C (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::PreProcessSendAndForget(FxRequest *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *v4; // rdx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyPreProcessSendAndForget(this, m_Globals);
  if ( !this->m_NextStackLocationFormatted )
  {
    m_Irp = this->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( !this->m_Reserved )
  {
    if ( !FxObject::EarlyDispose(this) )
    {
      v4 = this->m_Globals;
      if ( v4->FxVerifierOn )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v4);
    }
    FxObject::DestroyChildren(this);
  }
}
