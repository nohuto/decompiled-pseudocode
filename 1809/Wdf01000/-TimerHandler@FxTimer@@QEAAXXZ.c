/*
 * XREFs of ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00567CC
 * Callers:
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0004420 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0014240 (FX_TRACK_DRIVER.c)
 */

void __fastcall FxTimer::TimerHandler(FxTimer *this)
{
  void (__fastcall **p_m_Callback)(WDFTIMER__ *); // rdi
  FxCallbackLock **p_m_CallbackLock; // r14
  FxCallbackLock *m_CallbackLock; // rcx
  _KTHREAD *volatile *p_m_CallbackThread; // rsi
  unsigned __int16 *p_m_ObjectSize; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  p_m_Callback = &this->m_Callback;
  if ( this->m_Callback )
  {
    p_m_CallbackLock = &this->m_CallbackLock;
    m_CallbackLock = this->m_CallbackLock;
    p_m_CallbackThread = &this->m_CallbackThread;
    p_m_ObjectSize = &this->m_ObjectSize;
    this->m_CallbackThread = KeGetCurrentThread();
    v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( m_CallbackLock )
    {
      irql = 0;
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      if ( !*p_m_ObjectSize )
        v7 = 0LL;
      (*p_m_Callback)((WDFTIMER__ *)v7);
      LOBYTE(v8) = irql;
      (*p_m_CallbackLock)->Unlock(*p_m_CallbackLock, v8);
    }
    else
    {
      if ( !*p_m_ObjectSize )
        v7 = 0LL;
      (*p_m_Callback)((WDFTIMER__ *)v7);
    }
    *p_m_CallbackThread = 0LL;
  }
}
