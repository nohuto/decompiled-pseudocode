/*
 * XREFs of RIMGetDeviceParent @ 0x1C01438E8
 * Callers:
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0142CE0 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtCreateDev @ 0x1C014DED4 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051278 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1C005CF40 (RIMGetPointerDevicePDO.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rbx
  PVOID v4; // rsi
  HANDLE v5; // r14
  unsigned int v6; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG v18; // eax
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  char v21; // r13
  int v22; // edx
  PVOID v23; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG Type; // [rsp+B0h] [rbp+50h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  Pdo = 0LL;
  v5 = 0LL;
  RequiredSize = 0;
  v6 = 0;
  Object = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  if ( a1 )
  {
    v14 = RIMGetPointerDevicePDO(a1, &Pdo, a3);
  }
  else
  {
    v8 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)(a2 + 208),
           a2,
           a3,
           &Handle,
           &v23,
           (PDEVICE_OBJECT *)&Object);
    v11 = (unsigned int)v8;
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_D((_DWORD)gRimLog, v9, 1, 54, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v8);
      }
      return 0LL;
    }
    v4 = v23;
    if ( !v23 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v8, v9, v10);
    v3 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v9, v10);
    ObfReferenceObject(v3);
    v14 = RIMGetPointerDevicePDO(v3, &Pdo, v13);
    v5 = Handle;
  }
  if ( v14 >= 0
    && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    v18 = RequiredSize;
    if ( !RequiredSize )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      v18 = RequiredSize;
    }
    Data = (void *)Win32AllocPool(v18, 0x70707352u);
    *(_QWORD *)(a2 + 320) = Data;
    if ( Data )
    {
      DevicePropertyData = IoGetDevicePropertyData(
                             Pdo,
                             &DEVPKEY_Device_Parent,
                             0,
                             0,
                             RequiredSize,
                             Data,
                             &RequiredSize,
                             &Type);
      v21 = DevicePropertyData;
      if ( DevicePropertyData >= 0 )
      {
        v6 = 1;
        *(_DWORD *)(a2 + 328) = RequiredSize;
      }
      else
      {
        Win32FreePool(*(_QWORD *)(a2 + 320));
        *(_QWORD *)(a2 + 320) = 0LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_D((_DWORD)gRimLog, v22, 1, 55, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v21);
        }
      }
    }
  }
  if ( Pdo )
    ObfDereferenceObject(Pdo);
  if ( v5 )
  {
    ZwClose(v5);
    ObfDereferenceObject(v4);
    ObfDereferenceObject(v3);
  }
  return v6;
}
