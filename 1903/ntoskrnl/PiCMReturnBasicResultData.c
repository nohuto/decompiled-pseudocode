/*
 * XREFs of PiCMReturnBasicResultData @ 0x14071FF68
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x1407796F4 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1408718E0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140871AA4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871F08 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140872008 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140872250 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140872420 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1408738DC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140873AD4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873C94 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
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
