/*
 * XREFs of ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C9AE0
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C001DD54 (ndisMSetGeneralAttributes.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 */

void __fastcall ndisReadDataLinkLayerKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  PVOID v2; // rdi
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+88h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+90h] [rbp+30h] BYREF

  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  Keyword.Buffer = L"*DataLinkLayerType";
  *(_DWORD *)&Keyword.Length = 2490404;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v2 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x7Cu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1, Status);
    if ( !Status )
    {
      a1->DataLinkLayerType = ParameterValue->ParameterData.IntegerData;
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x100u);
      v2 = ConfigurationHandle;
    }
    NdisCloseConfiguration(v2);
  }
}
