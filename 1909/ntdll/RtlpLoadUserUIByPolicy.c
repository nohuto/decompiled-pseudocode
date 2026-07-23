/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180009270
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x180009204 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18001564C (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FD248 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800FE598 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  NTSTATUS PolicyLanguageSpec; // ebx
  __int64 v9; // r8
  __int64 LanguageList; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      ObjectAttributes.RootDirectory = a1;
    }
    else
    {
      PolicyLanguageSpec = OpenGlobalizationUserSettingsKey(0x2000000u, v6, &Handle);
      if ( PolicyLanguageSpec < 0 )
        goto LABEL_6;
      ObjectAttributes.RootDirectory = Handle;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PolicyLanguageSpec = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( PolicyLanguageSpec >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( !PolicyLanguageSpec )
      {
        v9 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v9 + 4) < *(_WORD *)(v9 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = 0;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList(*a3);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
        }
        *a3 = LanguageList;
        v9 = LanguageList;
        if ( !LanguageList )
        {
          PolicyLanguageSpec = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_6:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)PolicyLanguageSpec;
}
