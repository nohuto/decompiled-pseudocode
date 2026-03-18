/*
 * XREFs of Usbh_BS_BusSuspend @ 0x1C000AD30
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhBusReset_Action @ 0x1C000ADF0 (UsbhBusReset_Action.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1C001B3A0 (UsbhReleaseBusStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x1C00427C8 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C0042850 (UsbhBusPnpStop_Action.c)
 */

__int64 __fastcall Usbh_BS_BusSuspend(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a3;
  FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log(a1, 2048, 1651724371, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_b5d997cdd6ae31bcea5c4187fdaede3e_Traceguids,
      v3);
  v7 = v3 - 3;
  if ( !v7 )
  {
    UsbhBusPnpStop_Action(a1, a2);
    v6 = 2;
    return UsbhReleaseBusStateLock(a1, a2, v6);
  }
  v8 = v7 - 4;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        if ( v10 != 1 )
          return UsbhReleaseBusStateLock(a1, a2, v6);
        UsbhBusDisconnect_Action(a1, a2);
      }
      else
      {
        UsbhBusReset_Action(a1, a2);
      }
      v6 = 5;
    }
    else
    {
      v6 = 3;
    }
  }
  else
  {
    v6 = 4;
  }
  return UsbhReleaseBusStateLock(a1, a2, v6);
}
