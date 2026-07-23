/*
 * XREFs of PiCMReturnBasicResultData @ 0x1405A060C
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1405A0414 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14074F450 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140838158 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408382FC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140838710 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408387EC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140838A10 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140838BD8 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x140839F34 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14083A104 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14083A2A0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
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
