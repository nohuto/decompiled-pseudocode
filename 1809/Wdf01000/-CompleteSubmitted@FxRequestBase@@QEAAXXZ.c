/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C00030C0
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000AD40 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0019354 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067534 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067A30 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0068040 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050968 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoTarget *m_Target; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rsi
  void *m_TargetCompletionContext; // r9
  FxRequestContext *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  _IRP *m_Irp; // rax
  FxIoTarget *v12; // rax
  unsigned __int64 v13; // r10
  _FX_DRIVER_GLOBALS *v14; // rax
  char v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-54h]
  _IO_STATUS_BLOCK IoStatus; // [rsp+38h] [rbp-50h]
  _BYTE v18[48]; // [rsp+48h] [rbp-40h] BYREF

  m_Globals = this->m_Globals;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00ABE58.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00ABE58.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Globals = this->m_Globals;
  }
  if ( m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    v14 = this->m_Globals;
    if ( v14->FxVerifierOn )
    {
      if ( v14->FxVerifierIO )
        FxRequestBase::ClearVerifierFlags(this, 128);
    }
  }
  m_RequestContext = this->m_RequestContext;
  if ( !m_RequestContext )
  {
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_11;
    m_Irp = this->m_Irp.m_Irp;
    v16 = 255;
    IoStatus = m_Irp->IoStatus;
    memset(v18, 0, sizeof(v18));
    v12 = this->m_Target;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)&v15;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v13 = 0LL;
    this->m_TargetCompletionContext = 0LL;
    if ( v12->m_ObjectSize )
      v13 = (unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = 0LL;
    if ( this->m_ObjectSize )
      v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v8 = v13;
    goto LABEL_10;
  }
  m_RequestContext->m_CompletionParams.IoStatus = this->m_Irp.m_Irp->IoStatus;
  this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
  m_Completion = this->m_CompletionRoutine.m_Completion;
  if ( m_Completion )
  {
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v7 = this->m_RequestContext;
    v8 = 0LL;
    this->m_TargetCompletionContext = 0LL;
    if ( m_Target->m_ObjectSize )
      v8 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    p_m_CompletionParams = &v7->m_CompletionParams;
    if ( !this->m_ObjectSize )
      v9 = 0LL;
LABEL_10:
    this->m_CompletionRoutine.m_Completion = 0LL;
    m_Completion((WDFREQUEST__ *)v9, (WDFIOTARGET__ *)v8, p_m_CompletionParams, m_TargetCompletionContext);
  }
LABEL_11:
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
