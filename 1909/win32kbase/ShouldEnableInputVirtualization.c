/*
 * XREFs of ShouldEnableInputVirtualization @ 0x1C00A9ED0
 * Callers:
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C0031C04 (RIMIsRunningOnDesktop.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     RIMRegQueryDWord @ 0x1C005E18C (RIMRegQueryDWord.c)
 *     RIMRegOpenKey @ 0x1C005E204 (RIMRegOpenKey.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C018C098 (WPP_RECORDER_SF_ccccc.c)
 */

char ShouldEnableInputVirtualization()
{
  int v0; // edx
  int v1; // r9d
  void *v3; // rax
  int v4; // edx
  int v5; // eax
  int v6; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+68h] [rbp-18h] BYREF

  if ( RIMIsRunningOnDesktop() )
  {
    if ( gSessionId != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 15;
      goto LABEL_5;
    }
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_InputVirtualizationDesktopSpecific__private_propertyCache,
      0x1244BCEu,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D7150,
      0,
      3);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v6 = 0;
    v5 = RIMRegQueryDWord((__int64)&DestinationString, (__int64)L"IsVailContainer", 0, &v6);
    if ( (v6 & 0x1F) == 0 )
    {
      if ( v5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v1 = 17;
        LOBYTE(v0) = 3;
        goto LABEL_6;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 18;
LABEL_5:
      LOBYTE(v0) = 4;
LABEL_6:
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 12, v1, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
      return 0;
    }
    byte_1C021692C = v6 & 1;
    byte_1C021692B = (v6 & 2) != 0;
    byte_1C021692A = (v6 & 4) != 0;
    byte_1C0216929 = (v6 & 8) != 0;
    byte_1C0216928 = (v6 & 0x10) != 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ccccc();
  }
  else
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_InputVirtualization__private_propertyCache,
      0xF89686u,
      (const struct FEATURE_LOGGED_TRAITS *)byte_1C01D70B4,
      1,
      3);
    v8[0] = 0LL;
    v8[1] = 0LL;
    HviGetHypervisorFeatures(v8);
    if ( (v8[0] & 0x100000000000LL) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 12;
      goto LABEL_5;
    }
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CmService");
    v3 = RIMRegOpenKey(&DestinationString);
    if ( !v3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 13;
      goto LABEL_5;
    }
    ZwClose(v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v4, 12, 14, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
    }
  }
  return 1;
}
