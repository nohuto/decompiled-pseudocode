/*
 * XREFs of ExpIsValidUILanguage @ 0x1408CBABC
 * Callers:
 *     ExpGetCurrentUserUILanguage @ 0x14071AED0 (ExpGetCurrentUserUILanguage.c)
 *     ExpGetUILanguagePolicy @ 0x14071B000 (ExpGetUILanguagePolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
 */

bool __fastcall ExpIsValidUILanguage(const WCHAR *a1)
{
  bool v1; // bl
  int v2; // edx
  const WCHAR *v3; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v10; // [rsp+84h] [rbp-7Ch]
  __int16 v11; // [rsp+8Ch] [rbp-74h]

  v1 = 0;
  v2 = 0;
  if ( *a1 )
  {
    v3 = a1;
    do
    {
      ++v2;
      ++v3;
    }
    while ( *v3 );
  }
  if ( v2 >= 8 )
    a1 += 4;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140401D20;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v10 == 1 )
    {
      v1 = v11 == 49;
    }
    ZwClose(KeyHandle);
  }
  return v1;
}
