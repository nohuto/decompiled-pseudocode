/*
 * XREFs of RIMGetContainerId @ 0x1C013CEE8
 * Callers:
 *     RIMGetDeviceLocationInfo @ 0x1C013D2F0 (RIMGetDeviceLocationInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C005DBFC (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetContainerId(struct _DEVICE_OBJECT *a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  int DevicePropertyData; // edi
  struct _DEVICE_OBJECT *v7; // rbp
  PVOID Data; // [rsp+28h] [rbp-30h]
  ULONG Type; // [rsp+40h] [rbp-18h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-14h] BYREF
  PDEVICE_OBJECT Pdo[2]; // [rsp+48h] [rbp-10h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1, Pdo, (__int64)a3);
  if ( DevicePropertyData >= 0 )
  {
    v13 = 0;
    Type = 0;
    Data = a2;
    v7 = Pdo[0];
    RequiredSize = 0;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo[0],
                           &DEVPKEY_Device_ContainerId,
                           0,
                           0,
                           0x10u,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( a3 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               v7,
                               &DEVPKEY_Device_InLocalMachineContainer,
                               0,
                               0,
                               1u,
                               &v13,
                               &RequiredSize,
                               &Type);
        if ( DevicePropertyData >= 0 )
        {
          LOBYTE(v5) = v13 != -1;
          *a3 = v5;
        }
      }
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)DevicePropertyData;
}
