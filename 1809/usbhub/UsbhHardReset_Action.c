/*
 * XREFs of UsbhHardReset_Action @ 0x1C004AF18
 * Callers:
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhWait @ 0x1C0001F78 (UsbhWait.c)
 *     UsbhSyncBusPause @ 0x1C0003E08 (UsbhSyncBusPause.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00081C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     UsbhSyncBusDisconnect @ 0x1C0042AB8 (UsbhSyncBusDisconnect.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhHardReset_Action(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 20;
  v4 = FdoExt((__int64)a1);
  Log((__int64)a1, 4, 1215460146, 0LL, (__int64)a1);
  v5 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1430418024, 0);
  if ( *((_BYTE *)v4 + 5268) )
    KeWaitForSingleObject(v4 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v4 + 5268) )
      _InterlockedExchange(v4 + 1315, 0);
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v13);
    v7 = v6;
    if ( Usb_Disconnected(v6) )
      break;
    UsbhSyncBusPause((__int64)a1, a2, 6);
    UsbhSyncBusDisconnect(a1, a2);
    v4[640] &= ~0x10u;
    LODWORD(v7) = Usbh_SSH_Event(a1, 4u, a2);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v9 = UsbhFdoSetD0Cold(a1, a2, 1);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v4[1238] = 0;
      goto LABEL_13;
    }
    LOBYTE(v11) = 0;
    UsbhException((int)a1, 0, 71, (int)&v12, 4, v9, 0, usbfile_reset_c, 1073, v11);
    if ( (_DWORD)v7 != -1073741637 )
    {
      Log((__int64)a1, 4, 1215460147, v7, (__int64)a1);
      ++v4[1238];
      v4[640] |= 0x10u;
      UsbhWait((int)a1, v12);
      v12 *= 2;
      if ( v4[1238] < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        continue;
    }
    goto LABEL_13;
  }
  Log((__int64)a1, 4, 1382314851, v7, v13);
LABEL_13:
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v7) )
    {
      LOBYTE(v11) = 0;
      UsbhException((int)a1, 0, 126, 0, 0, v7, 0, usbfile_reset_c, 1109, v11);
    }
    if ( *((_BYTE *)v4 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  UsbhDecHubBusy((__int64)a1, v8, v5);
  return (unsigned int)v7;
}
