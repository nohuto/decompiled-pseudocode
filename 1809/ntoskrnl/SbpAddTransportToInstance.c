/*
 * XREFs of SbpAddTransportToInstance @ 0x1409FB08C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 */

__int64 SbpAddTransportToInstance()
{
  char *v0; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v2; // rsi
  unsigned int v3; // ebx
  char *PoolWithTag; // rax
  PDEVICE_OBJECT v5; // rdx
  __int64 v6; // rax
  IRP *v7; // rdx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  unsigned int v11[4]; // [rsp+50h] [rbp-30h] BYREF
  __int16 Object; // [rsp+60h] [rbp-20h] BYREF
  char v13; // [rsp+62h] [rbp-1Eh]
  int v14; // [rsp+64h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+20h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+28h] BYREF

  v0 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&InstanceName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v2 = FileObject;
  v3 = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x42626D53u);
    v0 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_3;
    memset(PoolWithTag, 0, 0xD0uLL);
    *(_DWORD *)v0 = 16;
    *((_DWORD *)v0 + 1) = 2;
    *((_DWORD *)v0 + 2) = 192;
    *(_OWORD *)(v0 + 12) = *(_OWORD *)L"\\Device\\VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3"
                                       "493609c0870}-0000";
    *(_OWORD *)(v0 + 28) = *(_OWORD *)L"VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 44) = *(_OWORD *)L"d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 60) = *(_OWORD *)L"17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 76) = *(_OWORD *)L"4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 92) = *(_OWORD *)L"270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 108) = *(_OWORD *)L"db7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    v5 = DeviceObject;
    *(_OWORD *)(v0 + 124) = *(_OWORD *)L"c079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 140) = *(_OWORD *)L"0ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 156) = *(_OWORD *)L"-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 172) = *(_OWORD *)L"93609c0870}-0000";
    *(_OWORD *)(v0 + 188) = *(_OWORD *)L"70}-0000";
    v15[1] = v15;
    Object = 1;
    v15[0] = v15;
    v13 = 6;
    v14 = 0;
    v6 = IopBuildDeviceIoControlRequest(
           1311152,
           (__int64)v5,
           v0,
           0xD0u,
           0LL,
           0,
           0,
           (__int64)&Object,
           (__int64)v11,
           retaddr);
    v7 = (IRP *)v6;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 184);
      v9 = DeviceObject;
      *(_QWORD *)(v8 - 24) = v2;
      *(_BYTE *)(v8 - 72) = 13;
      v3 = IofCallDriver(v9, v7);
      if ( v3 == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v3 = v11[0];
      }
    }
    else
    {
LABEL_3:
      v3 = -1073741670;
    }
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return v3;
}
