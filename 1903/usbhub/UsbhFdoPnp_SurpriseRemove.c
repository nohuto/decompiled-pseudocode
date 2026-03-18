/*
 * XREFs of UsbhFdoPnp_SurpriseRemove @ 0x1C0051BB0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     Usbh_FDO_Pnp_State @ 0x1C0029494 (Usbh_FDO_Pnp_State.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_SurpriseRemove(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  _DWORD *v5; // rax

  Log(a1, 2, 1716736545, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  *((_DWORD *)v4 + 640) |= 0x4000u;
  v5 = FdoExt(a1);
  Usbh_FDO_Pnp_State((__int64)(v5 + 346), 3);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
