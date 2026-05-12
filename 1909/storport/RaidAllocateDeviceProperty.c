/*
 * XREFs of RaidAllocateDeviceProperty @ 0x1C001A33C
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAllocateDeviceProperty(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rbx
  NTSTATUS DeviceProperty; // edi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, (PULONG)&NumberOfBytes);
  if ( result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x54456152u);
    if ( PoolWithTag )
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceObject,
                         DevicePropertyHardwareID,
                         NumberOfBytes,
                         PoolWithTag,
                         (PULONG)&NumberOfBytes);
      if ( DeviceProperty < 0 )
        ExFreePoolWithTag(PoolWithTag, 0x54456152u);
      else
        *a3 = PoolWithTag;
      return DeviceProperty;
    }
    else
    {
      return -1073741801;
    }
  }
  else if ( result >= 0 )
  {
    return -1073741823;
  }
  return result;
}
