/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800ED520
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x18009E0B0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x18009E110 (ZwDeleteValueKey.c)
 *     ZwFlushInstallUILanguage @ 0x18009E310 (ZwFlushInstallUILanguage.c)
 *     ZwIsUILanguageComitted @ 0x18009E690 (ZwIsUILanguageComitted.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 *     sub_1800ECC08 @ 0x1800ECC08 (sub_1800ECC08.c)
 *     sub_1800ECD5C @ 0x1800ECD5C (sub_1800ECD5C.c)
 *     sub_1800ECF50 @ 0x1800ECF50 (sub_1800ECF50.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
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
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v16; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+88h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-70h]
  UNICODE_STRING *v19; // [rsp+98h] [rbp-68h]
  int v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+A8h] [rbp-58h]
  WCHAR SourceString[88]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v23[88]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v24[176]; // [rsp+220h] [rbp+120h] BYREF
  _WORD v25[264]; // [rsp+380h] [rbp+280h] BYREF

  v12 = 0LL;
  v2 = 0;
  v14[1] = 0LL;
  v3 = 0;
  v4 = (WCHAR *)a2;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = sub_1800EBD90(&DestinationString.Length, (int *)&v11);
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
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)v14);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v6 = v14[0];
  if ( !v14[0] )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = sub_1800ECF50((__int64)v14[0], v4, (int *)&v16, v14);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (_DWORD)v16 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v16 == 2 )
  {
    v8 = v14[0];
LABEL_22:
    v2 = 1;
    ProcessRegistryInfo = sub_1800ECC08((__int64)v6, v8, 0LL, v25, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( (_DWORD)v16 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset(v23, 0, 0xACuLL);
  sub_180001008(v23, 85LL, (__int64)v4);
  v4 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = sub_1800ECD5C((__int64)v6, (__int64)v14[0], &v16, (__int64)SourceString, 0x55u, 0LL, 0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v7 = v16;
  if ( !v16 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = sub_1800ECC08((__int64)v6, (_BYTE *)v14[0], v23, v24, 0xACu);
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
  ProcessRegistryInfo = ZwFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v2 )
    {
      RtlpSetUserPreferredUILanguages(1032LL, v25, &v11);
    }
    else
    {
      RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v18 = 0LL;
      v19 = &v13;
      v17 = 48;
      v20 = 64;
      v21 = 0LL;
      if ( (int)ZwOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v13, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        ZwClose();
      }
    }
    if ( v3 )
    {
      RtlpSetUserPreferredUILanguages(32776LL, v23, &v11);
      RtlpSetUserPreferredUILanguages(36872LL, v24, &v11);
    }
    else
    {
      RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v12 = 0LL;
      v18 = 0LL;
      v19 = &v13;
      v17 = 48;
      v20 = 64;
      v21 = 0LL;
      if ( (int)ZwOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v13, L"PreferredUILanguages");
        ZwDeleteValueKey();
        ZwClose();
        RtlInitUnicodeString(
          &v13,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        v12 = 0LL;
        v18 = 0LL;
        v19 = &v13;
        v17 = 48;
        v20 = 64;
        v21 = 0LL;
        if ( (int)ZwOpenKey() >= 0 )
        {
          ZwDeleteKey();
          ZwClose();
        }
        if ( (int)sub_180009204(0x2000000u, v9, (__int64)&v12) >= 0 )
        {
          RtlInitUnicodeString(&v13, L"Control Panel\\Desktop\\MuiCached");
          v18 = v12;
          v17 = 48;
          v19 = &v13;
          v20 = 64;
          v21 = 0LL;
          if ( (int)ZwOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v13, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v13, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            ZwClose();
          }
          ZwClose();
        }
      }
    }
  }
  else if ( (unsigned int)ZwIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
