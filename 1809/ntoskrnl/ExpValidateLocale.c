/*
 * XREFs of ExpValidateLocale @ 0x1408CE0B8
 * Callers:
 *     NtSetDefaultLocale @ 0x14071B960 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     IsPseudoLocale @ 0x1403195A4 (IsPseudoLocale.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall ExpValidateLocale(int a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  NTSTATUS v3; // edi
  unsigned int v4; // eax
  WCHAR *v5; // rdx
  __int64 v6; // rcx
  WCHAR *v7; // rdi
  __int64 v8; // rdx
  ULONG ResultLength; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v13; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v16; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v17; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v18; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES v20; // [rsp+D8h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES v21; // [rsp+108h] [rbp+0h] BYREF
  WCHAR SourceString[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+178h] [rbp+70h] BYREF
  int v24; // [rsp+17Ch] [rbp+74h]
  unsigned int v25; // [rsp+180h] [rbp+78h]
  WCHAR v26[122]; // [rsp+184h] [rbp+7Ch] BYREF
  char v27; // [rsp+278h] [rbp+170h] BYREF

  v1 = -1073741811;
  if ( a1 == 3072 || IsPseudoLocale(a1) )
    return 0LL;
  *(_DWORD *)&String.Length = 2097184;
  String.Buffer = (wchar_t *)&v27;
  v3 = RtlIntegerToUnicodeString(v2, 0x10u, &String);
  if ( v3 >= 0 )
  {
    v4 = String.Length >> 1;
    v5 = SourceString;
    if ( v4 < 8 )
    {
      v6 = 8 - v4;
      v7 = SourceString;
      v8 = (unsigned int)v6;
      while ( v6 )
      {
        *v7++ = 48;
        --v6;
      }
      v5 = &SourceString[v8];
    }
    *v5 = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 32;
    RtlAppendUnicodeToString(&DestinationString, String.Buffer);
    RtlInitUnicodeString(&v16, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Locale");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v16;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(
        &v17,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Locale\\Alternate Sorts");
      v20.Length = 48;
      v20.ObjectName = &v17;
      v20.RootDirectory = 0LL;
      v20.Attributes = 576;
      *(_OWORD *)&v20.SecurityDescriptor = 0LL;
      v3 = ZwOpenKey(&v13, 0x80000000, &v20);
      if ( v3 >= 0 )
      {
        RtlInitUnicodeString(&v18, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language Groups");
        v21.Length = 48;
        v21.ObjectName = &v18;
        v21.RootDirectory = 0LL;
        v21.Attributes = 576;
        *(_OWORD *)&v21.SecurityDescriptor = 0LL;
        v3 = ZwOpenKey(&Handle, 0x80000000, &v21);
        if ( v3 >= 0 )
        {
          v3 = ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength);
          if ( v3 >= 0
            || (v3 = ZwQueryValueKey(
                       v13,
                       &DestinationString,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       0x100u,
                       &ResultLength),
                v3 >= 0) )
          {
            if ( v25 > 2 )
            {
              RtlInitUnicodeString(&DestinationString, v26);
              v3 = ZwQueryValueKey(
                     Handle,
                     &DestinationString,
                     KeyValuePartialInformation,
                     KeyValueInformation,
                     0x100u,
                     &ResultLength);
              if ( v3 >= 0 && v24 == 1 && v25 > 2 && v26[0] == 49 )
                v1 = v26[1] != 0 ? 0xC000000D : 0;
            }
          }
          ZwClose(Handle);
        }
        ZwClose(v13);
      }
      ZwClose(KeyHandle);
    }
  }
  if ( v3 >= 0 )
    return v1;
  return (unsigned int)v3;
}
