/*
 * XREFs of IoForwardIrpSynchronously @ 0x1406B1C10
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x1401282E0 (IoSynchronousCallDriver.c)
 */

BOOLEAN __stdcall IoForwardIrpSynchronously(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  if ( Irp->CurrentLocation == 1 )
    return 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  IoSynchronousCallDriver(DeviceObject, Irp);
  return 1;
}
