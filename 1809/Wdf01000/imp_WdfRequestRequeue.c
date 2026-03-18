/*
 * XREFs of imp_WdfRequestRequeue @ 0x1C004C420
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079948 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 */

int __fastcall imp_WdfRequestRequeue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoQueue *m_IoQueue; // rcx
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !pRequest->m_Completed )
  {
    m_IoQueue = pRequest->m_IoQueue;
    if ( m_IoQueue )
      return FxIoQueue::Requeue(m_IoQueue, pRequest);
  }
  WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x4Du, WPP_FxRequestApi_cpp_Traceguids, Request, 0xC0000010);
  FxVerifierDbgBreakPoint(m_Globals);
  return -1073741808;
}
