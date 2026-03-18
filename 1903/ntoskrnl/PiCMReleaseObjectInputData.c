/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406D02A8
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406CFFBC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1406D00D0 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140717AD8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408718E0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140871AA4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871F08 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140872008 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140872250 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140872420 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140872CC0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140872DCC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873C94 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
