/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C00C8240
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C00C83D8 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00C84BC (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00C927C (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00C93DC (PpRegStateUpdateStackCreationSettings.c)
 */

NTSTATUS __fastcall IoDevObjCreateDeviceSecure(
        _DRIVER_OBJECT *DriverObject,
        unsigned int DeviceExtensionSize,
        _UNICODE_STRING *DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        const _UNICODE_STRING *DefaultSDDLString,
        const _GUID *DeviceClassGuid,
        _DEVICE_OBJECT **DeviceObject)
{
  _DEVICE_OBJECT **v9; // r15
  void *v10; // rbx
  ULONG Characteristics; // r12d
  NTSTATUS result; // eax
  char Flags; // r14
  NTSTATUS Device; // edi
  ULONG v16; // r9d
  void *securityDescriptor; // [rsp+40h] [rbp-40h] BYREF
  STACK_CREATION_SETTINGS stackSettings; // [rsp+48h] [rbp-38h] BYREF
  STACK_CREATION_SETTINGS updateSettings; // [rsp+60h] [rbp-20h] BYREF

  v9 = DeviceObject;
  v10 = 0LL;
  DeviceObject = 0LL;
  Characteristics = DeviceCharacteristics;
  *(_QWORD *)&stackSettings.Flags = 0LL;
  *v9 = 0LL;
  stackSettings.SecurityDescriptor = 0LL;
  *(_QWORD *)&stackSettings.Characteristics = 0LL;
  if ( !DeviceName && (DeviceCharacteristics & 0x80u) == 0 )
    return -1073741811;
  if ( DeviceClassGuid )
  {
    result = PpRegStateReadCreateClassCreationSettings(DeviceClassGuid, DriverObject, &stackSettings);
    if ( result < 0 )
      return result;
    v10 = stackSettings.SecurityDescriptor;
  }
  Flags = stackSettings.Flags;
  if ( (stackSettings.Flags & 2) != 0 )
    goto LABEL_11;
  Device = SeSddlSecurityDescriptorFromSDDL(DefaultSDDLString, DeviceExtensionSize, &securityDescriptor);
  if ( Device >= 0 )
  {
    v10 = securityDescriptor;
    Flags = 2;
    stackSettings.Flags = 2;
    stackSettings.SecurityDescriptor = securityDescriptor;
    if ( !DeviceClassGuid
      || (*(_QWORD *)&updateSettings.Flags = 2LL,
          *(_QWORD *)&updateSettings.Characteristics = 0LL,
          updateSettings.SecurityDescriptor = securityDescriptor,
          Device = PpRegStateUpdateStackCreationSettings(DeviceClassGuid, &updateSettings),
          Device >= 0) )
    {
LABEL_11:
      v16 = DeviceType;
      if ( (stackSettings.Flags & 1) != 0 )
        v16 = stackSettings.DeviceType;
      if ( (stackSettings.Flags & 4) != 0 )
        Characteristics = stackSettings.Characteristics;
      if ( (stackSettings.Flags & 8) != 0 )
        Exclusive = stackSettings.Exclusivity;
      Device = IoCreateDevice(
                 DriverObject,
                 DeviceExtensionSize,
                 DeviceName,
                 v16,
                 Characteristics,
                 Exclusive,
                 (PDEVICE_OBJECT *)&DeviceObject);
      if ( Device >= 0 )
      {
        Device = IopDevObjApplyPostCreationSettings((_DEVICE_OBJECT *)DeviceObject, &stackSettings);
        if ( Device >= 0 )
          *v9 = (_DEVICE_OBJECT *)DeviceObject;
        else
          IoDeleteDevice((PDEVICE_OBJECT)DeviceObject);
      }
    }
  }
  if ( (Flags & 2) != 0 )
    ExFreePoolWithTag(v10, 0);
  return Device;
}
