/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C007EE20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        UNICODE_STRING *a4,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C00CBE30;
  while ( !RtlEqualUnicodeString(a4, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C00CBF20 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, a4, ParameterType);
      return;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      0x18u,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      &a4->Length);
  *Status = -1073741823;
}
