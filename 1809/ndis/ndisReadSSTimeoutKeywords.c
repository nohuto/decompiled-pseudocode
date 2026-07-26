/*
 * XREFs of ndisReadSSTimeoutKeywords @ 0x1C00FC2BC
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C00FC5B0 (ndisSelectiveSuspendInitialize.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadSSTimeoutKeywords(_QWORD *a1)
{
  NDIS_STATUS v2; // eax
  __int64 result; // rax
  unsigned int IntegerData; // edi
  unsigned int v5; // r14d
  unsigned int v6; // edi
  int v7; // edi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+28h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp+30h] BYREF

  *(_QWORD *)&ConfigObject.Header.Revision = 0LL;
  ConfigObject.NdisHandle = a1;
  *((_BYTE *)&ConfigObject.Flags + 4) = 0;
  ConfigObject.Flags = 0;
  *(_WORD *)((char *)&ConfigObject.Flags + 5) = 0;
  *((_BYTE *)&ConfigObject.Flags + 7) = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C00A025E >= 2u )
      WPP_SF_dq(0xCu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, v2, a1);
    *(_DWORD *)(a1[561] + 8LL) = 5000;
    result = a1[561];
    *(_DWORD *)(result + 12) = 0;
  }
  else
  {
    IntegerData = 5;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SSIdleTimeoutStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    v5 = 1000 * IntegerData;
    v6 = 0;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &SSIdleTimeoutScreenOffStr,
      NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      v6 = ParameterValue->ParameterData.IntegerData;
    v7 = 1000 * v6;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SSIdleTimeoutMsStr, NdisParameterInteger);
    if ( !Status )
      v5 = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    *(_DWORD *)(a1[561] + 8LL) = v5;
    result = a1[561];
    *(_DWORD *)(result + 12) = v7;
  }
  return result;
}
