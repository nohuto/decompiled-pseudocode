/*
 * XREFs of imp_WdfRequestChangeTarget @ 0x1C004BB90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000AA20 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestChangeTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *IoTarget)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  FxObjectHandleGetPtr(pRequest->m_Globals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  return FxRequestBase::ValidateTarget(pRequest, (unsigned __int64)pTarget);
}
