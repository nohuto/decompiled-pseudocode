/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0056580
 * Callers:
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C005641C (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C001A360 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C003B494 (WPP_IFR_SF_D.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  _KTHREAD *CurrentThread; // rdx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v7; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *v12; // r10
  struct _KTHREAD *_a2; // rcx
  const void *v14; // r8
  unsigned __int8 v15; // dl
  BOOLEAN v16; // di
  unsigned __int8 v17; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  struct _KTHREAD *_a3; // [rsp+38h] [rbp-20h]
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  if ( !Wait )
    return MxTimer::Stop(&this->m_Timer);
  CurrentThread = KeGetCurrentThread();
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( this->m_CallbackThread == CurrentThread )
  {
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, v7, this->m_CallbackThread);
    goto LABEL_6;
  }
  if ( m_Globals->FxVerifierOn && KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(m_Globals, (unsigned __int8)CurrentThread, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
LABEL_6:
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 0;
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (*p_m_Globals)->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(*p_m_Globals, v10, 9u) || v12->FxVerifyDownlevel) )
  {
    _a2 = this->m_StopThread;
    if ( _a2 )
    {
      _a3 = KeGetCurrentThread();
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_qqq(v12, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v14, _a2, _a3);
      FxVerifierDbgBreakPoint(*p_m_Globals);
    }
  }
  this->m_StartAborted = 0;
  this->m_StopThread = KeGetCurrentThread();
  do
  {
    v15 = irql;
    this->m_StopAgain = 0;
    FxNonPagedObject::Unlock(this, v15, v11);
    v16 = MxTimer::Stop(&this->m_Timer);
    KeFlushQueuedDpcs();
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxNonPagedObject::Lock(this, &irql, v17);
  }
  while ( !v16 && this->m_StopAgain );
  this->m_StopThread = 0LL;
  this->m_StopAgain = 0;
  if ( this->m_StartAborted )
  {
    v16 = 1;
    this->m_StartAborted = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  return v16;
}
