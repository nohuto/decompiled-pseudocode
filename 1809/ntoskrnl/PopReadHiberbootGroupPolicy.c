/*
 * XREFs of PopReadHiberbootGroupPolicy @ 0x1406E1C58
 * Callers:
 *     PopReadHiberbootPolicy @ 0x1406E1B8C (PopReadHiberbootPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
 */

__int64 __fastcall PopReadHiberbootGroupPolicy(_BYTE *a1)
{
  NTSTATUS v2; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int64 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  __int64 v9; // [rsp+88h] [rbp+3Fh]
  int v10; // [rsp+90h] [rbp+47h]

  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\System");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HiberbootEnabled");
    KeyValueInformation = 0LL;
    v9 = 0LL;
    v10 = 0;
    v2 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v2 >= 0 )
      *a1 = BYTE4(v9);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v2;
}
