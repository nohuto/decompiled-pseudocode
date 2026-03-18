/*
 * XREFs of ?_GetDigitizerFlags@@YAKXZ @ 0x1C00EA508
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 _GetDigitizerFlags(void)
{
  unsigned int v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+94h] [rbp+3Bh]
  int v9; // [rsp+98h] [rbp+3Fh]
  unsigned int v10; // [rsp+9Ch] [rbp+43h]

  v0 = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC\\");
  RtlInitUnicodeString(&ValueName, L"IsTabletPC");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v8 == 4
      && v9 == 4 )
    {
      v0 = v10;
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
