/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C0160DB4
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C004C510 (DpiMiracastInterfaceChange.c)
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C0161018 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C016362C (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        POOL_TYPE PoolType,
        _QWORD *a4,
        _DWORD *a5)
{
  void *v5; // rdi
  _DWORD *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // eax
  int v22; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v15 = v11;
        if ( v11 != -1073741789 )
          goto LABEL_10;
        LODWORD(Size) = Size + 2;
        PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v15) = -1073741670;
          v24 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
          *(_QWORD *)(v24 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v24);
          return (unsigned int)v15;
        }
        memset(PoolWithTag, 0, (unsigned int)Size);
        v21 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
        v15 = v21;
        if ( v21 < 0 )
        {
LABEL_10:
          v25 = WdLogNewEntry5_WdError(v13, v12, v14);
          *(_QWORD *)(v25 + 24) = v15;
          WdLogEvent5_WdError(v25);
          if ( (int)v15 < 0 )
          {
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            return (unsigned int)v15;
          }
        }
        v22 = Size;
        *a4 = v5;
        *v10 = v22;
        return (unsigned int)v15;
      }
    }
  }
  return 3221225485LL;
}
