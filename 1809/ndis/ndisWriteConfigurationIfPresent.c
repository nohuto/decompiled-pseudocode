/*
 * XREFs of ndisWriteConfigurationIfPresent @ 0x1C00EAF2C
 * Callers:
 *     ndisUpdateOffloadKeywords @ 0x1C00E56FC (ndisUpdateOffloadKeywords.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     NdisWriteConfiguration @ 0x1C00C4940 (NdisWriteConfiguration.c)
 */

void __fastcall ndisWriteConfigurationIfPresent(
        PNDIS_STATUS Status,
        HANDLE *ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  NTSTATUS v8; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+38h] [rbp-40h] BYREF

  v8 = ZwQueryValueKey(
         ConfigurationHandle[4],
         Keyword,
         KeyValueBasicInformation,
         KeyValueInformation,
         0x10u,
         &ResultLength);
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    NdisWriteConfiguration(Status, ConfigurationHandle, Keyword, ParameterValue);
  else
    *Status = -1073741823;
}
