/*
 * XREFs of MmIsDriverVerifying @ 0x14013A220
 * Callers:
 *     VfIsVerificationEnabled @ 0x140177E50 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140921338 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x14092FCFC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x14092FD4C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140934088 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409340DC (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140935658 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
