/*
 * XREFs of imp_WdfRequestAllocateTimer @ 0x1C004BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0055610 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 */

int __fastcall imp_WdfRequestAllocateTimer(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  return FxRequestBase::CreateTimer(pRequest);
}
