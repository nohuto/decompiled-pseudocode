/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1C002A760
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rdi
  __int64 v5; // rax
  int v7; // [rsp+48h] [rbp-10h]

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)Irp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  v5 = *((unsigned int *)v4 + 643);
  if ( (_DWORD)v5 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids,
        *((_DWORD *)v4 + 643));
      v5 = *((unsigned int *)v4 + 643);
    }
    LOBYTE(v7) = 0;
    Irp->IoStatus.Information |= v5;
    Irp->IoStatus.Status = 0;
    UsbhException(a1, 0, 87, (_DWORD)Irp + 56, 8, 0, 0, usbfile_pnp_c, 2265, v7);
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], Irp);
}
