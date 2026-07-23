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
  int v5; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // rdx
  LCID Lcid; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v14; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v17; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[88]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v20[88]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v21[176]; // [rsp+220h] [rbp+120h] BYREF
  _WORD v22[264]; // [rsp+380h] [rbp+280h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  Handle = 0LL;
  v3 = 0;
  v4 = (WCHAR *)a2;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v5 = sub_1800EBD90(&DestinationString, &Lcid);
    if ( v5 < 0 )
      return (unsigned int)v5;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(Lcid, &DestinationString) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return (unsigned int)-1073741811;
  }
  v5 = RtlpCreateProcessRegistryInfo(&v14);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = v14;
  if ( !v14 )
    return (unsigned int)-1073741823;
  v5 = sub_1800ECF50((__int64)v14, v4, (int *)&v17, &v14);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( (_DWORD)v17 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v17 == 2 )
  {
    v8 = v14;
LABEL_22:
    v2 = 1;
    v5 = sub_1800ECC08((__int64)v6, v8, 0LL, v22, 0x102u);
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_23;
  }
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset(v20, 0, 0xACuLL);
  sub_180001008(v20, 85LL, (__int64)v4);
  v4 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  v5 = sub_1800ECD5C((__int64)v6, (__int64)v14, &v17, SourceString, 0x55u, 0LL, 0LL);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v7 = v17;
  if ( !v17 )
    return (unsigned int)-1073741637;
  v5 = sub_1800ECC08((__int64)v6, v14, v20, v21, 0xACu);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v4);
  if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
    return (unsigned int)-1073741811;
  v5 = ZwFlushInstallUILanguage(Lcid, 0);
  if ( v5 >= 0 )
  {
    if ( v2 )
    {
      RtlpSetUserPreferredUILanguages(1032LL, v22, &Lcid);
    }
    else
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"InstallLanguageFallback");
        ZwDeleteValueKey(KeyHandle, &ValueName);
        ZwClose(KeyHandle);
      }
    }
    if ( v3 )
    {
      RtlpSetUserPreferredUILanguages(32776LL, v20, &Lcid);
      RtlpSetUserPreferredUILanguages(36872LL, v21, &Lcid);
    }
    else
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
        ZwDeleteValueKey(KeyHandle, &ValueName);
        ZwClose(KeyHandle);
        RtlInitUnicodeString(
          &ValueName,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
        if ( sub_180009204(0x2000000u, v9, &KeyHandle) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Control Panel\\Desktop\\MuiCached");
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
          {
            RtlInitUnicodeString(&ValueName, L"MachinePreferredUILanguages");
            ZwDeleteValueKey(Handle, &ValueName);
            RtlInitUnicodeString(&ValueName, L"MachineLanguageConfiguration");
            ZwDeleteValueKey(Handle, &ValueName);
            ZwClose(Handle);
          }
          ZwClose(KeyHandle);
        }
      }
    }
  }
  else if ( ZwIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v5;
}
