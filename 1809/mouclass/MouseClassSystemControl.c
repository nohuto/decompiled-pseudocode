/*
 * XREFs of MouseClassSystemControl @ 0x1C000DD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseClassSystemControl(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  char *DeviceExtension; // r14
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Tag, File, 1u, 0x20u);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 184), DeviceObject, Tag, &IrpDisposition);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotCompleted )
      {
        IofCompleteRequest(Tag, 0);
      }
      else
      {
        ++Tag->CurrentLocation;
        ++Tag->Tail.Overlay.CurrentStackLocation;
        v6 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceObject->DeviceExtension + 2), Tag);
      }
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Tag, 0x20u);
  }
  else
  {
    Tag->IoStatus.Information = 0LL;
    Tag->IoStatus.Status = v5;
    IofCompleteRequest(Tag, 0);
  }
  return v6;
}
