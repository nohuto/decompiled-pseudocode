/*
 * XREFs of UsbhFdoPnp_RemoveDevice @ 0x1C0051910
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     Usbh_FDO_Pnp_State @ 0x1C0029494 (Usbh_FDO_Pnp_State.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhReleaseHubNumber @ 0x1C0051E60 (UsbhReleaseHubNumber.c)
 *     UsbhSshDisabled @ 0x1C005DB2C (UsbhSshDisabled.c)
 */

__int64 __fastcall UsbhFdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  unsigned int v6; // ebp
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  unsigned int v10; // edi

  Log((__int64)DeviceObject, 2, 1716667725, 0LL, (__int64)Irp);
  v4 = FdoExt((__int64)DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  v5 = FdoExt((__int64)DeviceObject);
  UsbhSshDisabled(DeviceObject, v5 + 346);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, File, 1u, 0x20u);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v6;
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  else
  {
    Log((__int64)DeviceObject, 2, 1769174128, 0LL, 0LL);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v8 = FdoExt((__int64)DeviceObject);
      if ( *((_QWORD *)v8 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64))v8 + 554))(*((_QWORD *)v8 + 529), 0LL, 5LL);
    }
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, 0x20u);
    v9 = FdoExt((__int64)DeviceObject);
    Usbh_FDO_Pnp_State((__int64)(v9 + 346), 2);
    UsbhReleaseHubNumber(DeviceObject);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v10 = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 151), Irp);
    if ( v4[1221] )
      KeWaitForSingleObject(v4 + 1224, Executive, 0, 0, 0LL);
    IoDetachDevice(*((PDEVICE_OBJECT *)v4 + 151));
    IoDeleteDevice(DeviceObject);
    return v10;
  }
}
