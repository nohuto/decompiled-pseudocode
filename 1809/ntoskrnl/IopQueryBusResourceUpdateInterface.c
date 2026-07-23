/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x14083C220
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x140842898 (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 */

__int64 __fastcall IopQueryBusResourceUpdateInterface(PDEVICE_OBJECT DeviceObject, USHORT **a2)
{
  USHORT *PoolWithTag; // rax
  USHORT *v5; // rbx
  int Interface; // edi

  PoolWithTag = (USHORT *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20207050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x28uLL);
  Interface = PnpQueryInterface(DeviceObject, (ULONG_PTR)&GUID_BUS_RESOURCE_UPDATE_INTERFACE, 0, 0x28u, 0LL, v5);
  if ( Interface >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)Interface;
  }
}
