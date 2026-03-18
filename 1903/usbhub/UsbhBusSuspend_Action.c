/*
 * XREFs of UsbhBusSuspend_Action @ 0x1C000D08C
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C001BAC0 (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C00021C4 (UsbhPCE_Suspend.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhBusSuspend_Action(__int64 a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  int v4; // r9d
  unsigned __int16 i; // bx
  int PortState; // ecx
  int v7; // ecx
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+98h] [rbp+20h]

  v2 = FdoExt(a1);
  result = Log(a1, 2048, 1114862963, 0, 0LL);
  if ( *(_DWORD *)(v2 + 4216) != v4 )
  {
    for ( i = 1; ; ++i )
    {
      result = FdoExt(a1);
      if ( i > *(unsigned __int8 *)(result + 2938) )
        break;
      PortState = UsbhQueryPortState(a1);
      if ( PortState < 0 && !Usb_Disconnected(PortState) )
      {
        LOBYTE(v8) = 0;
        UsbhException(a1, i, 78, 0, 0, v7, v9, usbfile_busm_c, 1198, v8);
        *(_DWORD *)(v2 + 4216) = 2;
      }
    }
  }
  return result;
}
