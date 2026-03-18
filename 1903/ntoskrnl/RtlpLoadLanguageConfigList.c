/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x140766194
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140765814 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     RtlpPopulateLanguageConfigList @ 0x140765A1C (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x140765BAC (RtlpMuiRegCreateLanguageConfigList.c)
 *     LdrpOpenKey @ 0x140766360 (LdrpOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140944D50 (RtlpLoadPolicyLanguageSpec.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // eax
  int PolicyLanguageSpec; // ebx
  void *v11; // rcx
  _QWORD *LanguageConfigList; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a2 && a3 )
  {
    v3 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    if ( (int)LdrpOpenKey(&DestinationString, 0LL, v6, &Handle) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_6;
      NtClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v8 = LdrpOpenKey(&DestinationString, 0LL, v7, &Handle);
    PolicyLanguageSpec = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741772 )
        PolicyLanguageSpec = 0;
    }
    else
    {
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(Handle, a2, a3);
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_6:
  if ( Handle )
    NtClose(Handle);
  if ( PolicyLanguageSpec < 0 )
  {
    if ( a2 )
    {
      v11 = (void *)*a2;
      if ( *a2 != v3 )
      {
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        goto LABEL_22;
      }
    }
  }
  else if ( !*a2 )
  {
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1);
    *a2 = (__int64)LanguageConfigList;
    if ( !LanguageConfigList )
    {
      PolicyLanguageSpec = -1073741801;
LABEL_22:
      *a2 = v3;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
