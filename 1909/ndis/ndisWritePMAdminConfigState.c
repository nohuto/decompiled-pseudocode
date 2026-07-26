/*
 * XREFs of ndisWritePMAdminConfigState @ 0x1C0077A3C
 * Callers:
 *     DisableMagicPacketKeyword @ 0x1C0072228 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00777F4 (ndisWmiSetPMAdminConfig.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x1C002A770 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisWritePMAdminConfigState(NDIS_HANDLE ConfigurationHandle, PNDIS_STRING Keyword, int a3)
{
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF

  Status = 0;
  *((_DWORD *)&ParameterValue.ParameterType + 1) = 0;
  v6[1] = L"1";
  v6[0] = 262146LL;
  v5[0] = 262146LL;
  v5[1] = L"0";
  ParameterValue.ParameterType = NdisParameterString;
  v3 = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)v5;
  if ( a3 == 2 )
    v3 = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)v6;
  ParameterValue.ParameterData = *v3;
  NdisWriteConfiguration(&Status, ConfigurationHandle, Keyword, &ParameterValue);
  return (unsigned int)Status;
}
