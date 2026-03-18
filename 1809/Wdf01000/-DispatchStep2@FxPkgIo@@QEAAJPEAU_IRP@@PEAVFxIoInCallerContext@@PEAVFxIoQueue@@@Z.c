/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077208
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C00687E0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C00509D4 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C005118C (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0077454 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C00778DC (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C007A2CC (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  char v8; // r15
  unsigned __int8 CurrentIrql; // r13
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxDevice *m_Device; // rcx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v13; // eax
  FxRequest *v14; // rsi
  int _a1; // ebx
  int ReservedRequest; // eax
  int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  FxRequest *request; // [rsp+60h] [rbp+8h] BYREF

  request = 0LL;
  if ( !Queue || (v8 = 1, !Queue->m_SupportForwardProgress) )
    v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 1u )
    KeEnterCriticalRegion();
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
  {
    m_Device = this->m_Device;
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  }
  else
  {
    m_Device = this->m_Device;
    p_RequestAttributes = &m_Device->m_RequestAttributes;
  }
  v13 = FxRequest::_CreateForPackage(m_Device, p_RequestAttributes, Irp, &request);
  v14 = request;
  _a1 = v13;
  if ( v8 )
  {
    if ( v13 < 0 )
      goto LABEL_15;
    if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, request);
  }
  if ( _a1 >= 0 )
  {
    if ( !v8 || !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_21;
    v14->m_Presented = 1;
    v18 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v14->m_ObjectSize )
      v18 = 0LL;
    v19 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Queue->m_ObjectSize )
      v19 = 0LL;
    if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *))Queue->m_FwdProgContext->m_IoResourcesAllocate.Method)(
           v19,
           v18,
           Queue->m_FwdProgContext) >= 0 )
      goto LABEL_21;
    FxRequest::FreeRequest(v14);
    request = 0LL;
    ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
    _a1 = ReservedRequest;
    if ( ReservedRequest == 259 )
      goto $IrpIsGone;
    goto LABEL_19;
  }
LABEL_15:
  if ( this->m_Filter && !Queue )
    goto $CompleteIrp;
  if ( !v8 )
  {
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
    goto $CompleteIrp;
  }
  ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
  _a1 = ReservedRequest;
  if ( ReservedRequest == 259 )
    goto $IrpIsGone;
LABEL_19:
  if ( ReservedRequest < 0 )
  {
$CompleteIrp:
    Irp->IoStatus.Status = _a1;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    goto $IrpIsGone;
  }
  v14 = request;
LABEL_21:
  if ( IoInCallerCtx && IoInCallerCtx->m_Method && !v14->m_Reserved )
  {
    v14->m_InternalContext = Queue;
    v17 = FxPkgIo::DispathToInCallerContextCallback(this, IoInCallerCtx, v14, Irp);
  }
  else
  {
    v17 = FxIoQueue::QueueRequest(Queue, v14);
  }
  _a1 = v17;
$IrpIsGone:
  if ( CurrentIrql <= 1u )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
