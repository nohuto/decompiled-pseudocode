/*
 * XREFs of RIMGetPanelId @ 0x1C011777C
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetDeviceLocationInfo @ 0x1C0117140 (RIMGetDeviceLocationInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1C011795C (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _QWORD *a2, ULONG *a3)
{
  NTSTATUS DevicePropertyData; // ebx
  void *v6; // rdi
  unsigned __int16 v7; // r9
  ULONG v8; // ecx
  PVOID Data; // [rsp+28h] [rbp-40h]
  ULONG RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+88h] [rbp+20h]

  *a2 = 0LL;
  *a3 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    RequiredSize = 0;
    DevicePropertyData = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_PanelId, 0, 0, 0, 0LL, &RequiredSize, &Type);
    if ( DevicePropertyData != -1073741789 )
    {
      if ( DevicePropertyData == -1073741772 )
        DevicePropertyData = 0;
      goto LABEL_17;
    }
    v6 = (void *)Win32AllocPool(RequiredSize, 0x64695052u);
    if ( v6 )
    {
      DevicePropertyData = IoGetDevicePropertyData(
                             Pdo,
                             &DEVPKEY_Device_PanelId,
                             0,
                             0,
                             RequiredSize,
                             v6,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData < 0 )
      {
        Win32FreePool((__int64)v6);
        LODWORD(Data) = DevicePropertyData;
        WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x17u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, Data);
LABEL_17:
        ObfDereferenceObject(Pdo);
        return (unsigned int)DevicePropertyData;
      }
      if ( Type == 18 )
      {
        v8 = RequiredSize;
        if ( RequiredSize )
        {
          if ( !*((_WORD *)v6 + ((unsigned __int64)RequiredSize >> 1) - 1) )
          {
            *a2 = v6;
            *a3 = v8;
            goto LABEL_17;
          }
          DevicePropertyData = -1073741823;
          Win32FreePool((__int64)v6);
          v7 = 26;
        }
        else
        {
          DevicePropertyData = -1073741823;
          Win32FreePool((__int64)v6);
          v7 = 25;
        }
      }
      else
      {
        DevicePropertyData = -1073741823;
        Win32FreePool((__int64)v6);
        v7 = 24;
      }
    }
    else
    {
      DevicePropertyData = -1073741801;
      v7 = 22;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v7, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
    goto LABEL_17;
  }
  return (unsigned int)DevicePropertyData;
}
