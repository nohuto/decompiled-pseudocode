/*
 * XREFs of ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0079888
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0079610 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessIdleComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  FxIoQueueIoState m_IdleComplete; // xmm0
  void *m_IdleCompleteContext; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  WDFQUEUE__ *v10; // rbx
  const void *_a1; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-28h] BYREF

  m_IdleComplete = this->m_IdleComplete;
  m_IdleCompleteContext = this->m_IdleCompleteContext;
  m_Globals = this->m_Globals;
  this->m_IdleComplete.Method = 0LL;
  this->m_IdleCompleteContext = 0LL;
  v8 = *PreviousIrql;
  callback = m_IdleComplete;
  FxNonPagedObject::Unlock(this, v8, a3);
  v10 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x51u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( callback.Method )
  {
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    FxIoQueueIoResume::Invoke(&callback, v10, m_IdleCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v9);
}
