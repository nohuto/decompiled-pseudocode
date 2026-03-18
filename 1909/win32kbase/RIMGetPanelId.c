/*
 * XREFs of RIMGetPanelId @ 0x1C013D8EC
 * Callers:
 *     RIMGetDeviceLocationInfo @ 0x1C013D2F0 (RIMGetDeviceLocationInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RIMGetPointerDevicePDO @ 0x1C005DBFC (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _QWORD *a2, ULONG *a3)
{
  int DevicePropertyData; // ebx
  int v6; // edx
  void *Data; // rdi
  int v8; // r9d
  int v9; // edx
  ULONG v10; // ecx
  ULONG RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+88h] [rbp+20h] BYREF

  *a2 = 0LL;
  *a3 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1, &Pdo, (__int64)a3);
  if ( DevicePropertyData >= 0 )
  {
    RequiredSize = 0;
    DevicePropertyData = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_PanelId, 0, 0, 0, 0LL, &RequiredSize, &Type);
    if ( DevicePropertyData != -1073741789 )
    {
      if ( DevicePropertyData == -1073741772 )
        DevicePropertyData = 0;
      goto LABEL_22;
    }
    Data = (void *)Win32AllocPool(RequiredSize, 0x64695052u);
    if ( Data )
    {
      DevicePropertyData = IoGetDevicePropertyData(
                             Pdo,
                             &DEVPKEY_Device_PanelId,
                             0,
                             0,
                             RequiredSize,
                             Data,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData < 0 )
      {
        Win32FreePool((__int64)Data);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_D(
            (_DWORD)gRimLog,
            v9,
            1,
            23,
            (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids,
            DevicePropertyData);
        }
        goto LABEL_22;
      }
      if ( Type == 18 )
      {
        v10 = RequiredSize;
        if ( RequiredSize )
        {
          if ( !*((_WORD *)Data + ((unsigned __int64)RequiredSize >> 1) - 1) )
          {
            *a2 = Data;
            *a3 = v10;
            goto LABEL_22;
          }
          DevicePropertyData = -1073741823;
          Win32FreePool((__int64)Data);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = 26;
            goto LABEL_18;
          }
        }
        else
        {
          DevicePropertyData = -1073741823;
          Win32FreePool((__int64)Data);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = 25;
            goto LABEL_18;
          }
        }
      }
      else
      {
        DevicePropertyData = -1073741823;
        Win32FreePool((__int64)Data);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 24;
          goto LABEL_18;
        }
      }
    }
    else
    {
      DevicePropertyData = -1073741801;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 22;
LABEL_18:
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, v8, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
      }
    }
LABEL_22:
    ObfDereferenceObject(Pdo);
  }
  return (unsigned int)DevicePropertyData;
}
