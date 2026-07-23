/*
 * XREFs of sub_1800F0CD8 @ 0x1800F0CD8
 * Callers:
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

int __fastcall sub_1800F0CD8(unsigned __int16 *a1)
{
  const WCHAR *i; // rdx
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int64 KeyValueInformation; // [rsp+90h] [rbp-70h] BYREF
  __int128 v9; // [rsp+98h] [rbp-68h]
  _BYTE v10[512]; // [rsp+B0h] [rbp-50h] BYREF

  for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  KeyHandle = 0LL;
  memset(v10, 0, sizeof(v10));
  *(_DWORD *)&Destination.Length = 0x2000000;
  KeyValueInformation = 0LL;
  v9 = 0uLL;
  Destination.Buffer = (PWCH)v10;
  RtlAppendUnicodeStringToString(&Destination, &stru_180119578);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180119588,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x18u,
               &ResultLength);
    if ( result >= 0 )
    {
      result = -10000000 * DWORD1(v9);
      DueTime.QuadPart = -10000000LL * *(_QWORD *)((char *)&v9 + 4);
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
