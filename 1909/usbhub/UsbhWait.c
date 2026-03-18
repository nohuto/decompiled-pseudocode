/*
 * XREFs of UsbhWait @ 0x1C0002048
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0001B40 (UsbhPortResumeComplete.c)
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 *     UsbhCancelResetTimeout @ 0x1C00113C0 (UsbhCancelResetTimeout.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0042BF0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004C370 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C004C888 (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1C00578B0 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhRawWait @ 0x1C001ACD0 (UsbhRawWait.c)
 */

__int64 __fastcall UsbhWait(int a1, int a2)
{
  unsigned int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  return UsbhRawWait(v2);
}
