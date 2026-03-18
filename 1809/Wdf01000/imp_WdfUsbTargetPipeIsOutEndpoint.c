/*
 * XREFs of imp_WdfUsbTargetPipeIsOutEndpoint @ 0x1C006B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbTargetPipeIsOutEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  FxUsbPipe *pUsbPipe; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  return (unsigned __int8)~pUsbPipe->m_PipeInformation.EndpointAddress >> 7;
}
