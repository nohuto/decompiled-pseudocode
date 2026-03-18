/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C007A05C
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x1C0076DC0 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  void *v3; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rbx
  unsigned int v8; // edi
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  unsigned __int16 v13; // r9
  const void *v14; // rcx
  const void *v15; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = Context;
  m_Globals = this->m_Globals;
  if ( this->m_Type != WdfIoQueueDispatchManual )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v8 = -1073741808;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return v8;
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Context);
  v11 = 0;
  if ( this->m_Deleted )
  {
    v8 = -1073741738;
LABEL_21:
    FxNonPagedObject::Unlock(this, irql, v11);
    return v8;
  }
  Method = this->m_ReadyNotify.Method;
  if ( QueueReady )
  {
    if ( Method )
    {
      v13 = 61;
LABEL_17:
      v8 = -1073741808;
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        v13,
        WPP_FxIoQueue_cpp_Traceguids,
        v15,
        (__int64)&this->m_ReadyNotify,
        -1073741808);
LABEL_20:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_21;
    }
  }
  else
  {
    if ( !Method )
    {
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v8 = -1073741808;
      if ( !this->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v14, 0xC0000010);
      goto LABEL_20;
    }
    if ( (this->m_QueueState & 2) != 0 )
    {
      v13 = 63;
      goto LABEL_17;
    }
    v3 = 0LL;
    QueueReady = 0LL;
  }
  this->m_ReadyNotify.Method = QueueReady;
  this->m_ReadyNotifyContext = v3;
  FxIoQueue::DispatchEvents(this, irql, 0LL, v10);
  return 0LL;
}
