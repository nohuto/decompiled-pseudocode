/*
 * XREFs of UsbhBusSuspend_Action @ 0x1C000C954
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C001B3A0 (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C00020C8 (UsbhPCE_Suspend.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhBusSuspend_Action(__int64 a1, int a2)
{
  __int64 v4; // rbp
  __int64 result; // rax
  int v6; // r9d
  unsigned __int16 i; // bx
  int PortState; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+90h] [rbp+18h]
  int v14; // [rsp+98h] [rbp+20h]

  v4 = FdoExt(a1);
  result = Log(a1, 2048, 1114862963, 0, 0LL);
  if ( *(_DWORD *)(v4 + 4216) != v6 )
  {
    for ( i = 1; ; ++i )
    {
      result = FdoExt(a1);
      if ( i > *(unsigned __int8 *)(result + 2938) )
        break;
      PortState = UsbhQueryPortState(a1);
      if ( PortState < 0 )
      {
        if ( !Usb_Disconnected(PortState) )
        {
          LOBYTE(v12) = 0;
          UsbhException(a1, i, 78, 0, 0, v11, v14, usbfile_busm_c, 1198, v12);
          *(_DWORD *)(v4 + 4216) = 2;
        }
      }
      else if ( (v13 & 7) == 3 )
      {
        v9 = UsbhLatchPdo(a1, i, 0LL, 0x46644433u);
        v10 = v9;
        if ( !v9 || !*(_DWORD *)(PdoExt(v9) + 2800) )
          UsbhPCE_Suspend(a1, a2, i);
        if ( v10 )
          UsbhUnlatchPdo(a1, v10, 0LL, 1180976179LL);
      }
    }
  }
  return result;
}
