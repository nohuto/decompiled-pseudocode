/*
 * XREFs of MmIsDriverVerifying @ 0x140153B30
 * Callers:
 *     VfIsVerificationEnabled @ 0x140181740 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x14095FF3C (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x14096E57C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x14096E5CC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409736C0 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x140973714 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140974C84 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
