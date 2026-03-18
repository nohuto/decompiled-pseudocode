/*
 * XREFs of imp_WdfRequestGetRequestorProcessId @ 0x1C004C020
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetRequestorProcessId@FxRequest@@QEAAKXZ @ 0x1C004FF1C (-GetRequestorProcessId@FxRequest@@QEAAKXZ.c)
 */

unsigned int __fastcall imp_WdfRequestGetRequestorProcessId(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  return FxRequest::GetRequestorProcessId(pRequest);
}
