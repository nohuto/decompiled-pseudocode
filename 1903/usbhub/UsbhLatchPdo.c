/*
 * XREFs of UsbhLatchPdo @ 0x1C0001C9C
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001140 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSS_SignalPdoWake @ 0x1C0001C04 (UsbhSS_SignalPdoWake.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00022B0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhBusSuspend_Action @ 0x1C000D08C (UsbhBusSuspend_Action.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C00133E0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0045BB8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Disable @ 0x1C0045FCC (UsbhPCE_Disable.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0046FCC (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C004851C (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0049850 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0049F7C (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C004D9E4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004E194 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004EF5C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004F744 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004FA58 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C0051390 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x1C0054A08 (UsbhGetHubNodeInfo.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005CDEC (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x1C001CFB0 (UsbhRefPdo.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rsi
  KIRQL v9; // r14
  __int64 PortData; // rax
  __int64 v11; // rcx

  v8 = 0LL;
  Log(a1, 256, 1817199695, a2, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    v8 = *(_QWORD *)(PortData + 392);
    if ( v8 )
      v8 = UsbhRefPdo(v11, *(_QWORD *)(PortData + 392), a3, a4);
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  return v8;
}
