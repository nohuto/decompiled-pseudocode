/*
 * XREFs of VfDevObjPreAddDevice @ 0x1409350DC
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14016BE24 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14013A320 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
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
