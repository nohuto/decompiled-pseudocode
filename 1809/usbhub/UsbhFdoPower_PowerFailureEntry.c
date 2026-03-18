/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x1C004A190
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C0003E90 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0004200 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0004CD0 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0004B5C (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhReleasePowerContext @ 0x1C0005774 (UsbhReleasePowerContext.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007110 (UsbhDisarmHubForWakeDetect.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C002AB18 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhSetFdoPowerState @ 0x1C004A87C (UsbhSetFdoPowerState.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

void __fastcall UsbhFdoPower_PowerFailureEntry(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  __int64 v9; // r8
  int v10; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  v5 = a3;
  LOBYTE(v10) = 0;
  v7 = FdoExt(a1);
  UsbhException(a1, 0, 85, (int)&v11, 4, v5, 0, usbfile_fdopwr_c, 1027, v10);
  v7[315] = v5;
  v8 = Usb_Disconnected(v5);
  v9 = 213LL;
  if ( !v8 )
    v9 = 212LL;
  UsbhSetFdoPowerState(a1, (unsigned int)v5, v9);
  Log(a1, 16, 1934645025, v5, 0LL);
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhReleaseFdoPwrLock(a1, *(_QWORD *)(a4 + 72));
  UsbhBusIoInvalidateDeviceRelations(a1, *(_QWORD *)(a4 + 72));
  UsbhReleasePowerContext(a1, a4);
  UsbhDisarmHubForWakeDetect(a1);
}
