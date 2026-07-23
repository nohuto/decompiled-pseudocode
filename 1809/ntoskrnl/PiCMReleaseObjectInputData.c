/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14059E6AC
 * Callers:
 *     PiCMGetObjectList @ 0x14059E4EC (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x14059F358 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405A0414 (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406EA444 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x140838158 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408382FC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140838710 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408387EC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140838A10 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140838BD8 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x1408393A8 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140839484 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14083A2A0 (PiCMUnregisterDeviceInterface.c)
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
