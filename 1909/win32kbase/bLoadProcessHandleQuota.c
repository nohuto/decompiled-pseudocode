/*
 * XREFs of bLoadProcessHandleQuota @ 0x1C009097C
 * Callers:
 *     HmgCreate @ 0x1C008E07C (HmgCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 bLoadProcessHandleQuota()
{
  unsigned int v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  __int64 v8; // [rsp+9Ch] [rbp+43h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  gProcessHandleQuota = 10000;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v0 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    RtlInitUnicodeString(&ValueName, L"GDIProcessHandleQuota");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      gProcessHandleQuota = v8;
      if ( (int)v8 < 0 || (unsigned int)v8 > gMaxGdiHandleCount )
        gProcessHandleQuota = 10000;
    }
    v0 = 1;
    ZwClose(KeyHandle);
  }
  return v0;
}
