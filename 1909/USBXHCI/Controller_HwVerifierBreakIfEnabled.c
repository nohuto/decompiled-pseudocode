/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C000E974
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0009AB8 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0009F60 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000F620 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017B20 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0017D60 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00198D0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0019AA0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001A4D0 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C001A810 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001AAD4 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Endpoint_TransferEventHandler @ 0x1C001B8E8 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C002A818 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C002AB34 (Control_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002F5E4 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002F924 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C003558C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0035890 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0035DB8 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0039C10 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C003A180 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C003BCF0 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     McTemplateK0pppxsb16b16 @ 0x1C0002A34 (McTemplateK0pppxsb16b16.c)
 *     WPP_RECORDER_SF_s @ 0x1C00156D4 (WPP_RECORDER_SF_s.c)
 */

ULONG __fastcall Controller_HwVerifierBreakIfEnabled(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const char *a5,
        __int64 *a6,
        __int64 *a7)
{
  ULONG result; // eax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(a1[9], a2, a3, a4);
  if ( (a4 & a1[56]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  result = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v12 = &v14;
    v13 = &v14;
    if ( a7 )
      v12 = a7;
    if ( a6 )
      v13 = a6;
    return McTemplateK0pppxsb16b16((__int64)v13, (__int64)v12, a3, a1[1], a2, a3, a4, a5, v13, v12, v14, v15);
  }
  return result;
}
