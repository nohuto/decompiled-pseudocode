/*
 * XREFs of ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0077454
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077208 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014728 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B860 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxPkgIo::DispathToInCallerContextCallback(
        FxPkgIo *this,
        FxIoInCallerContext *InCallerContextInfo,
        FxRequest *Request,
        _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 m_ObjectSize; // dx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 v10; // r8
  WDFREQUEST__ *v11; // rbx
  WDFDEVICE__ *v12; // rcx

  m_Globals = this->m_Globals;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(Request, 33, (unsigned __int8)Request);
  FxRequest::SetCompletionState(Request, FxRequestCompletionStateIoPkg);
  Request->Release(Request, (void *)1952543827, 1740, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  m_ObjectSize = Request->m_ObjectSize;
  Request->m_Presented = 1;
  m_DeviceBase = this->m_DeviceBase;
  v10 = m_DeviceBase->m_ObjectSize;
  if ( InCallerContextInfo->m_Method )
  {
    v11 = (WDFREQUEST__ *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v11 = 0LL;
    v12 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v10 )
      v12 = 0LL;
    InCallerContextInfo->m_Method(v12, v11);
  }
  return 259LL;
}
