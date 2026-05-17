/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800F05E0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180001838 (RtlStringCchCopyW.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18004C41C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtDeleteKey @ 0x1800A1C90 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1800A1CF0 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A1EF0 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x1800A2270 (NtIsUILanguageComitted.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF198 (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800F0028 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F017C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x1800F0370 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  WCHAR *v2; // rdi
  char v3; // r15
  char v4; // r12
  int ProcessRegistryInfo; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v14; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v15; // [rsp+68h] [rbp-A0h]
  __int16 *v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  HANDLE v18; // [rsp+80h] [rbp-88h]
  UNICODE_STRING *v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  int v23[4]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR SourceString[88]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v25[88]; // [rsp+178h] [rbp+70h] BYREF
  _WORD v26[176]; // [rsp+228h] [rbp+120h] BYREF
  _WORD v27[264]; // [rsp+388h] [rbp+280h] BYREF

  v2 = (WCHAR *)a2;
  Handle = 0LL;
  v3 = 0;
  v15 = 0LL;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)&v13);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(v13, (__int64)&DestinationString) )
      return (unsigned int)-1073741811;
    v2 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, &v13) )
      return (unsigned int)-1073741811;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v16);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v6 = v16;
  if ( !v16 )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = RtlpGetInstalledLanguageType((__int64)v16, v2, v23, &v16);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( v23[0] == 1 )
    goto LABEL_23;
  if ( v23[0] == 2 )
  {
    v8 = v16;
LABEL_22:
    v3 = 1;
    ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v8, 0LL, v27, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( v23[0] != 4 )
    return (unsigned int)-1073741811;
  v4 = 1;
  memset(v25, 0, 0xACuLL);
  RtlStringCchCopyW(v25, 85LL, (__int64)v2);
  v2 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = RtlpGetDefaultLanguageBaseOrParent(
                          (__int64)v6,
                          (__int64)v16,
                          v23,
                          (__int64)SourceString,
                          0x55u,
                          0LL,
                          0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v7 = *(__int16 **)v23;
  if ( !*(_QWORD *)v23 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v16, v25, v26, 0xACu);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v2);
  if ( !RtlCultureNameToLCID(&DestinationString.Length, &v13) )
    return (unsigned int)-1073741811;
  ProcessRegistryInfo = NtFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(1032LL, v27, &v13);
    }
    else
    {
      RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      Handle = 0LL;
      v19 = &v14;
      LODWORD(v17) = 48;
      v18 = 0LL;
      v20 = 64;
      v21 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v14, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        NtClose(Handle);
      }
    }
    if ( v4 )
    {
      RtlpSetPreferredUILanguages(32776LL, v25, &v13);
      RtlpSetPreferredUILanguages(36872LL, v26, &v13);
    }
    else
    {
      RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      Handle = 0LL;
      v19 = &v14;
      LODWORD(v17) = 48;
      v18 = 0LL;
      v20 = 64;
      v21 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v14, L"PreferredUILanguages");
        ZwDeleteValueKey();
        NtClose(Handle);
        RtlInitUnicodeString(
          &v14,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        Handle = 0LL;
        v19 = &v14;
        LODWORD(v17) = 48;
        v18 = 0LL;
        v20 = 64;
        v21 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          NtDeleteKey();
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000u, 0, v9, v10, (__int64)&Handle) >= 0 )
        {
          RtlInitUnicodeString(&v14, L"Control Panel\\Desktop\\MuiCached");
          v18 = Handle;
          v15 = 0LL;
          v19 = &v14;
          LODWORD(v17) = 48;
          v20 = 64;
          v21 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v14, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v14, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            NtClose(v15);
          }
          CloseGlobalizationUserSettingsKey((char *)Handle);
        }
      }
    }
    RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
    Handle = 0LL;
    v19 = &v14;
    LODWORD(v17) = 48;
    v18 = 0LL;
    v20 = 64;
    v21 = 0LL;
    if ( (int)NtOpenKey() >= 0 )
    {
      NtDeleteKey();
      NtClose(Handle);
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
