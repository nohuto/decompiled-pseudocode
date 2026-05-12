/*
 * XREFs of RaidpIsCurrentOsInstallationUpgrade @ 0x1C00215DC
 * Callers:
 *     DllInitialize @ 0x1C00208A0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

bool RaidpIsCurrentOsInstallationUpgrade()
{
  bool v0; // bl
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[272]; // [rsp+80h] [rbp-80h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Upgrade");
    v0 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0;
    ZwClose(KeyHandle);
  }
  return v0;
}
