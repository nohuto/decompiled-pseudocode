/*
 * XREFs of ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0108568
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadDataLinkLayerKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  PVOID v2; // rdi
  int v3; // edx
  int v4; // esi
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-20h] BYREF
  int Status; // [rsp+90h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+98h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp+30h] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  Keyword.Buffer = L"*DataLinkLayerType";
  *(_QWORD *)&Keyword.Length = 2490404LL;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v2 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    v4 = Status;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        1,
        122,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1,
        Status);
    }
    if ( !v4 )
    {
      a1->DataLinkLayerType = ParameterValue->ParameterData.IntegerData;
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x100u);
      v2 = ConfigurationHandle;
    }
    NdisCloseConfiguration(v2);
  }
}
