/*
 * XREFs of SbpStartLanman @ 0x1409FB274
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 */

__int64 SbpStartLanman()
{
  char *v0; // rsi
  void *v1; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v3; // r14
  NTSTATUS v4; // ebx
  char *PoolWithTag; // rax
  __int64 v6; // rax
  IRP *v7; // rdx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  char *v10; // rax
  PDEVICE_OBJECT v11; // rdx
  __int64 v12; // rax
  IRP *v13; // rdx
  __int64 v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  __int16 Object; // [rsp+58h] [rbp-29h] BYREF
  char v18; // [rsp+5Ah] [rbp-27h]
  int v19; // [rsp+5Ch] [rbp-25h]
  __int64 v20; // [rsp+60h] [rbp-21h] BYREF
  __int64 *v21; // [rsp+68h] [rbp-19h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-11h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-9h] BYREF
  _DWORD v24[4]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v25[40]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+5Fh]

  FileObject = 0LL;
  v0 = 0LL;
  v1 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&LanmanRedirectorName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v3 = FileObject;
  v4 = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_12;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x8CuLL, 0x42626D53u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_3;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 15) = -1;
  *((_DWORD *)PoolWithTag + 6) = 512;
  *(_DWORD *)PoolWithTag = 3600;
  *((_DWORD *)PoolWithTag + 4) = 5;
  *((_DWORD *)PoolWithTag + 18) = 5;
  *((_DWORD *)PoolWithTag + 5) = 45;
  *((_DWORD *)PoolWithTag + 9) = 10;
  *((_DWORD *)PoolWithTag + 11) = 10;
  *((_DWORD *)PoolWithTag + 10) = 500;
  *((_DWORD *)PoolWithTag + 12) = 500;
  *((_DWORD *)PoolWithTag + 14) = 45;
  *((_DWORD *)PoolWithTag + 2) = 16;
  *((_DWORD *)PoolWithTag + 1) = 250;
  *((_DWORD *)PoolWithTag + 3) = 600;
  *((_DWORD *)PoolWithTag + 7) = 17;
  *((_DWORD *)PoolWithTag + 8) = 6144;
  *((_DWORD *)PoolWithTag + 13) = 40;
  *((_DWORD *)PoolWithTag + 16) = 3;
  *((_DWORD *)PoolWithTag + 17) = 20;
  *(_QWORD *)(PoolWithTag + 76) = 60LL;
  *((_DWORD *)PoolWithTag + 21) = 1;
  *((_DWORD *)PoolWithTag + 22) = 1;
  *((_DWORD *)PoolWithTag + 23) = 1;
  *((_DWORD *)PoolWithTag + 24) = 1;
  *((_DWORD *)PoolWithTag + 25) = 1;
  *((_DWORD *)PoolWithTag + 26) = 1;
  *((_DWORD *)PoolWithTag + 27) = 1;
  *((_DWORD *)PoolWithTag + 28) = 1;
  *((_DWORD *)PoolWithTag + 29) = 1;
  *((_DWORD *)PoolWithTag + 30) = 1;
  *((_DWORD *)PoolWithTag + 31) = 1;
  *((_DWORD *)PoolWithTag + 32) = 1;
  *(_QWORD *)(PoolWithTag + 132) = 1LL;
  v21 = &v20;
  v20 = (__int64)&v20;
  Object = 1;
  v18 = 6;
  v19 = 0;
  memset(v25, 0, 0x24uLL);
  v6 = IopBuildDeviceIoControlRequest(
         -2146172527,
         (__int64)DeviceObject,
         v25,
         0x24u,
         v1,
         0x8Cu,
         0,
         (__int64)&Object,
         (__int64)v24,
         retaddr);
  v7 = (IRP *)v6;
  if ( !v6 )
    goto LABEL_3;
  v8 = *(_QWORD *)(v6 + 184);
  v9 = DeviceObject;
  *(_QWORD *)(v8 - 24) = v3;
  *(_BYTE *)(v8 - 72) = 13;
  v4 = IofCallDriver(v9, v7);
  if ( v4 == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v4 = v24[0];
  }
  if ( v4 >= 0 )
  {
    v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x76uLL, 0x42626D53u);
    v0 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x76uLL);
      v0[65] |= 1u;
      *((_DWORD *)v0 + 17) = -1;
      v11 = DeviceObject;
      *((_WORD *)v0 + 6) = 94;
      v0[84] = 1;
      *((_DWORD *)v0 + 19) = 30;
      *((_WORD *)v0 + 43) = 26;
      *((_DWORD *)v0 + 20) = 30;
      *((_DWORD *)v0 + 8) = 20;
      *((_DWORD *)v0 + 10) = 20;
      *((_DWORD *)v0 + 6) = 30;
      v0[64] = 31;
      *((_DWORD *)v0 + 18) = 10;
      *((_DWORD *)v0 + 5) = 120;
      *((_DWORD *)v0 + 7) = 0x8000;
      *((_DWORD *)v0 + 9) = 5;
      *((_DWORD *)v0 + 11) = 2048;
      *((_DWORD *)v0 + 12) = 32;
      *((_DWORD *)v0 + 13) = 512;
      *((_DWORD *)v0 + 14) = 0x1000000;
      *((_DWORD *)v0 + 15) = 0x100000;
      *(_OWORD *)(v0 + 88) = *(_OWORD *)L"\\Device\\vmsmb";
      *((_QWORD *)v0 + 13) = *(_QWORD *)L"vmsmb";
      *((_WORD *)v0 + 56) = aDeviceVmsmb[12];
      v21 = &v20;
      v20 = (__int64)&v20;
      Object = 1;
      v18 = 6;
      v19 = 0;
      v12 = IopBuildDeviceIoControlRequest(
              1311648,
              (__int64)v11,
              v0,
              0x76u,
              0LL,
              0,
              0,
              (__int64)&Object,
              (__int64)v24,
              retaddr);
      v13 = (IRP *)v12;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v12 + 184);
        v15 = DeviceObject;
        *(_QWORD *)(v14 - 24) = v3;
        *(_BYTE *)(v14 - 72) = 13;
        v4 = IofCallDriver(v15, v13);
        if ( v4 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v4 = v24[0];
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    v4 = -1073741670;
  }
LABEL_12:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42626D53u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return (unsigned int)v4;
}
