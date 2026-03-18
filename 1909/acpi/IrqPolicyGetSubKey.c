/*
 * XREFs of IrqPolicyGetSubKey @ 0x1C0096EB4
 * Callers:
 *     PcisuppSetRoutingInfo @ 0x1C0098298 (PcisuppSetRoutingInfo.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C0098398 (IrqPolicySetDeviceAffinity.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009ADA8 (IrqPolicyGetDevicePolicy.c)
 *     PcisuppGetRoutingInfo @ 0x1C009B0DC (PcisuppGetRoutingInfo.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

NTSTATUS __fastcall IrqPolicyGetSubKey(
        PDEVICE_OBJECT DeviceObject,
        PCWSTR SourceString,
        ULONG CreateOptions,
        PHANDLE KeyHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  void *DeviceRegKey; // [rsp+48h] [rbp+7h] BYREF
  void *KeyHandlea; // [rsp+50h] [rbp+Fh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DeviceRegKey = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0xF003Fu, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Interrupt Management");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&KeyHandlea, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    ZwClose(DeviceRegKey);
    if ( v9 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = KeyHandlea;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
      ZwClose(KeyHandlea);
    }
    return v9;
  }
  return result;
}
