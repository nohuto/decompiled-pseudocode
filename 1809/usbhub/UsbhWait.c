/*
 * XREFs of UsbhWait @ 0x1C0001F78
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0001A90 (UsbhPortResumeComplete.c)
 *     UsbhReset1Complete @ 0x1C000F680 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x1C0010C7C (UsbhInitializeDevice.c)
 *     UsbhCancelResetTimeout @ 0x1C0010D90 (UsbhCancelResetTimeout.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 *     UsbhInitialize @ 0x1C001E1B0 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1C0055640 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhRawWait @ 0x1C001A5A0 (UsbhRawWait.c)
 */

__int64 __fastcall UsbhWait(int a1, int a2)
{
  unsigned int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  return UsbhRawWait(v2);
}
