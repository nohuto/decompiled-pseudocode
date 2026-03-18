/*
 * XREFs of ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C000CE0C
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C000E5D8 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00649D0 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0065C40 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C006A800 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C006B3C0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C006B630 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C006BEC0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006DC10 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C006FD1C (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00706FC (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C0072610 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C00726A8 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0072A20 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00730CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C00744F0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007517C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00753A8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0075A78 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000E1B4 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0033A78 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0067C18 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 */

void __fastcall FxSyncRequest::FxSyncRequest(
        FxSyncRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestContext *Context,
        WDFREQUEST__ *Request)
{
  unsigned __int8 v8; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequest *v10; // rcx
  FxRequestContext *m_RequestContext; // r8
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  *(_DWORD *)&this->m_Type = 4104;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, 1u);
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
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
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
