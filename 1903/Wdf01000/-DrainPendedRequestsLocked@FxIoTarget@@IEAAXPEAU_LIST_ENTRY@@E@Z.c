/*
 * XREFs of ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0067348
 * Callers:
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0067550 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C00676F0 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0067890 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000B13C (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0017F04 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x1C006712C (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  unsigned __int8 v6; // r8
  FxRequestBase *v7; // rbx
  _LIST_ENTRY *v8; // rdi
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // r8
  const void *_a1; // rdx
  _LIST_ENTRY *Blink; // rax
  _IO_CSQ_IRP_CONTEXT *pContext; // [rsp+70h] [rbp+8h] BYREF

  while ( 1 )
  {
    pContext = 0LL;
    if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_PendedQueue, 0LL, &pContext) )
      break;
    v7 = (FxRequestBase *)&pContext[-5];
    v8 = (_LIST_ENTRY *)pContext;
    pContext->Irp = (_IRP *)pContext;
    v8->Flink = v8;
    m_Irp = v7->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    v7->m_TargetFlags &= ~2u;
    if ( !RequestWillBeResent
      || FxRequestBase::CancelTimer(v7) && _InterlockedExchangeAdd(&v7->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::ClearCompletedRequestVerifierFlags(this, v7, v6);
      Blink = RequestListHead->Blink;
      if ( Blink->Flink != RequestListHead )
        __fastfail(3u);
      v8->Flink = RequestListHead;
      v8->Blink = Blink;
      Blink->Flink = v8;
      RequestListHead->Blink = v8;
    }
    else
    {
      v7->m_Irp.m_Irp->IoStatus.Status = -1073741536;
      v7->m_TargetFlags |= 1u;
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v7->m_ObjectSize )
          _a2 = 0LL;
        if ( !_a2 )
          _a2 = v7;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x10u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
      }
    }
  }
}
