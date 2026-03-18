/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00092E0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004AF90 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050258 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C00780A0 (WPP_IFR_SF_Lqd.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0079580 (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFQUEUE__ *v5; // r14
  unsigned __int8 m_CompletionState; // al
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int16 m_ObjectSize; // dx
  WDFREQUEST__ *_a1; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // bp
  _IO_STACK_LOCATION *v13; // rcx
  unsigned int v14; // ebp
  void (__fastcall *v15)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  FxCallbackLock *v18; // rcx
  FxCallbackLock *v19; // rcx
  _IO_STACK_LOCATION *v20; // rcx
  unsigned int LowPart; // ebp
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  unsigned __int64 Options; // r12
  unsigned __int64 v24; // r13
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v26; // rdx
  void (__fastcall *v27)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxCallbackLock *v28; // rcx
  _FX_DRIVER_GLOBALS *v29; // rdx
  const void *v30; // rcx
  _LIST_ENTRY *Blink; // rcx
  unsigned int Length; // ebp
  unsigned __int16 v33; // ax
  const void *_a2; // rdi
  __int64 v35; // r8
  FxIoQueueIoWrite *p_m_IoRead; // rcx
  WDFQUEUE__ *v37; // rdx
  unsigned int v38; // r9d
  WDFREQUEST__ *v39; // r8
  unsigned int v40; // ebp
  unsigned __int16 v41; // ax
  const void *v42; // rdi
  const void *v43; // rax
  unsigned __int16 v44; // ax
  const void *v45; // rdi
  unsigned __int16 v46; // ax
  const void *v47; // rdi
  __int16 m_VerifierFlags; // di
  unsigned __int8 v49[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 v50; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 v51; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v52; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(pRequest, &PreviousIrql);
    v29 = pRequest->m_Globals;
    if ( v29->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(pRequest, v29);
    FxNonPagedObject::Unlock(pRequest, PreviousIrql);
  }
  v5 = 0LL;
  if ( pRequest->m_Completed )
  {
    v30 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v30 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v30);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      v7 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v7);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(pRequest, 9);
  else
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3219,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_ObjectSize = pRequest->m_ObjectSize;
  _a1 = 0LL;
  if ( m_ObjectSize )
    _a1 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( this->m_IoRead.Method )
    {
      Length = CurrentStackLocation->Parameters.Read.Length;
      if ( !Length && !this->m_AllowZeroLengthRequests )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v33 = this->m_ObjectSize;
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v33 )
            _a2 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
        }
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v35 = 3261LL;
          goto LABEL_111;
        }
        return;
      }
      pRequest->m_Presented = 1;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      p_m_IoRead = (FxIoQueueIoWrite *)&this->m_IoRead;
      v37 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v38 = Length;
      v39 = _a1;
      if ( !this->m_ObjectSize )
        v37 = 0LL;
LABEL_73:
      FxIoQueueIoWrite::Invoke(p_m_IoRead, v37, v39, v38);
      goto LABEL_22;
    }
  }
  else
  {
    if ( MajorFunction != 4 )
    {
      if ( MajorFunction == 14 )
      {
        if ( this->m_IoDeviceControl.Method )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          v20 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          LowPart = v20->Parameters.Read.ByteOffset.LowPart;
          if ( this->m_ObjectSize )
            v5 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          Method = this->m_IoDeviceControl.Method;
          Options = v20->Parameters.Create.Options;
          v24 = v20->Parameters.Read.Length;
          if ( !Method )
            goto LABEL_22;
          m_CallbackLock = this->m_IoDeviceControl.m_CallbackLock;
          v50 = 0;
          if ( m_CallbackLock )
          {
            m_CallbackLock->Lock(m_CallbackLock, &v50);
            this->m_IoDeviceControl.Method(v5, _a1, v24, Options, LowPart);
          }
          else
          {
            Method(v5, _a1, v24, Options, LowPart);
          }
          v19 = this->m_IoDeviceControl.m_CallbackLock;
          if ( !v19 )
            goto LABEL_22;
          v26 = v50;
LABEL_34:
          v19->Unlock(v19, v26);
LABEL_22:
          if ( !m_Globals->FxVerifierOn )
            return;
          FxNonPagedObject::Lock(pRequest, v49);
          m_VerifierFlags = pRequest->m_VerifierFlags;
          FxNonPagedObject::Unlock(pRequest, v49[0]);
          if ( (m_VerifierFlags & 4) == 0 )
            FxRequestBase::ClearVerifierFlags(pRequest, 8);
          v35 = 3465LL;
LABEL_111:
          pRequest->Release(
            pRequest,
            (void *)1952543827,
            v35,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          return;
        }
      }
      else if ( MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, _a1);
        v13 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v14 = v13->Parameters.Read.ByteOffset.LowPart;
        if ( this->m_ObjectSize )
          v5 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v15 = this->m_IoInternalDeviceControl.Method;
        v16 = v13->Parameters.Create.Options;
        v17 = v13->Parameters.Read.Length;
        if ( !v15 )
          goto LABEL_22;
        v18 = this->m_IoInternalDeviceControl.m_CallbackLock;
        v51 = 0;
        if ( v18 )
        {
          v18->Lock(v18, &v51);
          this->m_IoInternalDeviceControl.Method(v5, _a1, v17, v16, v14);
        }
        else
        {
          v15(v5, _a1, v17, v16, v14);
        }
        v19 = this->m_IoInternalDeviceControl.m_CallbackLock;
        if ( !v19 )
          goto LABEL_22;
        v26 = v51;
        goto LABEL_34;
      }
      goto LABEL_35;
    }
    if ( this->m_IoWrite.Method )
    {
      v40 = CurrentStackLocation->Parameters.Read.Length;
      if ( !v40 && !this->m_AllowZeroLengthRequests )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v41 = this->m_ObjectSize;
          v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v41 )
            v42 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, _a1, v42);
        }
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v35 = 3300LL;
          goto LABEL_111;
        }
        return;
      }
      pRequest->m_Presented = 1;
      if ( m_Globals->FxVerboseOn )
      {
        v43 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v43 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v43);
      }
      p_m_IoRead = &this->m_IoWrite;
      v37 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v38 = v40;
      v39 = _a1;
      if ( !this->m_ObjectSize )
        v37 = 0LL;
      goto LABEL_73;
    }
  }
LABEL_35:
  if ( !this->m_IoDefault.Method )
  {
    WPP_IFR_SF_Lqd(
      m_Globals,
      m_ObjectSize,
      v8,
      0x3Bu,
      WPP_FxIoQueue_cpp_Traceguids,
      MajorFunction,
      pRequest,
      -1073741808);
    FxRequest::Complete(pRequest, -1073741808);
    if ( m_Globals->FxVerifierOn )
    {
      v35 = 3436LL;
      goto LABEL_111;
    }
    return;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  if ( this->m_AllowZeroLengthRequests )
    goto LABEL_39;
  if ( MajorFunction != 3 )
  {
    if ( MajorFunction == 4 && !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
    {
      FxRequest::Complete(pRequest, 0);
      if ( m_Globals->FxVerboseOn )
      {
        v46 = this->m_ObjectSize;
        v47 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v46 )
          v47 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, _a1, v47);
      }
      if ( m_Globals->FxVerifierOn )
      {
        v35 = 3405LL;
        goto LABEL_111;
      }
      return;
    }
LABEL_39:
    pRequest->m_Presented = 1;
    if ( this->m_ObjectSize )
      v5 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v27 = this->m_IoDefault.Method;
    if ( !v27 )
      goto LABEL_22;
    v28 = this->m_IoDefault.m_CallbackLock;
    v52 = 0;
    if ( v28 )
    {
      v28->Lock(v28, &v52);
      this->m_IoDefault.Method(v5, _a1);
    }
    else
    {
      v27(v5, _a1);
    }
    v19 = this->m_IoDefault.m_CallbackLock;
    if ( !v19 )
      goto LABEL_22;
    v26 = v52;
    goto LABEL_34;
  }
  if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
    goto LABEL_39;
  if ( m_Globals->FxVerboseOn )
  {
    v44 = this->m_ObjectSize;
    v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v44 )
      v45 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, _a1, v45);
  }
  FxRequest::Complete(pRequest, 0);
  if ( m_Globals->FxVerifierOn )
  {
    v35 = 3384LL;
    goto LABEL_111;
  }
}
