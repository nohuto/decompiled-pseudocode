/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x14015FD30
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x14016CED0 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  unsigned __int64 DeviceType; // rax
  ULONG MaximumVirtualDiskNestingLevel; // esi
  ULONG v8; // edi
  __int64 v9; // rcx
  BOOLEAN v10; // r12
  IRP *v11; // rax
  int v12; // ebx
  ULONG v14; // edx
  __int16 Object; // [rsp+50h] [rbp-29h] BYREF
  char v16; // [rsp+52h] [rbp-27h]
  int v17; // [rsp+54h] [rbp-25h]
  _QWORD v18[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v19; // [rsp+68h] [rbp-11h] BYREF
  int v20; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-1h]
  __int64 v22; // [rsp+80h] [rbp+7h] BYREF
  __int64 v23; // [rsp+88h] [rbp+Fh]
  ULONG v24; // [rsp+90h] [rbp+17h]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  DeviceType = DeviceObject->DeviceType;
  MaximumVirtualDiskNestingLevel = 0;
  v8 = 1;
  if ( (unsigned int)DeviceType > 0x24 )
    return -1073741808;
  v9 = 0x100000018CLL;
  if ( !_bittest64(&v9, DeviceType) )
    return -1073741808;
  Object = 0;
  v18[1] = v18;
  v16 = 6;
  v18[0] = v18;
  v17 = 0;
  v10 = IoSetThreadHardErrorMode(0);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v19 = 1LL;
  v11 = (IRP *)IopBuildDeviceIoControlRequest(
                 2953616,
                 (__int64)DeviceObject,
                 &v19,
                 8u,
                 &v22,
                 0x14u,
                 0,
                 (__int64)&Object,
                 (__int64)&v20,
                 retaddr);
  if ( v11 )
  {
    v12 = IofCallDriver(DeviceObject, v11);
    if ( v12 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      v12 = v20;
    }
    if ( v12 >= 0 && v21 >= 0x14 && (_DWORD)v22 == 1 )
    {
      if ( v24 > FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      else if ( v24 )
      {
        MaximumVirtualDiskNestingLevel = v24;
      }
      if ( BYTE4(v22) )
        v8 = 0;
      v14 = v8;
      v8 |= 2u;
      if ( (v23 & 0x200000000LL) == 0 )
        v8 = v14;
    }
    else if ( v12 != -1073741670 )
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741670;
  }
  *NestingLevel = MaximumVirtualDiskNestingLevel;
  if ( NestingFlags )
    *NestingFlags = v8;
  IoSetThreadHardErrorMode(v10);
  return v12;
}
