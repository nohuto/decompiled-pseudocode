/*
 * XREFs of imp_WdfRequestCancelSentRequest @ 0x1C0019270
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00192B8 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall imp_WdfRequestCancelSentRequest(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v3 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x32u, WPP_FxRequestApi_cpp_Traceguids, Request);
    v3 = pRequest;
  }
  return FxRequestBase::Cancel(v3);
}
