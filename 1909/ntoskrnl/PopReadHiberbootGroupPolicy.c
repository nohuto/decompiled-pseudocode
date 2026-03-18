/*
 * XREFs of PopReadHiberbootGroupPolicy @ 0x14072A3A0
 * Callers:
 *     PopReadHiberbootPolicy @ 0x14072A2CC (PopReadHiberbootPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 */

__int64 __fastcall PopReadHiberbootGroupPolicy(_BYTE *a1)
{
  NTSTATUS v2; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int64 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  __int64 v9; // [rsp+88h] [rbp+3Fh]
  int v10; // [rsp+90h] [rbp+47h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *a1 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
