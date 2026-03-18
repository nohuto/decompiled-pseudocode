/*
 * XREFs of Usbh_BS_BusStop @ 0x1C002A5D4
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1C001B3A0 (UsbhReleaseBusStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0048FC4 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusStop(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651725140, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_b5d997cdd6ae31bcea5c4187fdaede3e_Traceguids,
      v3);
  if ( (int)v3 > 6 )
  {
    if ( (int)v3 > 8 )
    {
      if ( (_DWORD)v3 == 9 )
        goto LABEL_8;
      if ( (_DWORD)v3 == 12 )
      {
        Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
        v7 = 2;
        return UsbhReleaseBusStateLock(a1, a2, v7);
      }
    }
LABEL_11:
    v7 = v6;
    return UsbhReleaseBusStateLock(a1, a2, v7);
  }
  if ( (_DWORD)v3 == 6 )
    goto LABEL_11;
  v7 = 2;
  v8 = v3 - 2;
  if ( !v8 )
  {
    v7 = 6;
    return UsbhReleaseBusStateLock(a1, a2, v7);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
LABEL_8:
      v7 = 4;
      return UsbhReleaseBusStateLock(a1, a2, v7);
    }
    if ( v10 == 1 )
    {
      v7 = 3;
      return UsbhReleaseBusStateLock(a1, a2, v7);
    }
    goto LABEL_11;
  }
  return UsbhReleaseBusStateLock(a1, a2, v7);
}
