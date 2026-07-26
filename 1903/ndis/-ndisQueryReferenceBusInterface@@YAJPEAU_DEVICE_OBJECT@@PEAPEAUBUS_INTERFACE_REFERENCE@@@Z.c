/*
 * XREFs of ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C009CFCC
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1C01182E0 (-ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z.c)
 */

__int64 __fastcall ndisQueryReferenceBusInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  struct BUS_INTERFACE_REFERENCE *PoolWithTag; // rax
  unsigned __int16 v5; // r9
  int DriverInterface; // edi

  PoolWithTag = (struct BUS_INTERFACE_REFERENCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6962444Eu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(
                      DeviceObject,
                      &GUID_4747b320_62ce_11cf_a5d6_28db04c10000,
                      0x100u,
                      v5,
                      &PoolWithTag->Interface);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}
