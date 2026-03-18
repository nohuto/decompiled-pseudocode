/*
 * XREFs of ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000DDFC
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C000EA98 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C006504C (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00662D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C006AEB0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C006BA20 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C006BC90 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C006C500 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006E210 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C007030C (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0070CDC (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C0072BF0 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C0072C88 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0073000 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00736AC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0074AD0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0075758 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C0075990 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007605C (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000B640 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0032E60 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C00682A8 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 */

void __fastcall FxSyncRequest::FxSyncRequest(
        FxSyncRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestContext *Context,
        WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *v4; // r14
  unsigned __int8 v8; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequest *v10; // rcx
  FxRequestContext *m_RequestContext; // r8
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  v4 = FxDriverGlobals;
  *(_DWORD *)&this->m_Type = 4104;
  LOBYTE(FxDriverGlobals) = 1;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, FxDriverGlobals);
  this->__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      pRequest = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&pRequest, m_Globals, this);
      this[-1].m_DestroyedEvent.m_Event.m_Event.Header.WaitListHead.Blink = (_LIST_ENTRY *)pRequest;
    }
  }
  this->m_Irp.m_Irp = 0LL;
  this->m_CancelRoutine.m_Cancel = 0LL;
  this->m_CompletionRoutine.m_Completion = 0LL;
  v8 = this->m_Irp.m_Irp == 0LL;
  *(_WORD *)&this->m_TargetFlags = 0;
  this->m_CanComplete = 1;
  this->m_Completed = v8;
  this->m_Target = 0LL;
  this->m_TargetCompletionContext = 0LL;
  this->m_Canceled = 0;
  this->m_PriorityBoost = 0;
  this->m_RequestContext = 0LL;
  this->m_Timer = 0LL;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
  this->__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  this->m_DrainSingleEntry.Next = 0LL;
  *(_QWORD *)&this->m_SystemBufferOffset = 0LL;
  this->m_IrpQueue = 0LL;
  *(_DWORD *)&this->m_OutputBufferOffset = 0;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_AllocatedMdl = 0LL;
  this->m_CompletionState = 0;
  this->m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_DestroyedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  this->m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_ClearContextOnDestroy = Context != 0LL;
  this->m_RequestContext = Context;
  if ( Request )
  {
    FxObjectHandleGetPtr(v4, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
    v10 = pRequest;
    this->m_TrueRequest = pRequest;
    m_RequestContext = v10->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(v10->m_RequestContext, v10);
      v10 = pRequest;
    }
    FxRequestBase::SetContext(v10, Context);
    pRequest->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    this->m_RequestBaseFlags |= 0x10u;
    this->m_TrueRequest = this;
  }
  this->m_ObjectSize = 0;
}
