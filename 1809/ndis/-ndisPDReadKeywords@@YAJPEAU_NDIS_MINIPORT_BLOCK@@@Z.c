/*
 * XREFs of ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA59C
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C00216D0 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qcL @ 0x1C007C48C (WPP_SF_qcL.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisPDReadKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int v3; // ebx
  _NDIS_PD_BLOCK *PoolWithTag; // rax
  _NDIS_PD_BLOCK *v6; // rbx
  __int64 v7; // rdx
  __int64 IntegerData; // rcx
  PVOID v9; // r8
  __int64 v10; // [rsp+20h] [rbp-50h]
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-20h] BYREF
  int Status; // [rsp+90h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+98h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp+30h] BYREF

  ConfigurationHandle = 0LL;
  ConfigObject.Flags = 0;
  Keyword.Buffer = L"*PacketDirect";
  ConfigObject.NdisHandle = a1;
  v12.Buffer = L"*PacketDirectDomain";
  *(_DWORD *)&Keyword.Length = 1835034;
  *(_DWORD *)&v12.Length = 2621478;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
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
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, sizeof(_NDIS_PD_BLOCK));
      a1->PDBlock = v6;
      v6->Miniport = a1;
      v6->PDClientList.Blink = &v6->PDClientList;
      v6->PDClientList.Flink = &v6->PDClientList;
      v6->PDDomainId = 0;
      v6->PDBlockListLink.Blink = 0LL;
      v6->PDBlockListLink.Flink = 0LL;
      if ( ParameterValue->ParameterData.IntegerData )
      {
        v9 = ConfigurationHandle;
        v6->PDEnabledRegistryValue = 1;
        NdisReadConfiguration(&Status, &ParameterValue, v9, &v12, NdisParameterInteger);
        if ( !Status )
        {
          IntegerData = ParameterValue->ParameterData.IntegerData;
          v6->PDDomainId = IntegerData;
        }
      }
      if ( (unsigned __int8)byte_1C00A026C >= 4u )
      {
        LODWORD(v10) = v6->PDDomainId;
        WPP_SF_qcL(IntegerData, v7, (__int64)a1, v6->PDEnabledRegistryValue, v10);
      }
      goto LABEL_3;
    }
    v3 = -1073741670;
    if ( (unsigned __int8)byte_1C00A026C >= 2u )
      WPP_SF_(0xBu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids);
  }
LABEL_4:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  return v3;
}
