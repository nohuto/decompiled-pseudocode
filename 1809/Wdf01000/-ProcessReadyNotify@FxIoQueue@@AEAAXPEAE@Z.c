/*
 * XREFs of ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C00184CC
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessReadyNotify(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *m_ReadyNotifyContext; // r15
  FxIoQueueIoState m_ReadyNotify; // xmm6
  unsigned __int8 v8; // r8
  void (__fastcall *v9)(unsigned __int64, void *); // xmm6_8
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  const void *_a1; // rdx
  FxCallbackLock *callback; // [rsp+30h] [rbp-48h]
  char v14; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  m_ReadyNotifyContext = this->m_ReadyNotifyContext;
  m_ReadyNotify = this->m_ReadyNotify;
  this->m_TransitionFromEmpty = 0;
  callback = m_ReadyNotify.m_CallbackLock;
  FxNonPagedObject::Unlock(this, *PreviousIrql, a3);
  v9 = (void (__fastcall *)(unsigned __int64, void *))_mm_srli_si128((__m128i)m_ReadyNotify, 8).m128i_u64[0];
  if ( v9 )
  {
    v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v14 = 0;
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    if ( callback )
      callback->Lock(callback, (unsigned __int8 *)&v14);
    v9(v10, m_ReadyNotifyContext);
    if ( callback )
    {
      LOBYTE(v11) = v14;
      callback->Unlock(callback, v11);
    }
  }
  else if ( m_Globals->FxVerifierOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x53u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v8);
}
