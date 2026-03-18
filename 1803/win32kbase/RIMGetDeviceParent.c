/*
 * XREFs of RIMGetDeviceParent @ 0x1C00EFA6C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00EE0A4 (RIMAllocateHidConfigDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMGetPointerDevicePDO @ 0x1C0054AB0 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // eax
  void *v12; // rax
  NTSTATUS DevicePropertyData; // r15d
  PVOID Data; // [rsp+28h] [rbp-38h]
  PVOID Dataa; // [rsp+28h] [rbp-38h]
  PDEVICE_OBJECT Pdo; // [rsp+40h] [rbp-20h] BYREF
  PVOID v17; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+80h] [rbp+20h] BYREF
  int v20; // [rsp+84h] [rbp+24h]
  ULONG Type; // [rsp+90h] [rbp+30h] BYREF
  PVOID Object; // [rsp+98h] [rbp+38h] BYREF

  v20 = HIDWORD(a1);
  v3 = 0;
  Object = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  Pdo = 0LL;
  RequiredSize = 0;
  v5 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a2 + 208), a2, a3, &Handle, &v17, (PDEVICE_OBJECT *)&Object);
  if ( v5 >= 0 )
  {
    if ( !v17 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object, &Pdo) >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      v11 = RequiredSize;
      if ( !RequiredSize )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
        v11 = RequiredSize;
      }
      v12 = (void *)Win32AllocPool(v11, 0x70707352u);
      *(_QWORD *)(a2 + 320) = v12;
      if ( v12 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               v12,
                               &RequiredSize,
                               &Type);
        if ( DevicePropertyData >= 0 )
        {
          v3 = 1;
          *(_DWORD *)(a2 + 328) = RequiredSize;
        }
        else
        {
          Win32FreePool(*(_QWORD *)(a2 + 320));
          *(_QWORD *)(a2 + 320) = 0LL;
          LODWORD(Dataa) = DevicePropertyData;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x34u,
            (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
            Dataa);
        }
      }
    }
    ObfDereferenceObject(Pdo);
    ZwClose(Handle);
    ObfDereferenceObject(v17);
    ObfDereferenceObject(Object);
    return v3;
  }
  else
  {
    LODWORD(Data) = v5;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x33u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      Data);
    return 0LL;
  }
}
