/*
 * XREFs of ?_GetDigitizerFlags@@YAKXZ @ 0x1C00D7218
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 _GetDigitizerFlags(void)
{
  unsigned int v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+A0h] [rbp+47h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v0 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
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
    KeyValueInformation = 0uLL;
    v8 = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v0 = HIDWORD(KeyValueInformation);
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
