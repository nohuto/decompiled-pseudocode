/*
 * XREFs of ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C001858C
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::ProcessPurgeComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  FxIoQueueIoState m_PurgeComplete; // xmm0
  void *m_PurgeCompleteContext; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  const void *_a1; // rax
  char v12; // [rsp+60h] [rbp+8h] BYREF

  m_PurgeComplete = this->m_PurgeComplete;
  m_PurgeCompleteContext = this->m_PurgeCompleteContext;
  m_Globals = this->m_Globals;
  this->m_PurgeComplete.Method = 0LL;
  this->m_PurgeCompleteContext = 0LL;
  FxNonPagedObject::Unlock(this, *PreviousIrql, a3);
  v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x52u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( m_PurgeComplete.Method )
  {
    if ( !this->m_ObjectSize )
      v9 = 0LL;
    v12 = 0;
    if ( m_PurgeComplete.m_CallbackLock )
      m_PurgeComplete.m_CallbackLock->Lock(m_PurgeComplete.m_CallbackLock, (unsigned __int8 *)&v12);
    m_PurgeComplete.Method((WDFQUEUE__ *)v9, m_PurgeCompleteContext);
    if ( m_PurgeComplete.m_CallbackLock )
    {
      LOBYTE(v10) = v12;
      m_PurgeComplete.m_CallbackLock->Unlock(m_PurgeComplete.m_CallbackLock, v10);
    }
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v8);
}
