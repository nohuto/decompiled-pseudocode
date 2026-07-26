/*
 * XREFs of ndisInitializeConfiguration @ 0x1C0105F58
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisReadPMRegistry @ 0x1C002ABE0 (ndisReadPMRegistry.c)
 *     ndisReadOffloadRegistry @ 0x1C002B2C4 (ndisReadOffloadRegistry.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002C590 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CD84 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ndisQueryBusInterface @ 0x1C002E280 (ndisQueryBusInterface.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisInitializeConfiguration(__int64 a1, const WCHAR *a2)
{
  unsigned int IntegerData; // edi
  unsigned int v5; // r15d
  __int16 Length; // r12
  int v7; // edx
  char *PoolWithTag; // rax
  int v9; // edx
  char *v10; // r14
  unsigned int v11; // esi
  NTSTATUS DeviceProperty; // r9d
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  void *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  PNDIS_CONFIGURATION_PARAMETER v25; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD ConfigurationHandle[5]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v32; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v35; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v36; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v37; // [rsp+C0h] [rbp-40h] BYREF
  __int64 PropertyBuffer; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-28h]
  struct _RTL_QUERY_REGISTRY_TABLE v40[3]; // [rsp+E0h] [rbp-20h] BYREF

  memset(ConfigurationHandle, 0, sizeof(ConfigurationHandle));
  v29 = -1;
  v34.Buffer = L"BusNumber";
  *(_QWORD *)&v34.Length = 1310738LL;
  v32.Buffer = L"BusType";
  IntegerData = 18;
  *(_QWORD *)&v32.Length = 1048590LL;
  Keyword.Buffer = L"PnPCapabilities";
  *(_QWORD *)&Keyword.Length = 2097182LL;
  v35.Buffer = L"RemoteBootCard";
  LOWORD(v5) = 20;
  *(_QWORD *)&v35.Length = 1966108LL;
  v37.Buffer = L"NdisDriverVerifyFlags";
  Length = 16;
  *(_QWORD *)&v37.Length = 2883626LL;
  v36.Buffer = L"SGMapRegistersNeeded";
  *(_QWORD *)&v36.Length = 2752552LL;
  PropertyBuffer = 0LL;
  v39 = 0LL;
  v27 = 1;
  memset(v40, 0, sizeof(v40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      10,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1);
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_40;
  }
  memset(PoolWithTag + 4, 0, 0x84uLL);
  *(_QWORD *)(a1 + 4000) = v10;
  *(_DWORD *)v10 = 8913162;
  ConfigurationHandle[4] = a2;
  ConfigurationHandle[1] = a1;
  ConfigurationHandle[2] = v10;
  ConfigurationHandle[3] = 0LL;
  if ( !*(_QWORD *)(a1 + 56) )
  {
    Status = ndisReadBindPaths((struct _NDIS_MINIPORT_BLOCK *)a1, v40, a2);
    v11 = Status;
    if ( Status )
      goto LABEL_40;
  }
  *((_DWORD *)v10 + 8) = 20;
  *((_QWORD *)v10 + 3) = ndisSaveParameters;
  *((_DWORD *)v10 + 14) = 0;
  *((_QWORD *)v10 + 10) = 0LL;
  *((_DWORD *)v10 + 22) = 0;
  *((_QWORD *)v10 + 12) = 0LL;
  *((_QWORD *)v10 + 1) = a1;
  DeviceProperty = IoGetDeviceProperty(
                     *(PDEVICE_OBJECT *)(a1 + 3832),
                     DevicePropertyBusTypeGuid,
                     0x10u,
                     &PropertyBuffer,
                     &ResultLength);
  if ( DeviceProperty < 0 )
    goto LABEL_66;
  v9 = v39;
  v13 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
    v13 = v39 - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
  if ( !v13 )
  {
    IntegerData = 0;
    v27 = 0;
    goto LABEL_18;
  }
  v14 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v14 = v39 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v14 )
  {
    IntegerData = 8;
    goto LABEL_17;
  }
  v15 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v15 = v39 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v15 )
  {
    IntegerData = 5;
LABEL_17:
    v27 = IntegerData;
    goto LABEL_18;
  }
  v19 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
    v19 = v39 - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
  if ( v19 )
  {
    v20 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
      v20 = v39 - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
    if ( !v20 )
    {
      IntegerData = 17;
      goto LABEL_17;
    }
    v21 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
      v21 = v39 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
    if ( !v21 )
    {
      IntegerData = 14;
      goto LABEL_17;
    }
    v22 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
      v22 = v39 - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
    if ( !v22 )
      goto LABEL_17;
    v23 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
      v23 = v39 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
    if ( !v23 )
    {
      IntegerData = 2;
      goto LABEL_17;
    }
LABEL_66:
    IntegerData = v27;
    if ( v27 == 1 )
    {
      v24 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a1 + 3832), DevicePropertyLegacyBusType, 4u, &v27, &ResultLength);
      IntegerData = v27;
      DeviceProperty = v24;
    }
    goto LABEL_18;
  }
  IntegerData = 16;
  v27 = 16;
LABEL_18:
  if ( DeviceProperty < 0 || IntegerData == 1 || IntegerData == 8 )
  {
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v32, NdisParameterInteger);
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) &= ~1u;
    if ( Status )
    {
      IntegerData = v27;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v27 = IntegerData;
    }
  }
  if ( IntegerData == 5 || IntegerData == 8 )
  {
    Status = ndisQueryBusInterface(a1);
    v11 = Status;
    if ( Status )
      goto LABEL_40;
    IntegerData = v27;
  }
  if ( IntegerData - 2 <= 1 )
  {
    v11 = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 3720) = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( Status )
    {
      if ( (*(_DWORD *)(a1 + 124) & 0x200000) != 0 )
      {
        *(_DWORD *)(a1 + 3864) = ndisDefaultPnPCapabilities;
        *(_DWORD *)(a1 + 3864) |= 0x10000000u;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 3864) = ParameterValue->ParameterData.IntegerData;
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
      *(_DWORD *)(a1 + 3864) &= 0x10000100u;
    if ( IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a1 + 3832), DevicePropertyBusNumber, 4u, &v29, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v34, NdisParameterInteger), Status) )
    {
      v16 = v29;
    }
    else
    {
      v16 = ParameterValue->ParameterData.IntegerData;
      v29 = v16;
    }
    *(_DWORD *)(a1 + 3724) = v16;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v35, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a1 + 120) |= 0x40000000u;
      *(_DWORD *)(a1 + 1872) |= 0x4000u;
    }
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &MediaDisconnectTimeOutStr,
      NdisParameterHexInteger);
    if ( !Status )
    {
      v5 = ParameterValue->ParameterData.IntegerData;
      if ( v5 )
      {
        if ( v5 > 0xFFFF )
          LOWORD(v5) = -1;
      }
      else
      {
        LOWORD(v5) = 1;
      }
    }
    *(_WORD *)(a1 + 3684) = v5;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a1 + 2684) |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(ConfigurationHandle, a1);
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v36, NdisParameterInteger);
    if ( !Status )
    {
      v25 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v25 = ParameterValue;
      }
      Length = v25->ParameterData.StringData.Length;
    }
    *(_WORD *)(a1 + 3686) = Length;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v37, NdisParameterHexInteger);
    if ( !Status )
      *(_DWORD *)(a1 + 3688) = ParameterValue->ParameterData.IntegerData;
    *((_DWORD *)v10 + 4) = 0;
    ndisReadOffloadRegistry((struct _NDIS_MINIPORT_BLOCK *)a1);
    ndisReadSoftwareTimestampSettings(ConfigurationHandle, (struct _NDIS_MINIPORT_BLOCK *)a1);
    v11 = 0;
  }
LABEL_40:
  while ( 1 )
  {
    v17 = (void *)ConfigurationHandle[3];
    if ( !ConfigurationHandle[3] )
      break;
    ConfigurationHandle[3] = *(_QWORD *)ConfigurationHandle[3];
    ExFreePoolWithTag(v17, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      13,
      11,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1);
  }
  return v11;
}
