/*
 * XREFs of ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C007ACA8
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077848 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012C00 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1C007AF78 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, FxRequest **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // edi
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  int _a2; // eax
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  const void *_a1; // rsi
  unsigned __int64 v12; // rcx
  const void *v14; // rax
  KIRQL v15; // r15
  _LIST_ENTRY *p_m_ReservedRequestList; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v18; // r8
  FxRequest *v19; // rsi
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v22; // rcx
  unsigned __int8 v23; // r8

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
    goto LABEL_15;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyUseExamine )
  {
    Method = m_FwdProgContext->m_IoExamineIrp.Method;
    if ( !Method )
      goto LABEL_20;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    _a2 = Method((WDFQUEUE__ *)v12, Irp);
    if ( (unsigned int)(_a2 - 1) > 1 )
    {
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, _a1, _a2, 0xC0000001);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225473LL;
    }
    goto LABEL_16;
  }
  if ( m_FwdProgContext->m_Policy != WdfIoForwardProgressReservedPolicyPagingIO )
    goto LABEL_20;
  if ( (Irp->Flags & 2) != 0 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 13 )
LABEL_15:
    _a2 = 2;
  else
    _a2 = 1;
LABEL_16:
  if ( _a2 == 1 )
  {
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v14, (__int64)Irp, -1073741823);
    return 3221225473LL;
  }
LABEL_20:
  v15 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
  Flink = p_m_ReservedRequestList->Flink;
  if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
  {
    v5 = FxIoQueue::QueueForwardProgressIrpLocked(this, Irp);
  }
  else
  {
    if ( Flink->Blink != p_m_ReservedRequestList
      || (v18 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_m_ReservedRequestList->Flink = v18,
          v19 = (FxRequest *)&Flink[-20],
          v18->Blink = p_m_ReservedRequestList,
          p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList,
          Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink,
          Blink->Flink != p_m_ReservedRequestInUseList) )
    {
      __fastfail(3u);
    }
    Flink->Flink = p_m_ReservedRequestInUseList;
    Flink->Blink = Blink;
    Blink->Flink = Flink;
    p_m_ReservedRequestInUseList->Blink = Flink;
    v19->m_Irp.m_Irp = Irp;
    FxRequest::AssignMemoryBuffers((FxRequest *)&Flink[-20], (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v22, 1024, v23);
    *ReservedRequest = v19;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v15);
  return v5;
}
