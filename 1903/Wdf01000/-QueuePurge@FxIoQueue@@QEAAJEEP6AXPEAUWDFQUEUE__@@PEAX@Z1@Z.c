/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016C70
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00107DC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueuePurge @ 0x1C0016BE0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueDrain @ 0x1C0076CA0 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0078CC0 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00799E8 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0079D58 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013544 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0017F04 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0079960 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
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
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r14
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // bp
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // al
  unsigned __int16 v19; // r9
  FxVerifierLock *v21; // rcx
  const void *_a1; // rdx
  unsigned __int8 v23; // r8
  const void *v24; // rcx
  unsigned __int8 v25; // r8
  FxVerifierLock *v26; // rcx
  FxVerifierLock *v27; // rcx
  FxRequest *v28; // rdi
  _IO_CSQ_IRP_CONTEXT *v29; // rcx
  __int64 v30; // rax
  const void *v31; // r8
  const void *v32; // rcx
  const void *v33; // rcx
  FxVerifierLock *v34; // rcx
  FxVerifierLock *v35; // rcx
  FxRequest *v36; // rdi
  _IO_CSQ_IRP_CONTEXT *v37; // rcx
  __int64 v38; // rax
  unsigned __int8 v39; // r8
  unsigned __int8 v40; // r8
  const void *v41; // rcx
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  _IO_CSQ_IRP_CONTEXT *pCsqContext; // [rsp+40h] [rbp-38h] BYREF
  _IO_CSQ_IRP_CONTEXT *v45; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v21 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v21, &irql, CancelDriverRequests);
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
    FxNonPagedObject::Unlock(this, irql, v23);
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
          if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
            this->m_CancelDispatchedRequests = 1;
        }
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v26 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v26, irql, v10);
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
            && (v27 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v27, &irql, v13);
            v14 = irql;
          }
          else
          {
            v14 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
            irql = v14;
          }
          if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_Queue, 0LL, &pCsqContext) )
            break;
          v28 = (FxRequest *)&pCsqContext[-5];
          v29 = pCsqContext - 5;
          v30 = *(_QWORD *)&pCsqContext[-5].Type;
          pCsqContext[4].Irp = 0LL;
          (*(void (__fastcall **)(_IO_CSQ_IRP_CONTEXT *, __int64, __int64, const char *))(v30 + 16))(
            v29,
            1969583441LL,
            2062LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v31 = 0LL;
          v32 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v28->m_ObjectSize )
            v32 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v32, v31);
          FxObject::AddRef(
            v28,
            (void *)0x75657551,
            4048,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxIoQueue::CancelForQueue(this, v28, v14);
        }
        if ( m_Globals->FxVerboseOn )
        {
          v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v33 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v33);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v34 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v34, v14, v15);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v14);
        }
      }
      if ( CancelDriverRequests )
      {
        while ( 1 )
        {
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v35 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v35, &irql, v13);
            v16 = irql;
          }
          else
          {
            v16 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
            irql = v16;
          }
          if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_DriverCancelable, 0LL, &v45) )
            break;
          v36 = (FxRequest *)&v45[-5];
          v37 = v45 - 5;
          v38 = *(_QWORD *)&v45[-5].Type;
          v45[4].Irp = 0LL;
          (*(void (__fastcall **)(_IO_CSQ_IRP_CONTEXT *, __int64, __int64, const char *))(v38 + 16))(
            v37,
            1969583441LL,
            2062LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v36->m_Canceled = 1;
          FxNonPagedObject::Unlock(this, v16, v39);
          FxObject::AddRef(
            v36,
            (void *)0x75657551,
            4093,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxIoQueue::CancelForDriver(this, v36, v40);
        }
        if ( m_Globals->FxVerboseOn )
        {
          v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v41 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v41);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v42 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v42, v16, v17);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v16);
        }
      }
      if ( this->m_SupportForwardProgress )
        FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v43 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v43, &irql, v13);
        v18 = irql;
      }
      else
      {
        v18 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      }
      FxIoQueue::DispatchEvents(this, v18, 0LL, v19);
      return 0LL;
    }
    v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v24 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, v24, (__int64)_a2, -1073741808);
    FxNonPagedObject::Unlock(this, irql, v25);
    return 3221225488LL;
  }
}
