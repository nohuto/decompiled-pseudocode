/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x1C004AC1C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0046FCC (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhDropDevice @ 0x1C0056E2C (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C0057600 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0002AEC (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r8

  UsbhAcquirePdoStateLock(a1, a4, a3);
  Log(a1, 2, 1716736630, 0LL, a4);
  FdoExt(a1);
  if ( (PdoExt(a2)[355] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v8 = (unsigned int)PdoExt(a2)[281];
  if ( (int)v8 > 0 )
  {
    if ( (int)v8 <= 2 )
    {
      UsbhDeletePdo(a1, a2, v8);
      return;
    }
    if ( (_DWORD)v8 == 3 )
    {
      UsbhDeregisterPdo(a1, a2, v8, a3, a4);
      return;
    }
  }
  *(_DWORD *)(a4 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a4 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
}
