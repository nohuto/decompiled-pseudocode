/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0005AFC (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00191DC (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019DF0 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B488 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C003AE58 (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C003BCF0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C003CC00 (UsbDevice_UcxEvtReset.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0040290 (Crashdump_InitializeDeviceContext.c)
 *     XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C00487A8 (XilCoreDeviceSlot_QueryEndpointContextInfo.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0048828 (XilCoreDeviceSlot_SetDeviceContext.c)
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
