/*
 * XREFs of Usbh_ErrorDisconnect_PdoEvent @ 0x1C0049368
 * Callers:
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 *     UsbhCreatePdo @ 0x1C0022330 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C00029B0 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_ErrorDisconnect_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  UsbhAcquirePdoStateLock(a1, a3, 4);
  Log(a1, 2, 1716736630, 0LL, a3);
  if ( PdoExt(a2)[281] == 1 )
  {
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  }
}
