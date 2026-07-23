/*
 * XREFs of MmIsDriverVerifying @ 0x14013A320
 * Callers:
 *     VfIsVerificationEnabled @ 0x140177F50 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140922338 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x140930CFC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140930D4C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140935088 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409350DC (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140936658 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
