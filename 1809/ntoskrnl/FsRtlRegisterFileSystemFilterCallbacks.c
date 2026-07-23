/*
 * XREFs of FsRtlRegisterFileSystemFilterCallbacks @ 0x14016D190
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlRegisterFileSystemFilterCallbacks(
        struct _DRIVER_OBJECT *FilterDriverObject,
        PFS_FILTER_CALLBACKS Callbacks)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  DRIVER_ADD_DEVICE *PoolWithTag; // rax
  DRIVER_ADD_DEVICE *v5; // rdi
  NTSTATUS result; // eax

  if ( !FilterDriverObject || !Callbacks )
    return -1073741811;
  DriverExtension = FilterDriverObject->DriverExtension;
  PoolWithTag = (DRIVER_ADD_DEVICE *)ExAllocatePoolWithTag(
                                       NonPagedPoolNx,
                                       Callbacks->SizeOfFsFilterCallbacks,
                                       0x676D5346u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Callbacks, Callbacks->SizeOfFsFilterCallbacks);
  result = 0;
  DriverExtension[1].AddDevice = v5;
  return result;
}
