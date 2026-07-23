/*
 * XREFs of VfDevObjPostAddDevice @ 0x140935088
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14016BE24 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14013A320 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4,
        int a5)
{
  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 )
  {
    if ( MmIsDriverVerifying(DriverObject) )
      VfFilterAttach(TargetDevice);
  }
}
