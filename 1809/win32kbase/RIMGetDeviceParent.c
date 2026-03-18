/*
 * XREFs of RIMGetDeviceParent @ 0x1C011B0FC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1C011795C (RIMGetPointerDevicePDO.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONG v14; // eax
  void *v15; // rax
  NTSTATUS DevicePropertyData; // r15d
  PVOID Data; // [rsp+28h] [rbp-38h]
  PVOID Dataa; // [rsp+28h] [rbp-38h]
  PDEVICE_OBJECT Pdo; // [rsp+40h] [rbp-20h] BYREF
  PVOID v20; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+80h] [rbp+20h] BYREF
  int v23; // [rsp+84h] [rbp+24h]
  ULONG Type; // [rsp+90h] [rbp+30h] BYREF
  PVOID Object; // [rsp+98h] [rbp+38h] BYREF

  v23 = HIDWORD(a1);
  v3 = 0;
  Object = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  Pdo = 0LL;
  RequiredSize = 0;
  v5 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a2 + 208), a2, a3, &Handle, &v20, (PDEVICE_OBJECT *)&Object);
  if ( v5 >= 0 )
  {
    if ( !v20 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object, &Pdo, v10) >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      v14 = RequiredSize;
      if ( !RequiredSize )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
        v14 = RequiredSize;
      }
      v15 = (void *)Win32AllocPool(v14, 0x70707352u);
      *(_QWORD *)(a2 + 320) = v15;
      if ( v15 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               v15,
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
          WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x37u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, Dataa);
        }
      }
    }
    ObfDereferenceObject(Pdo);
    ZwClose(Handle);
    ObfDereferenceObject(v20);
    ObfDereferenceObject(Object);
    return v3;
  }
  else
  {
    LODWORD(Data) = v5;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x36u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, Data);
    return 0LL;
  }
}
