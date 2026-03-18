/*
 * XREFs of Usbh_BS_BusRun @ 0x1C00093C0
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C001B760 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhBusPause_Action @ 0x1C00094A0 (UsbhBusPause_Action.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1C001BAC0 (UsbhReleaseBusStateLock.c)
 *     UsbhSshBusBusy @ 0x1C001F028 (UsbhSshBusBusy.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhBusPnpStop_Action @ 0x1C0043EC0 (UsbhBusPnpStop_Action.c)
 */

__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ebp
  int v7; // ebx
  int v8; // ebx

  v3 = a3;
  FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((_DWORD)a1, 2048, 1651724878, a2, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_b5d997cdd6ae31bcea5c4187fdaede3e_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
    *(_DWORD *)(a2 + 128) = 1;
  v7 = v3 - 3;
  if ( v7 )
  {
    v8 = v7 - 3;
    if ( v8 )
    {
      if ( v8 == 1 )
        v6 = ((UsbhBusPause_Action(a1) & 0xC0000000) != -1073741824) + 3;
    }
    else
    {
      UsbhBusPause_Action(a1);
      UsbhSshBusBusy(a1, a2);
      v6 = 5;
    }
  }
  else
  {
    UsbhBusPause_Action(a1);
    UsbhBusPnpStop_Action(a1, a2);
    v6 = 2;
  }
  return UsbhReleaseBusStateLock(a1, a2, v6);
}
