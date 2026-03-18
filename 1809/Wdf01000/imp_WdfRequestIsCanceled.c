/*
 * XREFs of imp_WdfRequestIsCanceled @ 0x1C004C080
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C004B83C (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1C00C2040 (Vf_VerifyWdfRequestIsCanceled.c)
 */

unsigned __int8 __fastcall imp_WdfRequestIsCanceled(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v2; // rcx
  int IsCanceled; // eax
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v2 = pRequest;
  if ( pRequest->m_Globals->FxVerifierOn )
  {
    IsCanceled = Vf_VerifyWdfRequestIsCanceled(pRequest->m_Globals, pRequest);
    v2 = pRequest;
  }
  else
  {
    IsCanceled = 0;
  }
  if ( IsCanceled >= 0 )
    return FxRequest::IsCancelled(v2);
  else
    return 0;
}
