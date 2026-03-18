/*
 * XREFs of ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1C0018DA4
 * Callers:
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0018CF8 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueueIoState::Invoke(FxIoQueueIoState *this, WDFQUEUE__ *Queue, void *Context)
{
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v8; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Method = this->Method;
  if ( Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
    {
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      this->Method(Queue, Context);
    }
    else
    {
      Method(Queue, Context);
    }
    if ( this->m_CallbackLock )
    {
      LOBYTE(v8) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v8);
    }
  }
}
