/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0001740
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001400 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchWmiLog @ 0x1C00307C0 (ACPIDispatchWmiLog.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C0052A30 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00945B0 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C00947C0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0094D90 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0095310 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpQueryId @ 0x1C00A13C0 (ACPIFilterIrpQueryId.c)
 *     ACPIThermalWmi @ 0x1C00A2ED0 (ACPIThermalWmi.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C00AE0C0 (ACPIEcOtherIrpDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 728) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 728), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
