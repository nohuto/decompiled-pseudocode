/*
 * XREFs of imp_WdfTimerStop @ 0x1C000BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00199F0 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C003A794 (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

BOOLEAN __fastcall imp_WdfTimerStop(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer, unsigned __int8 Wait)
{
  FxTimer *v4; // rbx
  __int64 v5; // rcx
  _KTIMER *p_KernelTimer; // rcx
  FxTimer *v10; // rbx
  FxTimer *v11; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v13; // edx
  unsigned __int8 v14; // r8
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // di
  unsigned __int8 v18; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  FxTimer *v20; // rbx
  const void *_a1; // rdx
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v23; // rcx
  struct _KTHREAD *_a2; // r10
  const void *v25; // r8
  struct _KTHREAD *_a3; // [rsp+38h] [rbp-20h]
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  FxTimer *pFxTimer; // [rsp+78h] [rbp+20h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  v4 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v5) = 0;
  if ( (Timer & 1) != 0 )
  {
    v5 = LOWORD(v4->__vftable);
    v4 = (FxTimer *)((char *)v4 - v5);
  }
  if ( v4->m_Type == 4136 )
  {
    pFxTimer = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxTimer, (void *)Timer, 0x1028u, v5);
    v4 = pFxTimer;
  }
  if ( !Wait )
  {
    p_KernelTimer = &v4->m_Timer.m_Timer.KernelTimer;
    if ( v4->m_Timer.m_Timer.m_IsExtTimer )
      return ExCancelTimer(*(_QWORD *)&p_KernelTimer->Header.Lock, 0LL);
    else
      return KeCancelTimer(p_KernelTimer);
  }
  if ( (int)FxVerifierCheckIrqlLevel(v4->m_Globals, 0) < 0 )
    return 0;
  v10 = pFxTimer;
  if ( pFxTimer->m_CallbackThread == KeGetCurrentThread() )
  {
    v20 = pFxTimer;
    _a1 = (const void *)((unsigned __int64)pFxTimer ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pFxTimer->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(pFxTimer->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, pFxTimer->m_CallbackThread);
    FxVerifierDbgBreakPoint(v20->m_Globals);
    return 0;
  }
  v11 = pFxTimer;
  m_Globals = pFxTimer->m_Globals;
  if ( m_Globals->FxVerifierOn && KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(m_Globals, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
    FxVerifierDbgBreakPoint(v11->m_Globals);
    return 0;
  }
  FxNonPagedObject::Lock(pFxTimer, &PreviousIrql, (unsigned __int8)pFxTimer);
  v15 = v11->m_Globals;
  if ( v15->FxVerifierOn && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v15, v13, 9u) || v23->FxVerifyDownlevel) )
  {
    _a2 = v10->m_StopThread;
    if ( _a2 )
    {
      _a3 = KeGetCurrentThread();
      v25 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v10->m_ObjectSize )
        v25 = 0LL;
      WPP_IFR_SF_qqq(v23, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v25, _a2, _a3);
      FxVerifierDbgBreakPoint(v11->m_Globals);
    }
  }
  v10->m_StartAborted = 0;
  v10->m_StopThread = KeGetCurrentThread();
  do
  {
    v16 = PreviousIrql;
    v10->m_StopAgain = 0;
    FxNonPagedObject::Unlock(v10, v16, v14);
    v17 = MxTimer::Stop(&v10->m_Timer);
    KeFlushQueuedDpcs();
    m_SystemWorkItem = v10->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxNonPagedObject::Lock(v10, &PreviousIrql, v18);
  }
  while ( !v17 && v10->m_StopAgain );
  v10->m_StopThread = 0LL;
  v10->m_StopAgain = 0;
  if ( v10->m_StartAborted )
  {
    v17 = 1;
    v10->m_StartAborted = 0;
  }
  FxNonPagedObject::Unlock(v10, PreviousIrql, v14);
  return v17;
}
