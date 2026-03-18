/*
 * XREFs of UsbhBusUnlatchPdo @ 0x1C0054B38
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0009AFC (UsbhCancelEnumeration.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0009E00 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhRequestPortSuspend @ 0x1C000BA08 (UsbhRequestPortSuspend.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhWaitConnect @ 0x1C0017FC0 (UsbhWaitConnect.c)
 *     UsbhPCE_Disable @ 0x1C0044894 (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x1C0054C3C (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C00553C0 (UsbhPortDisconnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDerefPdo @ 0x1C000EAA0 (UsbhDerefPdo.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  KIRQL v9; // bl

  Log(a1, 1024, 1970032689, a2, a3);
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, v8, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a3 + 416) = 0;
    Log(a1, 1024, 1970032690, a2, a3);
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
}
