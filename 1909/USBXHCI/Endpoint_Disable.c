/*
 * XREFs of Endpoint_Disable @ 0x1C001806C
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000583C (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0006500 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0039C10 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C003A180 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C003C094 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C003C7E0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C003CC00 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     Endpoint_Disable_Internal @ 0x1C0018194 (Endpoint_Disable_Internal.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C001E2B0 (Interrupter_DeInitializeAfterOffload.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 *a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx

  v2 = a2;
  if ( *((_DWORD *)a1 + 338) == 2 )
  {
    v4 = *a1;
    *((_DWORD *)a1 + 338) = 0;
    DynamicLock_Acquire(*(_QWORD *)(v4 + 640));
    v5 = *(_DWORD *)(v4 + 632);
    if ( v5 )
    {
      v6 = v5 - 1;
      *(_DWORD *)(v4 + 632) = v6;
      if ( !v6 && *(_DWORD *)(v4 + 628) == 1 )
      {
        Interrupter_DeInitializeAfterOffload(*(_QWORD *)(v4 + 128));
        if ( *(_DWORD *)(v4 + 628) == 1 )
        {
          v7 = *(_QWORD *)(v4 + 816);
          *(_BYTE *)(v4 + 824) = 0;
          (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3040))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v7);
        }
      }
    }
    else
    {
      Debug_FreAssertMsg(
        (__int64)"Underflow detected",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        12385);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x12Cu, (__int64)&Context.Logger + 4);
    }
    DynamicLock_Release(*(_QWORD *)(v4 + 640));
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent(a1 + 36);
}
