/*
 * XREFs of ndisQueryReenumerateSelfInterface @ 0x1C01189FC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1C01182E0 (-ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z.c)
 */

__int64 __fastcall ndisQueryReenumerateSelfInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  struct _INTERFACE *PoolWithTag; // rax
  __int64 v5; // r9
  NTSTATUS DriverInterface; // edi

  PoolWithTag = (struct _INTERFACE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6962444Eu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(DeviceObject, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 1u, v5, PoolWithTag);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}
