/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C00073F0
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000AFB0 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0019384 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067BC4 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00680C0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00686CC (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050258 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoTarget *m_Target; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r11
  void *m_TargetCompletionContext; // r9
  FxRequestContext *v7; // r8
  unsigned __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  void (__fastcall *v12)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rbp
  _IRP *m_Irp; // rax
  FxIoTarget *v14; // rax
  void *v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  _FX_DRIVER_GLOBALS *v18; // rax
  _DWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  _IO_STATUS_BLOCK IoStatus; // [rsp+38h] [rbp-50h]
  _QWORD v21[6]; // [rsp+48h] [rbp-40h] BYREF

  m_Globals = this->m_Globals;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Globals = this->m_Globals;
  }
  if ( m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    v18 = this->m_Globals;
    if ( v18->FxVerifierOn )
    {
      if ( v18->FxVerifierIO )
        FxRequestBase::ClearVerifierFlags(this, 128);
    }
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestContext->m_CompletionParams.IoStatus = this->m_Irp.m_Irp->IoStatus;
    this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( m_Completion )
    {
      m_TargetCompletionContext = this->m_TargetCompletionContext;
      v7 = this->m_RequestContext;
      v8 = 0LL;
      this->m_TargetCompletionContext = 0LL;
      v9 = m_Target->m_ObjectSize == 0;
      this->m_CompletionRoutine.m_Completion = 0LL;
      if ( !v9 )
        v8 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
      v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      p_m_CompletionParams = &v7->m_CompletionParams;
      if ( !this->m_ObjectSize )
        v10 = 0LL;
      m_Completion((WDFREQUEST__ *)v10, (WDFIOTARGET__ *)v8, p_m_CompletionParams, m_TargetCompletionContext);
    }
  }
  else
  {
    v12 = this->m_CompletionRoutine.m_Completion;
    if ( v12 )
    {
      m_Irp = this->m_Irp.m_Irp;
      v19[1] = 255;
      v19[0] = 0;
      memset(v21, 0, sizeof(v21));
      IoStatus = m_Irp->IoStatus;
      memset(v21, 0, sizeof(v21));
      v14 = this->m_Target;
      v15 = this->m_TargetCompletionContext;
      this->m_TargetCompletionContext = 0LL;
      v16 = 0LL;
      v9 = v14->m_ObjectSize == 0;
      this->m_CompletionRoutine.m_Completion = 0LL;
      if ( !v9 )
        v16 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v17 = 0LL;
      if ( this->m_ObjectSize )
        v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v12((WDFREQUEST__ *)v17, (WDFIOTARGET__ *)v16, (_WDF_REQUEST_COMPLETION_PARAMS *)v19, v15);
    }
  }
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
