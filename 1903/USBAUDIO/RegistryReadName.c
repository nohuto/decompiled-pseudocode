/*
 * XREFs of RegistryReadName @ 0x1C0028054
 * Callers:
 *     PropertyGetPinName @ 0x1C00254C0 (PropertyGetPinName.c)
 * Callees:
 *     memset @ 0x1C0012700 (memset.c)
 *     RegistryReadNameValue @ 0x1C0027E28 (RegistryReadNameValue.c)
 */

NTSTATUS __fastcall RegistryReadName(__int64 a1, const GUID *a2, unsigned int a3, void *a4, ULONG *a5)
{
  ULONG *v9; // rdi
  struct _DEVICE_OBJECT *v10; // rcx
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  int NameValue; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v9 = a5;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  *a5 = 0;
  v10 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = IoOpenDeviceRegistryKey(v10, 2u, 0x20019u, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MediaCategories");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(DeviceRegKey);
    DeviceRegKey = 0LL;
    if ( v12 < 0
      || (NameValue = RegistryReadNameValue(KeyHandle, a2, a3, a4, v9),
          ZwClose(KeyHandle),
          KeyHandle = 0LL,
          NameValue < 0)
      && NameValue != -2147483643
      && NameValue != -1073741789 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MediaCategories");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      NameValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( NameValue >= 0 )
      {
        NameValue = RegistryReadNameValue(KeyHandle, a2, a3, a4, v9);
        ZwClose(KeyHandle);
      }
    }
    return NameValue;
  }
  return result;
}
