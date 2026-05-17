/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x180008A20
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpInitializeUserList @ 0x18000EC54 (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x180015318 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x180005F60 (RtlpMuiRegFreeStringPool.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009204 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180009360 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800FD1B0 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FD248 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x1800FF1A8 (RtlpPopulateLanguageConfigList.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r12
  HANDLE v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 LanguageConfigList; // rax
  int v14; // eax
  __int64 v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE v17; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v19; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  __int128 v25; // [rsp+70h] [rbp-10h]
  char v26; // [rsp+C8h] [rbp+48h] BYREF
  char v27; // [rsp+D8h] [rbp+58h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    v21 = 48;
    p_DestinationString = &DestinationString;
    v22 = 0LL;
    v24 = 64;
    v25 = 0LL;
    if ( (int)NtOpenKey(&v17, 131097LL, &v21) >= 0 )
    {
      v11 = RtlpLoadPolicyLanguageSpec(v17, a3, &v27, v16);
      if ( v11 >= 0 )
      {
LABEL_12:
        v7 = Handle;
        goto LABEL_13;
      }
      if ( a1 == 8 )
      {
        v26 = 0;
        if ( !(unsigned int)RtlpHasMachineUILock(v17, &v26) && v26 == 1 )
          a1 = 4;
      }
      NtClose(v17);
      v17 = 0LL;
    }
    v9 = OpenGlobalizationUserSettingsKey(0x2000000LL, v8, &Handle);
    v7 = Handle;
    if ( v9 < 0 )
      v7 = 0LL;
    Handle = v7;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( v7 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          v17 = 0LL;
          p_DestinationString = &DestinationString;
          v21 = 48;
          v22 = v7;
          v24 = 64;
          v25 = 0LL;
          v14 = NtOpenKey(&v17, 131097LL, &v21);
        }
        else
        {
          v14 = -1073741772;
        }
        if ( v14 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          v17 = 0LL;
          p_DestinationString = &DestinationString;
          v21 = 48;
          v22 = 0LL;
          v24 = 64;
          v25 = 0LL;
          v10 = NtOpenKey(&v17, 131097LL, &v21);
          v11 = v10;
          if ( v10 < 0 )
          {
LABEL_10:
            if ( v10 == -1073741772 )
              v11 = 0;
            goto LABEL_12;
          }
        }
      }
LABEL_38:
      v11 = RtlpPopulateLanguageConfigList(v17, a2, a3);
      goto LABEL_12;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      v22 = v7;
      p_DestinationString = &DestinationString;
      v24 = 64;
      v21 = 48;
      v25 = 0LL;
      if ( (int)NtOpenKey(&v19, 131097LL, &v21) >= 0 )
      {
        v11 = RtlpLoadPolicyLanguageSpec(v19, a3, &v27, v16);
        if ( v11 >= 0 )
          goto LABEL_12;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      v22 = Handle;
      v17 = 0LL;
      p_DestinationString = &DestinationString;
      v21 = 48;
      v24 = 64;
      v25 = 0LL;
      v10 = NtOpenKey(&v17, 131097LL, &v21);
      v11 = v10;
      if ( v10 < 0 )
        goto LABEL_10;
      goto LABEL_38;
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_13:
  if ( v17 )
  {
    NtClose(v17);
    v7 = Handle;
  }
  if ( v19 )
  {
    NtClose(v19);
    v7 = Handle;
  }
  if ( v7 )
    NtClose(v7);
  if ( v11 >= 0 )
  {
    if ( *a2 )
      return (unsigned int)v11;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return (unsigned int)v11;
    v11 = -1073741801;
LABEL_45:
    *a2 = v6;
    return (unsigned int)v11;
  }
  if ( a2 )
  {
    v15 = *a2;
    if ( *a2 != v6 )
    {
      if ( v15 )
        RtlpMuiRegFreeStringPool(v15);
      goto LABEL_45;
    }
  }
  return (unsigned int)v11;
}
