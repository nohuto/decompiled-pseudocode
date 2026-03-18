/*
 * XREFs of UsbhBusDisconnect_Action @ 0x1C0043E38
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C000B30C (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusPause @ 0x1C001B994 (Usbh_BS_BusPause.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0045D44 (UsbhPCE_BusDisconnect.c)
 */

_DWORD *__fastcall UsbhBusDisconnect_Action(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int16 v5; // bp
  unsigned __int16 i; // bx
  _DWORD *result; // rax

  FdoExt(a1);
  Log(a1, 2048, 1919251262, 0LL, 0LL);
  v5 = v4 + 1;
  for ( i = v4 + 1; ; i += v5 )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    UsbhPCE_BusDisconnect(a1, a2, i);
  }
  return result;
}
