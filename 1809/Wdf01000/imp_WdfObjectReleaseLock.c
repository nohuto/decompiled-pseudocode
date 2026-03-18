/*
 * XREFs of imp_WdfObjectReleaseLock @ 0x1C0058940
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxGetCallbackLock @ 0x1C0058804 (FxGetCallbackLock.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfObjectReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxCallbackLock *CallbackLock; // rax
  __int64 v5; // rdx
  FxObject *pObject; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Object,
    0x1000u,
    (void **)&pObject);
  m_Globals = pObject->m_Globals;
  CallbackLock = FxGetCallbackLock(pObject);
  if ( !CallbackLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxObjectAPI_cpp_Traceguids, Object);
    FxVerifierDbgBreakPoint(m_Globals);
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_LOCK_OPERATION, (unsigned __int64)Object, 0LL);
  }
  LOBYTE(v5) = CallbackLock->m_PreviousIrql;
  CallbackLock->Unlock(CallbackLock, v5);
}
