/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C00073F0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000B13C (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000B1A4 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000B1D0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 */

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxRequestBase *v6; // rsi
  unsigned __int8 v7; // r14
  char v8; // bp
  _FX_DRIVER_GLOBALS *v9; // rcx
  FxRequestBase *_a1; // rax
  FxRequestBase *v12; // rax
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  const void *v15; // rcx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine
    && Irp->PendingReturned
    && Irp->CurrentLocation <= Irp->StackCount )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  m_Globals = m_Target->m_Globals;
  v6 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    v12 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Context->m_ObjectSize )
      v12 = 0LL;
    if ( !v12 )
      v12 = Context;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, v12);
  }
  v7 = 0;
  FxNonPagedObject::Lock(m_Target, &PreviousIrql);
  Context->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Context)
    && _InterlockedExchangeAdd(&Context->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v8 = 1;
    if ( (Context->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Context->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v7 = FxIoTarget::RemoveCompletedRequestLocked(m_Target, Context);
  }
  else
  {
    if ( !Context->m_ObjectSize || (_a1 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      _a1 = Context;
    WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, _a1);
    v8 = 0;
  }
  FxNonPagedObject::Unlock(m_Target, PreviousIrql);
  if ( v8 )
  {
    v9 = m_Target->m_Globals;
    if ( v9->FxVerboseOn )
    {
      if ( !Context->m_ObjectSize )
        v6 = 0LL;
      if ( !v6 )
        v6 = Context;
      WPP_IFR_SF_q(v9, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v6);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v7 )
  {
    v14 = m_Target->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Target->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qq(v14, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v15, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v8 )
    FxIoTarget::DecrementIoCount(m_Target);
  return 3221225494LL;
}
