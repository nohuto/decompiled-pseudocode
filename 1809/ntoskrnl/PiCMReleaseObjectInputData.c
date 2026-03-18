/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14059D6AC
 * Callers:
 *     PiCMGetObjectList @ 0x14059D4EC (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x14059E358 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406E91C4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x140836F18 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408370BC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408374D0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408375AC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408377D0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140837998 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140838168 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140838244 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140838654 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839060 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
