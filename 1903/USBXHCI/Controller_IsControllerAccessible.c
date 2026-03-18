/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C000F3A4
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0006500 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_Initialize @ 0x1C000A1EC (Command_Initialize.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     Controller_UcxEvtReset @ 0x1C0011EF0 (Controller_UcxEvtReset.c)
 *     DeviceSlot_Initialize @ 0x1C0015CA0 (DeviceSlot_Initialize.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0016B1C (XilDeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001DFB8 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001E020 (Interrupter_D0Entry.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C0020B64 (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024740 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0024AC0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0025520 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027454 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C003C370 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C003C7E0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C003CC00 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C003CF00 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  unsigned __int8 v2; // cl
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 397) )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(unsigned __int8 *)(a1 + 397);
    v4 = v2;
    WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 72), 2u, 4u, 0xE3u, (__int64)&Context.Logger + 4, v4, v5);
  }
  return 0;
}
