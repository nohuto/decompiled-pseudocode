/*
 * XREFs of ndisUpdateHDSplitKeyword @ 0x1C00708F4
 * Callers:
 *     ndisOidPreSetHDSplitParameters @ 0x1C006E270 (ndisOidPreSetHDSplitParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     NdisWriteConfiguration @ 0x1C002A780 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EF7C (WPP_RECORDER_SF_qdD_ea_1C005EF7C.c)
 */

__int64 __fastcall ndisUpdateHDSplitKeyword(void *a1, ULONG a2)
{
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  int Status; // [rsp+40h] [rbp-49h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING String; // [rsp+50h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-29h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v13[40]; // [rsp+90h] [rbp+7h] BYREF

  ConfigurationHandle = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      236,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      a2);
  }
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v6 = Status;
  if ( !Status )
  {
    String.MaximumLength = 40;
    String.Buffer = (wchar_t *)v13;
    if ( RtlIntegerToUnicodeString(a2, 0xAu, &String) )
    {
      v6 = -1073741823;
    }
    else
    {
      ParameterValue.ParameterType = NdisParameterString;
      ParameterValue.ParameterData.StringData = String;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &HDSplitStr, &ParameterValue);
      v6 = Status;
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0xBu,
      0xEDu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      a2,
      v6);
  return v6;
}
