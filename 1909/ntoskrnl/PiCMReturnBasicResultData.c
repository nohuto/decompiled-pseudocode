/*
 * XREFs of PiCMReturnBasicResultData @ 0x140721E08
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14077CCD4 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140870FE0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408711A4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871608 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140871708 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140871950 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x140872FDC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1408731D4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873394 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
