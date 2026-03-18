/*
 * XREFs of UsbhPdoPnp_QueryPnpDeviceState @ 0x1C002C120
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C005BFC8 (UsbhPdo_ReportPnPFailureProblem.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryPnpDeviceState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  unsigned int Status; // ebx
  int v6; // eax

  v4 = PdoExt((__int64)DeviceObject);
  Status = 0;
  v6 = v4[283];
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        15,
        (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
        v6);
    if ( v4[705] )
      UsbhPdo_ReportPnPFailureProblem(DeviceObject);
    Irp->IoStatus.Information |= (unsigned int)v4[283];
    Irp->IoStatus.Status = 0;
  }
  else
  {
    Status = Irp->IoStatus.Status;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
