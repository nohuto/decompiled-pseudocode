/*
 * XREFs of Controller_ReportFatalError @ 0x1C000DAAC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001870 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C000C070 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000D094 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0014E40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0015040 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001633C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0016520 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0016680 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0016990 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0016B20 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0017090 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0017210 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0017440 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C0017750 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0017A08 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Endpoint_TransferEventHandler @ 0x1C0018798 (Endpoint_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C00263AC (Control_ProcessTransferEventWithED1.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0027BDC (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002ADFC (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0030AC8 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0033074 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0034B60 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0034D40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0035050 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0036B00 (UsbDevice_SetAddressCompletion.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_InitiateBootRecovery @ 0x1C000C808 (Controller_InitiateBootRecovery.c)
 */

void __fastcall Controller_ReportFatalError(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 *PoolWithTag; // rax
  KIRQL v13; // al
  __int64 **v14; // rcx

  WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 72), 1u, 4u, 0xDFu, (__int64)&Context.Logger + 4, a3, a2);
  DbgPrint("\nXHCI reported fatal error\n");
  if ( (*(_DWORD *)(a1 + 324) & 0x12) != 0 )
  {
    Controller_InitiateBootRecovery((_QWORD *)a1, a2);
  }
  else
  {
    v10 = 0LL;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(a1 + 304),
            off_1C004F0B8);
    if ( a3 )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(
                                 *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                                 0x30uLL,
                                 0x49434858u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[4] = a5;
        PoolWithTag[5] = a6;
        *((_DWORD *)PoolWithTag + 4) = a3;
        PoolWithTag[3] = a4;
        PoolWithTag[1] = 0LL;
        *PoolWithTag = 0LL;
      }
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 16));
    if ( v10 )
    {
      v14 = *(__int64 ***)(v11 + 8);
      if ( *v14 != (__int64 *)v11 )
        __fastfail(3u);
      *v10 = v11;
      v10[1] = (__int64)v14;
      *v14 = v10;
      *(_QWORD *)(v11 + 8) = v10;
    }
    *(_DWORD *)(v11 + 80) |= a2;
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 16), v13);
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3040))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(a1 + 304));
  }
}
