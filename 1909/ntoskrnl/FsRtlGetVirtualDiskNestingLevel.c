/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x140175DE0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x140175F90 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  ULONG v6; // edi
  ULONG MaximumVirtualDiskNestingLevel; // esi
  unsigned __int64 DeviceType; // rax
  __int64 v9; // rcx
  BOOLEAN v10; // r12
  IRP *v11; // rax
  int v12; // ebx
  ULONG v14; // edx
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  __int16 Object; // [rsp+58h] [rbp-21h] BYREF
  char v17; // [rsp+5Ah] [rbp-1Fh]
  char v18; // [rsp+5Bh] [rbp-1Eh]
  int v19; // [rsp+5Ch] [rbp-1Dh]
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  __int64 v24; // [rsp+88h] [rbp+Fh]
  ULONG v25; // [rsp+90h] [rbp+17h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 1;
  v24 = 0LL;
  v25 = 0;
  MaximumVirtualDiskNestingLevel = 0;
  DeviceType = DeviceObject->DeviceType;
  v18 = 0;
  v15 = 0LL;
  if ( (unsigned int)DeviceType > 0x24 )
    return -1073741808;
  v9 = 0x100000018CLL;
  if ( !_bittest64(&v9, DeviceType) )
    return -1073741808;
  Object = 0;
  v20[1] = v20;
  v17 = 6;
  v20[0] = v20;
  v19 = 0;
  v10 = IoSetThreadHardErrorMode(0);
  v15 = 1LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v11 = (IRP *)IopBuildDeviceIoControlRequest(
                 2953616,
                 (int)DeviceObject,
                 &v15,
                 8u,
                 &v23,
                 0x14u,
                 0,
                 (__int64)&Object,
                 (__int64)&v21);
  if ( v11 )
  {
    v12 = IofCallDriver(DeviceObject, v11);
    if ( v12 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      v12 = v21;
    }
    if ( v12 >= 0 && v22 >= 0x14 && (_DWORD)v23 == 1 )
    {
      if ( v25 > FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      else if ( v25 )
      {
        MaximumVirtualDiskNestingLevel = v25;
      }
      if ( BYTE4(v23) )
        v6 = 0;
      v14 = v6;
      v6 |= 2u;
      if ( (v24 & 0x200000000LL) == 0 )
        v6 = v14;
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
    *NestingFlags = v6;
  IoSetThreadHardErrorMode(v10);
  return v12;
}
