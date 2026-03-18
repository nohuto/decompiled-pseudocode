/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067A30
 * Callers:
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0066AEC (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00683E0 (-_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0073C7C (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C00030C0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000AECC (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000AF34 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000AF60 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  FxRequestBase *_a1; // rax
  unsigned __int8 v9; // r14
  char v10; // bp
  unsigned __int8 v11; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v13; // r8
  unsigned __int64 v14; // rcx
  FxRequestBase *v15; // rax
  _FX_DRIVER_GLOBALS *v16; // rcx
  FxRequestBase *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // rcx
  const void *v19; // r10
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v6 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( m_Globals->FxVerboseOn )
  {
    v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v7 = 0LL;
    _a1 = Request;
    if ( v7 )
      _a1 = (FxRequestBase *)v7;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v9 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v10 = 1;
  Request->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Request)
    && _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    if ( (Request->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Request->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v9 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v11);
  }
  else
  {
    v14 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v15 = Request;
    if ( !Request->m_ObjectSize )
      v14 = 0LL;
    if ( v14 )
      v15 = (FxRequestBase *)v14;
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, v15);
    v10 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v13);
  if ( v10 )
  {
    v16 = this->m_Globals;
    if ( v16->FxVerboseOn )
    {
      v17 = Request;
      if ( !Request->m_ObjectSize )
        v6 = 0LL;
      if ( v6 )
        v17 = (FxRequestBase *)v6;
      WPP_IFR_SF_q(v16, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v17);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v9 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v19 = 0LL;
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v19, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v10 )
    FxIoTarget::DecrementIoCount(this);
}
