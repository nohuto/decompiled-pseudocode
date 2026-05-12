/*
 * XREFs of RaidGetD3ColdInterface @ 0x1C001B854
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidSetD3Cold @ 0x1C001B7E0 (RaidSetD3Cold.c)
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidQueryD3ColdInterface @ 0x1C001B950 (RaidQueryD3ColdInterface.c)
 */

__int64 __fastcall RaidGetD3ColdInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v7; // rax
  PVOID Pool; // rax
  void *v9; // rbx
  int D3ColdInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)DeviceExtension )
  {
    if ( *(_DWORD *)DeviceExtension != 1 )
      return 3221225485LL;
    v5 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[187];
      goto LABEL_5;
    }
  }
  else
  {
    v4 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[675];
LABEL_5:
      if ( v7 )
      {
        *a2 = v7;
        return 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
    return 3221225800LL;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x57506152u, (__int64)DeviceObject);
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  D3ColdInterface = RaidQueryD3ColdInterface(DeviceObject, Pool);
  if ( D3ColdInterface >= 0 )
  {
    *a2 = v9;
    if ( v4 )
    {
      v4[675] = v9;
    }
    else if ( v5 )
    {
      v5[187] = v9;
    }
  }
  else
  {
    ExFreePoolWithTag(v9, 0x57506152u);
  }
  return (unsigned int)D3ColdInterface;
}
