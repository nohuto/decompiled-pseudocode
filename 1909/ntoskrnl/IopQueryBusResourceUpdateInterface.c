/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x140875484
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14087C754 (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpQueryInterface @ 0x1407164D0 (PnpQueryInterface.c)
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
