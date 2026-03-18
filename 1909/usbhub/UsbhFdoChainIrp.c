/*
 * XREFs of UsbhFdoChainIrp @ 0x1C002AE68
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C000C910 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoSystemControl @ 0x1C000D260 (UsbhFdoSystemControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0010B80 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoReturnHubCount @ 0x1C002ACCC (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C002AD74 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoDeviceControl @ 0x1C003F940 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
