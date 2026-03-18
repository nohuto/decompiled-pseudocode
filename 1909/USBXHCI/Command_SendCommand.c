/*
 * XREFs of Command_SendCommand @ 0x1C000A7C8
 * Callers:
 *     Command_SendInternalCommandSynchronously @ 0x1C00022D8 (Command_SendInternalCommandSynchronously.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C00060FC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C000624C (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0006310 (UsbDevice_SetResourceAssignment.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017B20 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00191DC (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019580 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0019778 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019DF0 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A700 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C001AB74 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C001AC20 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C001AD74 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BE60 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C003A180 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C003B8A0 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C003BCF0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C003C7E0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C003CC00 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C003CF00 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C000A23C (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned int v10; // esi
  __int64 v11; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v4 + 537) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      2112LL);
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( !(unsigned __int8)Controller_IsControllerAccessible(v4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a1 + 16),
        v5,
        7,
        58,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    }
    *(_BYTE *)(a2 + 60) = 0;
LABEL_17:
    v11 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v11, 0LL);
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v8 && (v9 = *(__int64 (__fastcall **)(__int64, __int64))(v8 + 16)) != 0LL )
    v10 = v9(v8, a2);
  else
    v10 = 4;
  if ( v10 == 4 )
  {
    if ( *(_DWORD *)(a1 + 36) != 5 )
    {
      Command_InternalSendCommand(a1, a2, v6, v7);
      return DynamicLock_Release(*(_QWORD *)(a1 + 112));
    }
    DynamicLock_Release(*(_QWORD *)(a1 + 112));
    goto LABEL_17;
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  v11 = v10;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v11, 0LL);
}
