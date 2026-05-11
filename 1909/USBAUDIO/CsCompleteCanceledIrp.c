/*
 * XREFs of CsCompleteCanceledIrp @ 0x1C0028F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  ExFreePool(Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink);
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
}
