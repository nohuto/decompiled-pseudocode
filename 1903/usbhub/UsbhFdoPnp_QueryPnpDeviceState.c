/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1C002B8C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rdi
  unsigned int v6; // ecx
  int v7; // [rsp+48h] [rbp-20h]

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  if ( *((_DWORD *)v4 + 643) )
  {
    v6 = *((_DWORD *)v4 + 643);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids,
        *((_DWORD *)v4 + 643));
      v6 = *((_DWORD *)v4 + 643);
    }
    LOBYTE(v7) = 0;
    Irp->IoStatus.Information |= v6;
    Irp->IoStatus.Status = 0;
    UsbhException(a1, 0, 87, (_DWORD)Irp + 56, 8, 0, 0, usbfile_pnp_c, 2265, v7);
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], Irp);
}
