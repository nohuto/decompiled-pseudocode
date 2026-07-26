/*
 * XREFs of ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106E7C
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C001A480 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_qcL @ 0x1C00C0990 (WPP_RECORDER_SF_qcL.c)
 */

__int64 __fastcall ndisPDReadKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int v3; // ebx
  _NDIS_PD_BLOCK *PoolWithTag; // rax
  int v6; // edx
  _NDIS_PD_BLOCK *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // r8
  int ParameterType; // [rsp+20h] [rbp-60h]
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-20h] BYREF
  int Status; // [rsp+A0h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+A8h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B0h] [rbp+30h] BYREF

  ConfigObject.NdisHandle = a1;
  Keyword.Buffer = L"*PacketDirect";
  *(_QWORD *)&ConfigObject.Header.Type = 1311145LL;
  v14.Buffer = L"*PacketDirectDomain";
  *(_QWORD *)&Keyword.Length = 1835034LL;
  ConfigurationHandle = 0LL;
  *(_QWORD *)&ConfigObject.Flags = 0LL;
  *(_QWORD *)&v14.Length = 2621478LL;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    v3 = NdisConvertNdisStatusToNtStatus(v2);
  }
  else
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( Status )
    {
LABEL_3:
      v3 = 0;
      goto LABEL_4;
    }
    PoolWithTag = (_NDIS_PD_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6241444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, sizeof(_NDIS_PD_BLOCK));
      a1->PDBlock = v7;
      v7->Miniport = a1;
      v7->PDClientList.Blink = &v7->PDClientList;
      v7->PDClientList.Flink = &v7->PDClientList;
      v7->PDDomainId = 0;
      v7->PDBlockListLink.Blink = 0LL;
      v7->PDBlockListLink.Flink = 0LL;
      if ( ParameterValue->ParameterData.IntegerData )
      {
        v11 = ConfigurationHandle;
        v7->PDEnabledRegistryValue = 1;
        NdisReadConfiguration(&Status, &ParameterValue, v11, &v14, NdisParameterInteger);
        if ( !Status )
          v7->PDDomainId = ParameterValue->ParameterData.IntegerData;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qcL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v10, ParameterType);
      goto LABEL_3;
    }
    v3 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        29,
        11,
        (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids);
    }
  }
LABEL_4:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  return v3;
}
