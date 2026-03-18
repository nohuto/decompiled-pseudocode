/*
 * XREFs of RIMGetPanelId @ 0x1C0054A08
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetDeviceLocationInfo @ 0x1C00EC48C (RIMGetDeviceLocationInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMGetPointerDevicePDO @ 0x1C0054AB0 (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _QWORD *a2, ULONG *a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS DevicePropertyData; // eax
  void *v8; // rdi
  unsigned __int16 v9; // r9
  ULONG v10; // ecx
  PVOID Data; // [rsp+28h] [rbp-40h]
  ULONG RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+88h] [rbp+20h]

  *a2 = 0LL;
  *a3 = 0;
  v5 = RIMGetPointerDevicePDO(a1);
  if ( v5 >= 0 )
  {
    RequiredSize = 0;
    DevicePropertyData = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_PanelId, 0, 0, 0, 0LL, &RequiredSize, &Type);
    v5 = DevicePropertyData;
    if ( DevicePropertyData != -1073741789 )
    {
      if ( DevicePropertyData == -1073741772 )
        v5 = 0;
      goto LABEL_5;
    }
    v8 = (void *)Win32AllocPool(RequiredSize, 0x64695052u);
    if ( v8 )
    {
      v5 = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_PanelId, 0, 0, RequiredSize, v8, &RequiredSize, &Type);
      if ( v5 < 0 )
      {
        Win32FreePool((__int64)v8);
        LODWORD(Data) = v5;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x17u,
          (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
          Data);
LABEL_5:
        ObfDereferenceObject(Pdo);
        return (unsigned int)v5;
      }
      if ( Type == 18 )
      {
        v10 = RequiredSize;
        if ( RequiredSize )
        {
          if ( !*((_WORD *)v8 + ((unsigned __int64)RequiredSize >> 1) - 1) )
          {
            *a2 = v8;
            *a3 = v10;
            goto LABEL_5;
          }
          v5 = -1073741823;
          Win32FreePool((__int64)v8);
          v9 = 26;
        }
        else
        {
          v5 = -1073741823;
          Win32FreePool((__int64)v8);
          v9 = 25;
        }
      }
      else
      {
        v5 = -1073741823;
        Win32FreePool((__int64)v8);
        v9 = 24;
      }
    }
    else
    {
      v5 = -1073741801;
      v9 = 22;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v9,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
    goto LABEL_5;
  }
  return (unsigned int)v5;
}
