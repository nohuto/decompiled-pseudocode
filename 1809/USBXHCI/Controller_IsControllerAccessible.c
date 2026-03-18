/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C000CF04
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005530 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_Initialize @ 0x1C00082E4 (Command_Initialize.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     Controller_UcxEvtReset @ 0x1C000F570 (Controller_UcxEvtReset.c)
 *     DeviceSlot_Initialize @ 0x1C0013228 (DeviceSlot_Initialize.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0013F38 (XilDeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001ABF8 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001AC60 (Interrupter_D0Entry.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C001D1DC (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0020710 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0020A50 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C00213C0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0022E94 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00370F0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00372B0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0037520 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0037920 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0037C00 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  unsigned __int8 v2; // cl
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 333) )
    return 1;
  v5 = *(unsigned __int8 *)(a1 + 333);
  v4 = v2;
  WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 72), 2u, 4u, 0xE0u, (__int64)&Context.Logger + 4, v4, v5);
  return 0;
}
