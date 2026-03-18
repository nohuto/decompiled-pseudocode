/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C006ADC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C0070268 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 */

int __fastcall imp_WdfUsbTargetPipeFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffsets)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbp

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( BYTE4(DriverGlobals[-2].Driver) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      5u,
      0xEu,
      0xEu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      ReadMemory);
  return FxUsbPipe::_FormatTransfer(DriverName, Pipe, Request, ReadMemory, ReadOffsets, 3u);
}
