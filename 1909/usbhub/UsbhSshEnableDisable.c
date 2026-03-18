/*
 * XREFs of UsbhSshEnableDisable @ 0x1C001F218
 * Callers:
 *     UsbhHubSSH_PnpStart @ 0x1C001EF30 (UsbhHubSSH_PnpStart.c)
 *     UsbhPowerCallback @ 0x1C001F140 (UsbhPowerCallback.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C00522A0 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1C0055310 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhSshEnabled @ 0x1C001F2D8 (UsbhSshEnabled.c)
 *     UsbhSshDisabled @ 0x1C005DB2C (UsbhSshDisabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2)
{
  struct _KEVENT *v4; // rsi
  int Blink; // ecx
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax

  v4 = (struct _KEVENT *)FdoExt(a1);
  KeWaitForSingleObject(&v4[140], Executive, 0, 0, 0LL);
  Blink = (int)v4[136].Header.WaitListHead.Blink;
  if ( Blink > 0 )
  {
    if ( Blink > 3 )
    {
      if ( Blink <= 5 )
      {
        if ( a2 == 4 )
        {
          v10 = FdoExt(a1);
          UsbhSshEnabled(a1, v10 + 478);
          LODWORD(v4[136].Header.WaitListHead.Blink) = 4;
          return KeSetEvent(v4 + 140, 0, 0);
        }
        if ( (unsigned int)(a2 - 5) <= 1 )
          goto LABEL_15;
      }
      else if ( Blink == 6 )
      {
        v8 = FdoExt(a1);
        UsbhSshDisabled(a1, v8 + 478);
      }
    }
    else
    {
      switch ( a2 )
      {
        case 2:
          goto LABEL_8;
        case 3:
LABEL_15:
          v9 = FdoExt(a1);
          UsbhSshDisabled(a1, v9 + 478);
          goto LABEL_9;
        case 4:
LABEL_8:
          v7 = FdoExt(a1);
          UsbhSshEnabled(a1, v7 + 478);
LABEL_9:
          LODWORD(v4[136].Header.WaitListHead.Blink) = a2;
          return KeSetEvent(v4 + 140, 0, 0);
      }
      if ( a2 > 4 && a2 <= 6 )
        goto LABEL_15;
    }
  }
  return KeSetEvent(v4 + 140, 0, 0);
}
