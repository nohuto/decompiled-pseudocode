/*
 * XREFs of ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067BC4
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0068470 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C00073F0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000B1A4 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000B1D0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::HandleFailedResubmit(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  FxRequestBase *_a1; // rax
  unsigned __int8 v9; // r8
  FxRequestBase *v10; // rbp
  _IRP *m_Irp; // rax
  unsigned __int8 v12; // di
  unsigned __int8 v13; // r8
  _FX_DRIVER_GLOBALS *v14; // rcx
  FxRequestBase *v15; // rdx
  _FX_DRIVER_GLOBALS *v16; // rcx
  const void *v17; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

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
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  v10 = (FxRequestBase *)v6;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v12 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v9);
  FxNonPagedObject::Unlock(this, irql, v13);
  v14 = this->m_Globals;
  if ( v14->FxVerboseOn )
  {
    v15 = Request;
    if ( !Request->m_ObjectSize )
      v10 = 0LL;
    if ( v10 )
      v15 = v10;
    WPP_IFR_SF_q(v14, 5u, 0xEu, 0x2Fu, WPP_FxIoTarget_cpp_Traceguids, v15);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v12 )
  {
    v16 = this->m_Globals;
    if ( v16->FxVerboseOn )
    {
      v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_qq(v16, 5u, 0xEu, 0x30u, WPP_FxIoTarget_cpp_Traceguids, v17, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
