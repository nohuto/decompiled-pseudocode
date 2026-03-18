/*
 * XREFs of ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006E648
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C006AA70 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeGetType @ 0x1C006B260 (imp_WdfUsbTargetPipeGetType.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006E1CC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C006E514 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C0073F54 (-CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipe::_UsbdPipeTypeToWdf(unsigned int UsbdPipeType)
{
  if ( UsbdPipeType >= 4 )
    return 0LL;
  else
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[UsbdPipeType];
}
