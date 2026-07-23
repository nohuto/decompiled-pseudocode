/*
 * XREFs of PnprIsMemoryDevice @ 0x1408362F8
 * Callers:
 *     PnprAddDeviceResources @ 0x140835510 (PnprAddDeviceResources.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140587930 (IoGetDevicePropertyData.c)
 *     IoGetDeviceInterfaces @ 0x1405A0F10 (IoGetDeviceInterfaces.c)
 */

char __fastcall PnprIsMemoryDevice(PDEVICE_OBJECT PhysicalDeviceObject, char a2)
{
  PZZWSTR v2; // rbx
  char v3; // di
  NTSTATUS DeviceInterfaces; // eax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-28h] BYREF
  char Data; // [rsp+78h] [rbp+10h] BYREF
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0;
  SymbolicLinkList = 0LL;
  if ( !a2 )
  {
    if ( IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Spare_Memory, 0, 0, 1u, &Data, &RequiredSize, &Type) < 0
      || Type != 17
      || !Data )
    {
      return v3;
    }
    goto LABEL_8;
  }
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVICE_MEMORY, PhysicalDeviceObject, 0, &SymbolicLinkList);
  v2 = SymbolicLinkList;
  if ( DeviceInterfaces >= 0 && *SymbolicLinkList )
LABEL_8:
    v3 = 1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v3;
}
