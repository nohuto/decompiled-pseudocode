/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406CF518
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406CF22C (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1406CF340 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407198C8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x140870FE0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408711A4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871608 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140871708 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140871950 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x1408723C0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408724CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873394 (PiCMUnregisterDeviceInterface.c)
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
