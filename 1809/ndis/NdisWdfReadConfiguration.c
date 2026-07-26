/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00EAD80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C0086E40;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C0086F30 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C00A0257 >= 2u )
    WPP_SF_Z(0x18u, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, &Keyword->Length);
  *Status = -1073741823;
}
