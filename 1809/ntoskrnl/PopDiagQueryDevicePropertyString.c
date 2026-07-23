/*
 * XREFs of PopDiagQueryDevicePropertyString @ 0x140871708
 * Callers:
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E0B3C (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140873844 (PopDiagTraceFxComponentAccounting.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087C9EC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PopDiagQueryDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3)
{
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rdi
  __int16 v8; // ax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&NumberOfBytes);
  if ( v6 == -1073741789 )
  {
    if ( (unsigned int)NumberOfBytes <= 0xFFFF )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x67696450u);
      if ( PoolWithTag )
      {
        v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, NumberOfBytes, PoolWithTag, ResultLength);
        if ( v6 >= 0 )
        {
          *(_WORD *)a3 = ResultLength[0];
          v8 = NumberOfBytes;
          *(_QWORD *)(a3 + 8) = PoolWithTag;
          PoolWithTag = 0LL;
          *(_WORD *)(a3 + 2) = v8;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x67696450u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v6;
}
