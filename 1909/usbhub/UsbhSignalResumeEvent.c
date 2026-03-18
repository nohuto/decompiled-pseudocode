/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C0001EB8
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0001B40 (UsbhPortResumeComplete.c)
 *     UsbhDriverResetPort @ 0x1C0001D70 (UsbhDriverResetPort.c)
 *     UsbhResumeSuspendedPort @ 0x1C000C394 (UsbhResumeSuspendedPort.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000E788 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C001B0B0 (UsbhHubIsr.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C0057440 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C0057600 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C00577E0 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C00578B0 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0001F60 (UsbhLogSignalResumeEvent.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

void __fastcall UsbhSignalResumeEvent(int a1, __int64 a2)
{
  int v4; // r9d
  KIRQL v5; // r10
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)UsbhLogSignalResumeEvent() )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v4 = *(_DWORD *)(a2 + 12);
    v6 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    Log(a1, 16, 1886479734, v4, v6);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
