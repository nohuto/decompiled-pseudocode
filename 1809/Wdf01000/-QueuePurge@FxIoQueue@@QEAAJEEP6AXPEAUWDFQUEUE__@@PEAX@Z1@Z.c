/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00101EC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueuePurge @ 0x1C00163A0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueDrain @ 0x1C00766C0 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0078500 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0079138 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00794A8 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013154 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0018020 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0078074 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C00790B8 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v10; // r8
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // ecx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r14
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  unsigned __int16 v20; // r9
  FxVerifierLock *v22; // rcx
  const void *_a1; // rdx
  unsigned __int8 v24; // r8
  const void *v25; // rcx
  unsigned __int8 v26; // r8
  FxVerifierLock *v27; // rcx
  FxVerifierLock *v28; // rcx
  FxRequest *v29; // rdi
  _IO_CSQ_IRP_CONTEXT *v30; // rcx
  __int64 v31; // rax
  const void *v32; // r8
  const void *v33; // rcx
  const void *v34; // rcx
  FxVerifierLock *v35; // rcx
  FxVerifierLock *v36; // rcx
  FxRequest *v37; // rdi
  _IO_CSQ_IRP_CONTEXT *v38; // rcx
  __int64 v39; // rax
  unsigned __int8 v40; // r8
  unsigned __int8 v41; // r8
  const void *v42; // rcx
  FxVerifierLock *v43; // rcx
  FxVerifierLock *v44; // rcx
  _IO_CSQ_IRP_CONTEXT *pCsqContext; // [rsp+40h] [rbp-38h] BYREF
  _IO_CSQ_IRP_CONTEXT *v46; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v22 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v22, &irql, CancelDriverRequests);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_Deleted )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000056);
    FxNonPagedObject::Unlock(this, irql, v24);
    return 3221225558LL;
  }
  else
  {
    if ( !PurgeComplete )
      goto LABEL_7;
    _a2 = this->m_PurgeComplete.Method;
    if ( !_a2 )
    {
      this->m_PurgeCompleteContext = Context;
      this->m_PurgeComplete.Method = PurgeComplete;
LABEL_7:
      this->m_QueueState &= ~1u;
      if ( CancelQueueRequests )
      {
        if ( CancelDriverRequests )
        {
          WdfBindInfo = m_Globals->WdfBindInfo;
          Major = WdfBindInfo->Version.Major;
          if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
            this->m_CancelDispatchedRequests = 1;
        }
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v27 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v27, irql, v10);
      }
      else
      {
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      }
      if ( CancelQueueRequests )
      {
        while ( 1 )
        {
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v28 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v28, &irql, v14);
            v15 = irql;
          }
          else
          {
            v15 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
            irql = v15;
          }
          if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_Queue, 0LL, &pCsqContext) )
            break;
          v29 = (FxRequest *)&pCsqContext[-5];
          v30 = pCsqContext - 5;
          v31 = *(_QWORD *)&pCsqContext[-5].Type;
          pCsqContext[4].Irp = 0LL;
          (*(void (__fastcall **)(_IO_CSQ_IRP_CONTEXT *, __int64, __int64, const char *))(v31 + 16))(
            v30,
            1969583441LL,
            2062LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v32 = 0LL;
          v33 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v29->m_ObjectSize )
            v33 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v33, v32);
          FxObject::AddRef(
            v29,
            (void *)0x75657551,
            4048,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxIoQueue::CancelForQueue(this, v29, v15);
        }
        if ( m_Globals->FxVerboseOn )
        {
          v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v34 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v34);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v35 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v35, v15, v16);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v15);
        }
      }
      if ( CancelDriverRequests )
      {
        while ( 1 )
        {
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v36 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v36, &irql, v14);
            v17 = irql;
          }
          else
          {
            v17 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
            irql = v17;
          }
          if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_DriverCancelable, 0LL, &v46) )
            break;
          v37 = (FxRequest *)&v46[-5];
          v38 = v46 - 5;
          v39 = *(_QWORD *)&v46[-5].Type;
          v46[4].Irp = 0LL;
          (*(void (__fastcall **)(_IO_CSQ_IRP_CONTEXT *, __int64, __int64, const char *))(v39 + 16))(
            v38,
            1969583441LL,
            2062LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v37->m_Canceled = 1;
          FxNonPagedObject::Unlock(this, v17, v40);
          FxObject::AddRef(
            v37,
            (void *)0x75657551,
            4093,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxIoQueue::CancelForDriver(this, v37, v41);
        }
        if ( m_Globals->FxVerboseOn )
        {
          v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v42 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v42);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v43 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v43, v17, v18);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v17);
        }
      }
      if ( this->m_SupportForwardProgress )
        FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v44 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v44, &irql, v14);
        v19 = irql;
      }
      else
      {
        v19 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      }
      FxIoQueue::DispatchEvents(this, v19, 0LL, v20);
      return 0LL;
    }
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, v25, (__int64)_a2, -1073741808);
    FxNonPagedObject::Unlock(this, irql, v26);
    return 3221225488LL;
  }
}
