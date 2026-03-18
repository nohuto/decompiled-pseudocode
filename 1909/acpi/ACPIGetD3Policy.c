/*
 * XREFs of ACPIGetD3Policy @ 0x1C0014650
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

NTSTATUS __fastcall ACPIGetD3Policy(__int64 a1, bool *a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int64 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 736);
  DeviceRegKey = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation = 0LL;
  v13 = 0LL;
  v14 = 0;
  result = IoOpenDeviceRegistryKey(v4, 1u, 0xF003Fu, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"e5b3b5ac-9725-4f78-963f-03dfb1d828c7");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    ZwClose(DeviceRegKey);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"D3ColdSupported");
      v6 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      ZwClose(KeyHandle);
      if ( v6 >= 0 )
        *a2 = HIDWORD(v13) != 0;
    }
    return v6;
  }
  return result;
}
