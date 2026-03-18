/*
 * XREFs of PiCMReturnBasicResultData @ 0x14059F60C
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14074E280 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140836F18 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408370BC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408374D0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408375AC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408377D0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140837998 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x140838CF4 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140838EC4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839060 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
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
