/*
 * XREFs of ndisWritePMAdminConfigState @ 0x1C00E91AC
 * Callers:
 *     DisableMagicPacketKeyword @ 0x1C00E6268 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00E8F6C (ndisWmiSetPMAdminConfig.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x1C00C4940 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisWritePMAdminConfigState(NDIS_HANDLE ConfigurationHandle, PNDIS_STRING Keyword, int a3)
{
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *v3; // rax
  int v5; // [rsp+20h] [rbp-40h] BYREF
  const WCHAR *v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-28h]
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF

  Status = 0;
  v7 = 262146;
  *((_DWORD *)&ParameterValue.ParameterType + 1) = 0;
  v5 = 262146;
  ParameterValue.ParameterType = NdisParameterString;
  v8 = L"1";
  v6 = L"0";
  v3 = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)&v5;
  if ( a3 == 2 )
    v3 = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)&v7;
  ParameterValue.ParameterData = *v3;
  NdisWriteConfiguration(&Status, ConfigurationHandle, Keyword, &ParameterValue);
  return (unsigned int)Status;
}
