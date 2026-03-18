/*
 * XREFs of VfDevObjPreAddDevice @ 0x140973714
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401765F8 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140153B30 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 */

LOGICAL __fastcall VfDevObjPreAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VfFilterAttach(TargetDevice);
  }
  return result;
}
