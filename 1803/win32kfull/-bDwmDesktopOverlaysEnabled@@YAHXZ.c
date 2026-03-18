/*
 * XREFs of ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1C00B4EA0
 * Callers:
 *     GreDwmStartup @ 0x1C00B4988 (GreDwmStartup.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 bDwmDesktopOverlaysEnabled(void)
{
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+80h] [rbp-80h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\DWM");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"EnableDesktopOverlays");
    ZwQueryValueKey(
      KeyHandle,
      &DestinationString,
      KeyValuePartialInformation,
      KeyValueInformation,
      0x400u,
      &ResultLength);
    ZwClose(KeyHandle);
  }
  return 1LL;
}
