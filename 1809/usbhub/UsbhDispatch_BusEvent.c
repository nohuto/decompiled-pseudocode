/*
 * XREFs of UsbhDispatch_BusEvent @ 0x1C001B060
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusPause @ 0x1C0003E08 (UsbhSyncBusPause.c)
 *     UsbhSyncBusResume @ 0x1C0007E80 (UsbhSyncBusResume.c)
 *     UsbhSyncBusReset @ 0x1C0007EF4 (UsbhSyncBusReset.c)
 *     UsbhAsyncStartComplete @ 0x1C001CA88 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x1C001EC28 (UsbhHubStart.c)
 *     UsbhBusPnpStart @ 0x1C0027460 (UsbhBusPnpStart.c)
 *     UsbhBusAdd @ 0x1C002B350 (UsbhBusAdd.c)
 *     UsbhSyncBusDisconnect @ 0x1C0042AB8 (UsbhSyncBusDisconnect.c)
 *     UsbhBusPnpStop @ 0x1C00469A0 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x1C00469E0 (UsbhBusRemove.c)
 *     Usbh_PnpRemove @ 0x1C0050824 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusRun @ 0x1C0008E80 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusSuspend @ 0x1C000AD30 (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusPause @ 0x1C001B284 (Usbh_BS_BusPause.c)
 *     UsbhReleaseBusStateLock @ 0x1C001B3A0 (UsbhReleaseBusStateLock.c)
 *     UsbhSshBusBusy @ 0x1C001E5CC (UsbhSshBusBusy.c)
 *     Usbh_BS_BusStop @ 0x1C002A5D4 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusInit @ 0x1C002A810 (Usbh_BS_BusInit.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     Usbh_BS_BusRemove @ 0x1C0042B2C (Usbh_BS_BusRemove.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  _DWORD *DeviceExtension; // rdx
  void *v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // r15
  char v11; // cl
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_32;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension);
  if ( a3 == 3 )
    UsbhSshBusBusy(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_b5d997cdd6ae31bcea5c4187fdaede3e_Traceguids,
      v3);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v7 = a1->DeviceExtension;
    if ( v7 )
    {
      v8 = *((_QWORD *)v7 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
      *(_DWORD *)v8 = 724267874;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a2;
      *(_QWORD *)(v8 + 24) = v3;
    }
  }
  v9 = a1->DeviceExtension;
  if ( !v9 )
LABEL_32:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  KeWaitForSingleObject(v9 + 612, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v10 = (int)v9[610];
  *(_DWORD *)(a2 + 80) = v10;
  v11 = v9[208] + 1;
  *((_QWORD *)v9 + 167) = a2;
  v12 = v11 & 7;
  v9[208] = v12;
  v12 *= 32LL;
  *(_DWORD *)((char *)v9 + v12 + 540) = v3;
  *(_DWORD *)((char *)v9 + v12 + 544) = v9[610];
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v13 = a1->DeviceExtension;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
      *(_DWORD *)v14 = 757953378;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a2;
      *(_QWORD *)(v14 + 24) = v10;
    }
  }
  switch ( (_DWORD)v10 )
  {
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v3);
    case 1:
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v3);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v3);
    case 3:
      return Usbh_BS_BusRun(a1, a2, v3);
    case 5:
      return Usbh_BS_BusSuspend((__int64)a1, a2, v3);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v3);
  }
  UsbhReleaseBusStateLock(a1, a2, (unsigned int)v10);
  return (unsigned int)v10;
}
