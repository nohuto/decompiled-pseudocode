/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18004BC10
 * Callers:
 *     RtlpInitializeUserList @ 0x18003A98C (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x18003BEF8 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18004B910 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18004C41C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18004C5C0 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18004CB74 (RtlpMuiRegFreeStringPool.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800FF8CC (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FF964 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x1801019FC (RtlpPopulateLanguageConfigList.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  void *v6; // r12
  HANDLE v7; // rdi
  int v8; // eax
  NTSTATUS v9; // eax
  int PolicyLanguageSpec; // ebx
  __int64 LanguageConfigList; // rax
  NTSTATUS v13; // eax
  void *v14; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  HANDLE CurrentUserKey; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  CurrentUserKey = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( PolicyLanguageSpec >= 0 )
      {
LABEL_12:
        v7 = CurrentUserKey;
        goto LABEL_13;
      }
      if ( a1 == 8 )
        RtlpHasMachineUILock(KeyHandle);
      NtClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v8 = OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey);
    v7 = CurrentUserKey;
    if ( v8 < 0 )
      v7 = 0LL;
    CurrentUserKey = v7;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( v7 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          KeyHandle = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v7;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v13 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
        else
        {
          v13 = -1073741772;
        }
        if ( v13 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          KeyHandle = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          PolicyLanguageSpec = v9;
          if ( v9 < 0 )
          {
LABEL_10:
            if ( v9 == -1073741772 )
              PolicyLanguageSpec = 0;
            goto LABEL_12;
          }
        }
      }
LABEL_36:
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle, a2, a3);
      goto LABEL_12;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
        if ( PolicyLanguageSpec >= 0 )
          goto LABEL_12;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = CurrentUserKey;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v9;
      if ( v9 < 0 )
        goto LABEL_10;
      goto LABEL_36;
    }
    PolicyLanguageSpec = 0;
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_13:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    v7 = CurrentUserKey;
  }
  if ( Handle )
  {
    NtClose(Handle);
    v7 = CurrentUserKey;
  }
  if ( v7 )
    CloseGlobalizationUserSettingsKey(v7);
  if ( PolicyLanguageSpec >= 0 )
  {
    if ( *a2 )
      return (unsigned int)PolicyLanguageSpec;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return (unsigned int)PolicyLanguageSpec;
    PolicyLanguageSpec = -1073741801;
LABEL_43:
    *a2 = (__int64)v6;
    return (unsigned int)PolicyLanguageSpec;
  }
  if ( a2 )
  {
    v14 = (void *)*a2;
    if ( (void *)*a2 != v6 )
    {
      if ( v14 )
        RtlpMuiRegFreeStringPool(v14);
      goto LABEL_43;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
