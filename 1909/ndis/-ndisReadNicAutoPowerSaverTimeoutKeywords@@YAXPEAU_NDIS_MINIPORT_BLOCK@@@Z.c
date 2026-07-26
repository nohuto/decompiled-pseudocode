/*
 * XREFs of ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011BB74
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C011BF18 (ndisSelectiveSuspendInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadNicAutoPowerSaverTimeoutKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int IntegerData; // edi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+88h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+90h] [rbp+30h] BYREF

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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x28u,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        v2,
        a1);
    a1->SelectiveSuspend->IdleTimeout = 3000;
  }
  else
  {
    IntegerData = 3;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &NicAutoPowerSaverTimeoutStr,
      NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    a1->SelectiveSuspend->IdleTimeout = 1000 * IntegerData;
  }
}
