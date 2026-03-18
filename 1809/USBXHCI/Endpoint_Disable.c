/*
 * XREFs of Endpoint_Disable @ 0x1C0015310
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00048C0 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005530 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0034B60 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0034D40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0035050 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00372B0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0037520 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0037920 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     Endpoint_Disable_Internal @ 0x1C0015428 (Endpoint_Disable_Internal.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C001AEAC (Interrupter_DeInitializeAfterOffload.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
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
    DynamicLock_Acquire(*(_QWORD *)(v4 + 576));
    v5 = *(_DWORD *)(v4 + 568);
    if ( v5 )
    {
      v6 = v5 - 1;
      *(_DWORD *)(v4 + 568) = v6;
      if ( !v6 && *(_DWORD *)(v4 + 564) == 1 )
      {
        Interrupter_DeInitializeAfterOffload(*(_QWORD *)(v4 + 128));
        if ( *(_DWORD *)(v4 + 564) == 1 )
        {
          v7 = *(_QWORD *)(v4 + 752);
          *(_BYTE *)(v4 + 760) = 0;
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
        12179);
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x129u, (__int64)&Context.Logger + 4);
    }
    DynamicLock_Release(*(_QWORD *)(v4 + 576));
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent(a1 + 36);
}
