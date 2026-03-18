/*
 * XREFs of UsbhLatchPdo @ 0x1C0001BDC
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001090 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSS_SignalPdoWake @ 0x1C0001B44 (UsbhSS_SignalPdoWake.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00021A0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhBusSuspend_Action @ 0x1C000C954 (UsbhBusSuspend_Action.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0012D90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00444B8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Disable @ 0x1C0044894 (UsbhPCE_Disable.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C00457A4 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C0046C84 (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0047F10 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0048618 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C004BF70 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004D42C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004DBAC (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004DE94 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004F660 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x1C0052938 (UsbhGetHubNodeInfo.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005AA0C (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x1C001C4B0 (UsbhRefPdo.c)
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
