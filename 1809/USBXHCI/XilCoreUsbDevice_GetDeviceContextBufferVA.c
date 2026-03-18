/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C00430FC
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0004B58 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001633C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0016E34 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0018358 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0035C6C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0036B00 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0037920 (UsbDevice_UcxEvtReset.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C003AB10 (Crashdump_InitializeDeviceContext.c)
 *     XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C0042DA0 (XilCoreDeviceSlot_QueryEndpointContextInfo.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0042E20 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}
