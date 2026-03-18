/*
 * XREFs of UsbhTimerPnpStop @ 0x1C004B8C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E930 (UsbhReferenceListRemove.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhDmDisableTimer @ 0x1C004B650 (UsbhDmDisableTimer.c)
 */

void __fastcall UsbhTimerPnpStop(__int64 a1)
{
  _DWORD *v2; // rdi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_f31665804e2433573401e109bb624f48_Traceguids);
  v2 = FdoExt(a1);
  Log(a1, 0x2000, 1684886352, a1, 0LL);
  if ( (v2[640] & 0x2000000) != 0 )
  {
    UsbhDmDisableTimer(a1);
    v2[640] &= ~0x2000000u;
    Log(a1, 0x2000, 1684886321, a1, 0LL);
    UsbhReferenceListRemove(a1, (__int64)(v2 + 936));
  }
}
