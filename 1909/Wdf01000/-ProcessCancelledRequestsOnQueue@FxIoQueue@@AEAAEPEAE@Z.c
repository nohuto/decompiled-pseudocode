/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00796EC
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001347C (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_CanceledOnQueueList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v8; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  const void *_a2; // rcx
  const void *_a1; // rax
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v19; // rdx
  FxCallbackLock *v20; // rcx
  char v21; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_CanceledOnQueueList = &this->m_CanceledOnQueueList;
  while ( 1 )
  {
    Flink = p_m_CanceledOnQueueList->Flink;
    if ( p_m_CanceledOnQueueList->Flink == p_m_CanceledOnQueueList )
      break;
    v8 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v8;
    v10 = (FxRequestBase *)&Flink[-18];
    v8->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v12 = (unsigned __int64)&Flink[-18] ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a1 = (const void *)v12;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    if ( !v10->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x55u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v10, 64, v15);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v15);
    Method = this->m_IoCanceledOnQueue.Method;
    if ( !v10->m_ObjectSize )
      v12 = 0LL;
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    if ( Method )
    {
      m_CallbackLock = this->m_IoCanceledOnQueue.m_CallbackLock;
      v21 = 0;
      if ( m_CallbackLock )
      {
        m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&v21);
        Method = this->m_IoCanceledOnQueue.Method;
      }
      Method((WDFQUEUE__ *)v11, (WDFREQUEST__ *)v12);
      v20 = this->m_IoCanceledOnQueue.m_CallbackLock;
      if ( v20 )
      {
        LOBYTE(v19) = v21;
        v20->Unlock(v20, v19);
      }
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v16);
  }
  return 1;
}
