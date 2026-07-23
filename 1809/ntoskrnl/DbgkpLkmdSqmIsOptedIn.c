/*
 * XREFs of DbgkpLkmdSqmIsOptedIn @ 0x140813330
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

bool DbgkpLkmdSqmIsOptedIn()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-29h] BYREF
  int v4; // [rsp+50h] [rbp-19h] BYREF
  const wchar_t *v5; // [rsp+58h] [rbp-11h]
  int v6; // [rsp+60h] [rbp-9h] BYREF
  const wchar_t *v7; // [rsp+68h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+37h] BYREF
  int v10; // [rsp+A4h] [rbp+3Bh]
  int v11; // [rsp+A8h] [rbp+3Fh]
  int v12; // [rsp+ACh] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  v5 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows";
  v4 = 8388734;
  v7 = L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows";
  v6 = 7209068;
  ValueName.Buffer = L"CEIPEnable";
  *(_DWORD *)&ValueName.Length = 1441812;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v10 == 4
      && v11 == 4 )
    {
      goto LABEL_5;
    }
    ZwClose(KeyHandle);
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v10 == 4
      && v11 == 4 )
    {
LABEL_5:
      ZwClose(KeyHandle);
      return v12 == 1;
    }
    ZwClose(KeyHandle);
  }
  return 0;
}
