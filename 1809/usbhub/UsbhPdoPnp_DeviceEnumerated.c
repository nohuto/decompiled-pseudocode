/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x1C0028BD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0028CE0 (UsbhSetPdoRegistryParameter.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0028DCC (UsbhQueryD3ColdSupport.c)
 *     UsbhPublishBillboardDetails @ 0x1C0059DEC (UsbhPublishBillboardDetails.c)
 *     UsbhPublishDualRoleFeaturesProperty @ 0x1C005A000 (UsbhPublishDualRoleFeaturesProperty.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rbp
  __int64 PortData; // rax

  v4 = PdoExt((__int64)DeviceObject);
  UsbhQueryD3ColdSupport(*((PDEVICE_OBJECT *)v4 + 148), DeviceObject);
  v5 = PdoExt((__int64)DeviceObject);
  if ( v5[706] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v5 + 706, 4u);
  PortData = UsbhGetPortData(*((_QWORD *)v5 + 148), *((_WORD *)v5 + 714));
  if ( PortData )
    UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(PortData + 544), 4u);
  UsbhEnableTimerObject(
    *((_QWORD *)v4 + 148),
    (__int64)(v4 + 426),
    10000,
    *((unsigned __int16 *)v4 + 714),
    *((_QWORD *)v4 + 105),
    0x77464E44u);
  if ( *((_QWORD *)v4 + 301) )
    UsbhPublishBillboardDetails(DeviceObject);
  if ( (v4[358] & 0x40000) != 0 )
    UsbhPublishDualRoleFeaturesProperty(DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
