/*
 * XREFs of UsbhReferenceListClose @ 0x1C004F07C
 * Callers:
 *     Usbh_PnpRemove @ 0x1C0050824 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhReferenceListClose(__int64 a1)
{
  KIRQL v2; // bl
  _DWORD *v3; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v3 = FdoExt(a1);
  Log(a1, 8, 1919312716, *((unsigned __int8 *)v3 + 2480), 0LL);
  if ( *((_BYTE *)v3 + 2480) )
  {
    *((_BYTE *)v3 + 2480) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v2);
    UsbhReferenceListRemove(a1, a1);
    KeWaitForSingleObject(v3 + 622, Executive, 0, 0, 0LL);
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v2);
  }
}
