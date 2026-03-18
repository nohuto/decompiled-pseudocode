/*
 * XREFs of imp_WdfRequestGetInformation @ 0x1C004BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetInformation@FxRequest@@QEAA_KXZ @ 0x1C0050AA4 (-GetInformation@FxRequest@@QEAA_KXZ.c)
 */

unsigned __int64 __fastcall imp_WdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  return FxRequest::GetInformation(pRequest);
}
