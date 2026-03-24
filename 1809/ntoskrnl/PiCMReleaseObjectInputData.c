/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14059D6AC
 * Callers:
 *     PiCMGetObjectList @ 0x14059D4EC (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x14059E358 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406E91A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x140836EF8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x14083709C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408374B0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x14083758C (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408377B0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140837978 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140838148 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140838224 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140838634 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839040 (PiCMUnregisterDeviceInterface.c)
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
