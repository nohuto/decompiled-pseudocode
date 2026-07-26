/*
 * XREFs of ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C0105DDC
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C002A5AC (ndisIfCreateFilterInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisWriteConfiguration @ 0x1C002A770 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C902C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisIfSetFilterIfInfoInRegistry(struct _NDIS_FILTER_BLOCK *a1, wchar_t *a2)
{
  wchar_t *v2; // r14
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  int v5; // edx
  unsigned int v6; // ebx
  int Status; // [rsp+48h] [rbp-9h] BYREF
  PVOID ConfigurationHandle; // [rsp+50h] [rbp-1h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING Keyword; // [rsp+70h] [rbp+1Fh] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+2Fh] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v2 = a2;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  Keyword.Buffer = L"InterfaceGuid";
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      194,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  }
  ConfigObject.Flags = 0;
  FilterDriver = a1->FilterDriver;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = (FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v6 = Status;
  if ( !Status )
  {
    ParameterValue.ParameterData.StringData.Length = 16;
    ParameterValue.ParameterType = NdisParameterBinary;
    ParameterValue.ParameterData.StringData.Buffer = v2;
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    v6 = Status;
    if ( Status )
    {
      if ( Status != -1073741772 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      22,
      195,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v6);
  }
  return v6;
}
