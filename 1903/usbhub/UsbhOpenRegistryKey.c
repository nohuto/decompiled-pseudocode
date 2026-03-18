/*
 * XREFs of UsbhOpenRegistryKey @ 0x1C005E99C
 * Callers:
 *     UsbhUxdShutdown @ 0x1C005EEC0 (UsbhUxdShutdown.c)
 * Callees:
 *     memset @ 0x1C002CA00 (memset.c)
 */

NTSTATUS __fastcall UsbhOpenRegistryKey(PHANDLE KeyHandle)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes);
}
