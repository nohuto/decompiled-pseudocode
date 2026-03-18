/*
 * XREFs of UsbhPdoSetD0_Finish @ 0x1C00025EC
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002450 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhDisableDeviceForWake @ 0x1C0002540 (UsbhDisableDeviceForWake.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002974 (UsbhSet_Pdo_Dx.c)
 *     UsbhSetPdoPowerState @ 0x1C0003BB4 (UsbhSetPdoPowerState.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoSetD0_Finish(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  POWER_STATE v8; // ebx
  int v9; // r8d
  unsigned int v10; // edx
  int v12; // edx
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+70h] [rbp+8h]

  v6 = PdoExt(a2);
  v7 = FdoExt(*(_QWORD *)(a1 + 8));
  v8.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a3 + 184) + 24LL);
  UsbhAcquireFdoPwrLock(*(_QWORD *)(a1 + 8), a1, 126LL, 1852401232LL);
  PdoExt(a2);
  UsbhSetPdoPowerState(a1, (_DWORD)a2, v9, 1, 8);
  Log(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, (__int64)a2);
  *(_DWORD *)(v6 + 2384) = *(_DWORD *)(v7 + 4216);
  UsbhReleaseFdoPwrLock(*(_QWORD *)(a1 + 8), a1);
  if ( (*(_DWORD *)(v6 + 1420) & 0x100) != 0 )
  {
    v10 = UsbhDisableDeviceForWake(*(_QWORD *)(a1 + 8), (__int64)a2);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v10) )
    {
      LOBYTE(v13) = 0;
      UsbhException(
        *(_QWORD *)(a1 + 8),
        *(unsigned __int16 *)(v6 + 1428),
        49,
        0,
        0,
        v12,
        v14,
        usbfile_pdopwr_c,
        842,
        v13);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      *(_WORD *)(v6 + 1428));
  UsbhSet_Pdo_Dx(a2, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      *(_WORD *)(v6 + 1428));
  return 0LL;
}
