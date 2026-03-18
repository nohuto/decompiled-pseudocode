/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C00C4220
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C00C43C8 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00C44AC (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00C5238 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00C5390 (PpRegStateUpdateStackCreationSettings.c)
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
  _DEVICE_OBJECT **v9; // r13
  NTSTATUS result; // eax
  unsigned int Characteristics; // r15d
  void *v12; // rsi
  unsigned int v13; // r12d
  char Flags; // di
  NTSTATUS Device; // ebx
  ULONG v16; // r9d
  ULONG v17; // edx
  void *securityDescriptor; // [rsp+40h] [rbp-40h] BYREF
  STACK_CREATION_SETTINGS stackSettings; // [rsp+48h] [rbp-38h] BYREF
  STACK_CREATION_SETTINGS updateSettings; // [rsp+60h] [rbp-20h] BYREF

  v9 = DeviceObject;
  DeviceObject = 0LL;
  *v9 = 0LL;
  if ( !DeviceName && (DeviceCharacteristics & 0x80u) == 0 )
    return -1073741811;
  if ( DeviceClassGuid )
  {
    result = PpRegStateReadCreateClassCreationSettings(DeviceClassGuid, DriverObject, &stackSettings);
    if ( result < 0 )
      return result;
    Characteristics = stackSettings.Characteristics;
    v12 = stackSettings.SecurityDescriptor;
    v13 = stackSettings.DeviceType;
    Flags = stackSettings.Flags;
  }
  else
  {
    Flags = 0;
    memset(&stackSettings, 0, sizeof(stackSettings));
    v12 = 0LL;
    v13 = 0;
    Characteristics = 0;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_12;
  Device = SeSddlSecurityDescriptorFromSDDL(DefaultSDDLString, DeviceExtensionSize, &securityDescriptor);
  if ( Device >= 0 )
  {
    v12 = securityDescriptor;
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
LABEL_12:
      v16 = DeviceType;
      v17 = DeviceCharacteristics;
      if ( (stackSettings.Flags & 1) != 0 )
        v16 = v13;
      if ( (stackSettings.Flags & 4) != 0 )
        v17 = Characteristics;
      if ( (stackSettings.Flags & 8) != 0 )
        Exclusive = stackSettings.Exclusivity;
      Device = IoCreateDevice(
                 DriverObject,
                 DeviceExtensionSize,
                 DeviceName,
                 v16,
                 v17,
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
    ExFreePoolWithTag(v12, 0);
  return Device;
}
