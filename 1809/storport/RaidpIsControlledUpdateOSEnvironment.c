/*
 * XREFs of RaidpIsControlledUpdateOSEnvironment @ 0x1C00246B8
 * Callers:
 *     DllInitialize @ 0x1C0023950 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

char RaidpIsControlledUpdateOSEnvironment()
{
  char v0; // di
  const WCHAR *v1; // rsi
  const WCHAR *v2; // rbx
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v10[2]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[132]; // [rsp+C8h] [rbp-40h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)&String1.Length = 2097182;
  v10[0] = *(_OWORD *)L"OneCoreUpdateOS";
  String1.Buffer = (wchar_t *)v10;
  v10[1] = *(_OWORD *)L"pdateOS";
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ProductSuite");
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           &ResultLength) >= 0
      && KeyValueInformation[1] == 7 )
    {
      v1 = (const WCHAR *)((char *)&KeyValueInformation[3] + KeyValueInformation[2]);
      v2 = (const WCHAR *)&KeyValueInformation[3];
      if ( &KeyValueInformation[3] < (_DWORD *)v1 )
      {
        while ( *v2 )
        {
          RtlInitUnicodeString(&String2, v2);
          if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          {
            v0 = 1;
            break;
          }
          v2 += ((unsigned __int64)String2.Length >> 1) + 1;
          if ( v2 >= v1 )
            break;
        }
      }
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
