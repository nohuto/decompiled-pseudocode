/*
 * XREFs of ?staticCsqCompleteCanceledIrp@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x1C000BC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

void __fastcall CSidebandDevice::staticCsqCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  Irp->IoStatus.Status = -1073741536;
  Irp->IoStatus.Information = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x89u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  IofCompleteRequest(Irp, 0);
}
