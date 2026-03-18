/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000D6C4
 * Callers:
 *     imp_WdfRequestSend @ 0x1C00017C0 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C000EA98 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C006504C (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00662D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C006861C (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C006AEB0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C006BC90 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C006C500 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006E210 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0070CDC (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C0072C88 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0073000 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00736AC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0074AD0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0075758 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C0075990 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C000E9E4 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000EA30 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00192B8 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     WPP_IFR_SF_qD @ 0x1C00374A8 (WPP_IFR_SF_qD.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  char v8; // r12
  int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v13; // ecx
  FxTagTracker *m_TargetCompletionContext; // rax
  _FX_DRIVER_GLOBALS *v15; // rcx
  NTSTATUS v16; // ebx
  unsigned __int8 v17; // r8
  unsigned __int64 v19; // rcx
  FxRequestBase *_a2; // r8
  const void *_a1; // rdx
  FxRequestBase *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  FxRequestBase *v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // r8
  FxTargetSubmitSyncParams params; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 irql; // [rsp+C0h] [rbp+40h] BYREF
  int status; // [rsp+C8h] [rbp+48h] BYREF
  __int64 timeout; // [rsp+D0h] [rbp+50h] BYREF

  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  memset(&params.Status, 0, 24);
  status = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    v19 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = Request;
    if ( !Request->m_ObjectSize )
      v19 = 0LL;
    if ( v19 )
      _a2 = (FxRequestBase *)v19;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 5u, 0xEu, 0x24u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  v8 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v9 = *Action;
  else
    v9 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v9 |= 0x10u;
  }
  if ( (v9 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v10 = Options->Flags & 0xFFFFFFFE;
  else
    v10 = 0;
  v11 = FxIoTarget::Submit(this, Request, Options, v10) | v9;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v22 = Request;
    v23 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v23 = 0LL;
    if ( v23 )
      v22 = (FxRequestBase *)v23;
    WPP_IFR_SF_qD(m_Globals, v23, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, v22, v11);
  }
  v13 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    m_TargetCompletionContext = (FxTagTracker *)Request[-1].m_TargetCompletionContext;
  else
    m_TargetCompletionContext = 0LL;
  if ( m_TargetCompletionContext )
    FxTagTracker::UpdateTagHistory(
      m_TargetCompletionContext,
      &status,
      1754,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
      TagAddRef,
      v13);
  if ( (v11 & 1) != 0 )
  {
    v15 = this->m_Globals;
    if ( v15->FxVerboseOn )
    {
      v24 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v25 = Request;
      if ( !Request->m_ObjectSize )
        v24 = 0LL;
      if ( v24 )
        v25 = (FxRequestBase *)v24;
      WPP_IFR_SF_qq(v15, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v25, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    goto LABEL_17;
  }
  if ( (v11 & 2) != 0 )
  {
LABEL_17:
    v11 |= 0xCu;
    goto LABEL_18;
  }
  if ( (v11 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
LABEL_18:
  if ( (v11 & 4) != 0 )
  {
    if ( (v11 & 8) != 0 )
    {
      KeEnterCriticalRegion();
      v16 = KeWaitForSingleObject(
              &params,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&timeout & -(__int64)((v11 & 0x10) != 0)));
      KeLeaveCriticalRegion();
      status = v16;
      if ( v16 == 258 )
      {
        FxNonPagedObject::Lock(this, &irql, v17);
        v26 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v26, v27);
        FxRequestBase::Cancel(Request);
        KeEnterCriticalRegion();
        KeWaitForSingleObject(&params, Executive, 0, 0, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( Action )
    *Action = v11;
  if ( v8 )
    FxRequestBase::ContextReleaseAndRestore(Request);
  return (unsigned int)status;
}
