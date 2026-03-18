/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013224
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001347C (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_Cancelled; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v9; // rdi
  unsigned __int64 v10; // rbp
  const void *_a2; // rcx
  const void *_a1; // rax
  unsigned __int8 v13; // r8
  void (__fastcall *m_Cancel)(WDFREQUEST__ *); // rax
  FxCallbackLock *m_IoCancelCallbackLockPtr; // rsi
  __int64 v16; // rdx
  unsigned __int8 v17; // r8
  char v19; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_Cancelled = &this->m_Cancelled;
  while ( 1 )
  {
    Flink = p_m_Cancelled->Flink;
    if ( p_m_Cancelled->Flink == p_m_Cancelled )
      break;
    v7 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v7;
    v9 = (FxRequestBase *)&Flink[-18];
    v7->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v10 = (unsigned __int64)&Flink[-18] ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a1 = (const void *)v10;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    if ( !v9->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x54u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v9, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v13);
    m_Cancel = v9->m_CancelRoutine.m_Cancel;
    m_IoCancelCallbackLockPtr = this->m_IoCancelCallbackLockPtr;
    if ( !v9->m_ObjectSize )
      v10 = 0LL;
    if ( m_Cancel )
    {
      v19 = 0;
      if ( m_IoCancelCallbackLockPtr )
      {
        m_IoCancelCallbackLockPtr->Lock(m_IoCancelCallbackLockPtr, (unsigned __int8 *)&v19);
        m_Cancel = v9->m_CancelRoutine.m_Cancel;
      }
      v9->m_CancelRoutine.m_Cancel = 0LL;
      m_Cancel((WDFREQUEST__ *)v10);
      if ( m_IoCancelCallbackLockPtr )
      {
        LOBYTE(v16) = v19;
        m_IoCancelCallbackLockPtr->Unlock(m_IoCancelCallbackLockPtr, v16);
      }
    }
    v9->Release(v9, (void *)1969583441, 4933, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v17);
  }
  return 1;
}
