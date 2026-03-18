/*
 * XREFs of UsbhAcquirePdoStateLock @ 0x1C0002AEC
 * Callers:
 *     UsbhSshPropagateResume @ 0x1C000285C (UsbhSshPropagateResume.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002B50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhWaitConnect @ 0x1C0018760 (UsbhWaitConnect.c)
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhCycleDevicePort @ 0x1C004851C (UsbhCycleDevicePort.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0049E24 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0049F7C (UsbhSyncResumeDeviceInternal.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004A4AC (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C004A640 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C004A7CC (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C004A97C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C004AC1C (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C004AD20 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C004AE88 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004B0E4 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall UsbhAcquirePdoStateLock(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax

  *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(a2 + 136) = 1;
  *(_DWORD *)(a2 + 92) = a3;
  *(_DWORD *)(a2 + 88) = 2018460752;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
