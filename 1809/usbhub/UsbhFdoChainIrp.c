/*
 * XREFs of UsbhFdoChainIrp @ 0x1C0029CA8
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C000C2D0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoSystemControl @ 0x1C000CBC0 (UsbhFdoSystemControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0010590 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoReturnHubCount @ 0x1C0029B0C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0029BB4 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
