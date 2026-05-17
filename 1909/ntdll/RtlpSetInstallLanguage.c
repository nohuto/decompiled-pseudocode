/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800ED610
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180001008 (RtlStringCchCopyW.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009204 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtDeleteKey @ 0x18009E860 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x18009EAC0 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x18009EE40 (NtIsUILanguageComitted.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBE80 (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800ECCF8 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800ECE4C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x1800ED040 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  char v2; // r15
  char v3; // r12
  WCHAR *v4; // rdi
  int ProcessRegistryInfo; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // rdx
  unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v14; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v15; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v17; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+88h] [rbp-78h]
  HANDLE v19; // [rsp+90h] [rbp-70h]
  UNICODE_STRING *v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+A8h] [rbp-58h]
  WCHAR SourceString[88]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v24[88]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v25[176]; // [rsp+220h] [rbp+120h] BYREF
  _WORD v26[264]; // [rsp+380h] [rbp+280h] BYREF

  Handle = 0LL;
  v2 = 0;
  v15 = 0LL;
  v3 = 0;
  v4 = (WCHAR *)a2;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)&v11);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(v11, (__int64)&DestinationString) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, &v11) )
      return (unsigned int)-1073741811;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v14);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v6 = v14;
  if ( !v14 )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = RtlpGetInstalledLanguageType((__int64)v14, v4, (int *)&v17, &v14);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (_DWORD)v17 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v17 == 2 )
  {
    v8 = v14;
LABEL_22:
    v2 = 1;
    ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v8, 0LL, v26, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset(v24, 0, 0xACuLL);
  RtlStringCchCopyW(v24, 85LL, (__int64)v4);
  v4 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = RtlpGetDefaultLanguageBaseOrParent(
                          (__int64)v6,
                          (__int64)v14,
                          &v17,
                          (__int64)SourceString,
                          0x55u,
                          0LL,
                          0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v7 = v17;
  if ( !v17 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v14, v24, v25, 0xACu);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v4);
  if ( !RtlCultureNameToLCID(&DestinationString.Length, &v11) )
    return (unsigned int)-1073741811;
  ProcessRegistryInfo = NtFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v2 )
    {
      RtlpSetPreferredUILanguages(1032LL, v26, &v11);
    }
    else
    {
      RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v19 = 0LL;
      v20 = &v13;
      v18 = 48;
      v21 = 64;
      v22 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v13, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        NtClose(Handle);
      }
    }
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(32776LL, v24, &v11);
      RtlpSetPreferredUILanguages(36872LL, v25, &v11);
    }
    else
    {
      RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      Handle = 0LL;
      v19 = 0LL;
      v20 = &v13;
      v18 = 48;
      v21 = 64;
      v22 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v13, L"PreferredUILanguages");
        ZwDeleteValueKey();
        NtClose(Handle);
        RtlInitUnicodeString(
          &v13,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        Handle = 0LL;
        v19 = 0LL;
        v20 = &v13;
        v18 = 48;
        v21 = 64;
        v22 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          NtDeleteKey();
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000u, v9, (__int64)&Handle) >= 0 )
        {
          RtlInitUnicodeString(&v13, L"Control Panel\\Desktop\\MuiCached");
          v19 = Handle;
          v18 = 48;
          v20 = &v13;
          v21 = 64;
          v22 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v13, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v13, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            NtClose(v15);
          }
          NtClose(Handle);
        }
      }
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
