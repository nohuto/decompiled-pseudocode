/*
 * XREFs of ndisWriteConfigurationIfPresent @ 0x1C007F654
 * Callers:
 *     ndisUpdateOffloadKeywords @ 0x1C0070C64 (ndisUpdateOffloadKeywords.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x1C002A770 (NdisWriteConfiguration.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall ndisWriteConfigurationIfPresent(
        PNDIS_STATUS Status,
        HANDLE *ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  NTSTATUS v8; // eax
  ULONG v9; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-40h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  v8 = ZwQueryValueKey(ConfigurationHandle[4], Keyword, KeyValueBasicInformation, v10, 0x10u, &v9);
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    NdisWriteConfiguration(Status, ConfigurationHandle, Keyword, ParameterValue);
  else
    *Status = -1073741823;
}
