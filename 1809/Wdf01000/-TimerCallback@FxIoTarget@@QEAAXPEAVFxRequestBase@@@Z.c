/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0068040
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C00557C0 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C00030C0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000AF34 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000AF60 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0019288 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 m_ObjectSize; // ax
  FxRequestBase *_a2; // r8
  unsigned __int64 v9; // rcx
  const void *_a1; // rdx
  unsigned __int8 v11; // r8
  char v12; // si
  unsigned __int8 m_TargetFlags; // al
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v15; // edx
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // al
  _IRP *m_Irp; // rcx
  _FX_DRIVER_GLOBALS *v19; // rcx
  unsigned __int64 v20; // r8
  FxRequestBase *v21; // rax
  const void *v22; // rdx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a2 = Request;
    v9 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v9 = 0LL;
    if ( v9 )
      _a2 = (FxRequestBase *)v9;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags &= ~4u;
  v12 = 1;
  m_TargetFlags = Request->m_TargetFlags;
  if ( (m_TargetFlags & 1) == 0 )
  {
    Request->m_TargetFlags = m_TargetFlags | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v15 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v15 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v11);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v16);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v17 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v11);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v17;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v12 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( v12 )
  {
    v19 = this->m_Globals;
    if ( v19->FxVerboseOn )
    {
      v20 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v21 = Request;
      if ( !Request->m_ObjectSize )
        v20 = 0LL;
      if ( v20 )
        v21 = (FxRequestBase *)v20;
      WPP_IFR_SF_q(v19, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, v21);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v4 )
  {
    v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v22, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v12 )
    FxIoTarget::DecrementIoCount(this);
}
