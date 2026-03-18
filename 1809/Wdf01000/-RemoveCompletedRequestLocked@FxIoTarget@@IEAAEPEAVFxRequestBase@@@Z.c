/*
 * XREFs of ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000AF60
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000AD40 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0019354 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067534 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067A30 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0068040 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 */

unsigned __int8 __fastcall FxIoTarget::RemoveCompletedRequestLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *Flink; // rcx
  $A3173470F8A533D5F67D6DF0520578B2 *v7; // rax
  _IRP *Irp; // rdx
  unsigned __int8 m_TargetFlags; // si
  _FX_DRIVER_GLOBALS *v10; // rax
  FxRequestBase *_a2; // r10
  unsigned __int64 v13; // r8
  const void *_a1; // rdx
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r8
  FxIoTarget_vtbl *v17; // rax
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v13 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v13 = 0LL;
    if ( v13 )
      _a2 = (FxRequestBase *)v13;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x28u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  Flink = Request->m_ListEntry.Flink;
  v7 = &Request->120;
  if ( ($A3173470F8A533D5F67D6DF0520578B2 *)Flink->Blink != &Request->120
    || (Irp = Request->m_CsqContext.Irp, *($A3173470F8A533D5F67D6DF0520578B2 **)&Irp->Type != v7) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Irp->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)Irp;
  Request->m_CsqContext.Irp = (_IRP *)&Request->120;
  v7->m_ListEntry.Flink = (_LIST_ENTRY *)v7;
  m_TargetFlags = Request->m_TargetFlags;
  Request->m_TargetFlags = m_TargetFlags & 0xE2;
  v10 = this->m_Globals;
  if ( v10->FxVerifierOn && v10->FxVerifierIO )
  {
    FxNonPagedObject::Lock(Request, &PreviousIrql, a3);
    v15 = PreviousIrql;
    Request->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Request, v15, v16);
  }
  if ( this->m_Removing )
  {
    if ( this->m_SentIoListHead.Flink == &this->m_SentIoListHead
      && this->m_IgnoredIoListHead.Flink == &this->m_IgnoredIoListHead )
    {
      v17 = this->__vftable;
      this->m_Removing = 0;
      v17->ClearTargetPointers(this);
      return 1;
    }
  }
  else if ( this->m_WaitingForSentIo
         && (m_TargetFlags & 0x10) == 0
         && this->m_SentIoListHead.Flink == &this->m_SentIoListHead )
  {
    this->m_WaitingForSentIo = 0;
    return 1;
  }
  return 0;
}
