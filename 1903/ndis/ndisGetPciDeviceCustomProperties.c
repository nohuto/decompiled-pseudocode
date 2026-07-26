/*
 * XREFs of ndisGetPciDeviceCustomProperties @ 0x1C002E604
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisGetPciDeviceCustomProperties(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rdi
  _DWORD *v4; // r14
  NTSTATUS DevicePropertyData; // eax
  int v6; // edx
  unsigned int v7; // esi
  void *Data; // rax
  const DEVPROPKEY *v9; // rdx
  ULONG RequiredSize; // [rsp+78h] [rbp+38h] BYREF
  ULONG Type; // [rsp+80h] [rbp+40h] BYREF

  RequiredSize = 0;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      7,
      36,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1);
  }
  if ( v2 && a1 )
  {
    memset(v2, 0, 0x34uLL);
    *v2 = 3408512;
    v4 = v2 + 1;
    DevicePropertyData = IoGetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 3832),
                           &DEVPKEY_PciDevice_DeviceType,
                           0,
                           0,
                           4u,
                           v2 + 1,
                           &RequiredSize,
                           &Type);
    v7 = DevicePropertyData;
    if ( DevicePropertyData >= 0 )
    {
      if ( *v4 <= 1u )
      {
        Data = v2 + 2;
        v9 = &DEVPKEY_PciDevice_CurrentSpeedAndMode;
      }
      else
      {
        if ( *v4 > 5u )
        {
LABEL_10:
          IoGetDevicePropertyData(
            *(PDEVICE_OBJECT *)(a1 + 3832),
            &DEVPKEY_PciDevice_InterruptSupport,
            0,
            0,
            4u,
            v2 + 11,
            &RequiredSize,
            &Type);
          IoGetDevicePropertyData(
            *(PDEVICE_OBJECT *)(a1 + 3832),
            &DEVPKEY_PciDevice_InterruptMessageMaximum,
            0,
            0,
            4u,
            v2 + 12,
            &RequiredSize,
            &Type);
          if ( IoGetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(a1 + 3832),
                 &DEVPKEY_PciDevice_SriovSupport,
                 0,
                 0,
                 4u,
                 (PVOID)(a1 + 3672),
                 &RequiredSize,
                 &Type) < 0 )
            *(_DWORD *)(a1 + 3672) = -1;
          v7 = 0;
          goto LABEL_13;
        }
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_CurrentPayloadSize,
          0,
          0,
          4u,
          v2 + 3,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_MaxPayloadSize,
          0,
          0,
          4u,
          v2 + 4,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_MaxReadRequestSize,
          0,
          0,
          4u,
          v2 + 5,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_CurrentLinkSpeed,
          0,
          0,
          4u,
          v2 + 6,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_CurrentLinkWidth,
          0,
          0,
          4u,
          v2 + 7,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_MaxLinkSpeed,
          0,
          0,
          4u,
          v2 + 8,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3832),
          &DEVPKEY_PciDevice_MaxLinkWidth,
          0,
          0,
          4u,
          v2 + 9,
          &RequiredSize,
          &Type);
        Data = v2 + 10;
        v9 = &DEVPKEY_PciDevice_ExpressSpecVersion;
      }
      IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 3832), v9, 0, 0, 4u, Data, &RequiredSize, &Type);
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      7,
      37,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1,
      DevicePropertyData);
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      7,
      38,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1,
      v7);
  }
  return v7;
}
