/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C010BFA0
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C010C0E4 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C010C2B4 (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01290C4 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C0129224 (PpRegStateUpdateStackCreationSettings.c)
 */

__int64 __fastcall IoDevObjCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        __int64 a2,
        _UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r15
  void *v10; // rbx
  ULONG DeviceCharacteristics; // r12d
  char v13; // r14
  NTSTATUS updated; // edi
  ULONG v15; // r9d
  __int64 result; // rax
  void *v18; // [rsp+40h] [rbp-40h] BYREF
  ULONG DeviceType[2]; // [rsp+48h] [rbp-38h] BYREF
  void *v20; // [rsp+50h] [rbp-30h]
  ULONG v21[2]; // [rsp+58h] [rbp-28h]
  _QWORD v22[4]; // [rsp+60h] [rbp-20h] BYREF
  ULONG DeviceExtensionSize; // [rsp+C8h] [rbp+48h]

  DeviceExtensionSize = a2;
  v9 = DeviceObject;
  v10 = 0LL;
  DeviceObject = 0LL;
  DeviceCharacteristics = a5;
  *(_QWORD *)DeviceType = 0LL;
  *(_QWORD *)&v9->Type = 0LL;
  v20 = 0LL;
  *(_QWORD *)v21 = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
    return 3221225485LL;
  if ( a8 )
  {
    result = PpRegStateReadCreateClassCreationSettings(a8, DriverObject, DeviceType);
    if ( (int)result < 0 )
      return result;
    v10 = v20;
  }
  v13 = DeviceType[0];
  if ( (DeviceType[0] & 2) != 0 )
    goto LABEL_6;
  updated = SeSddlSecurityDescriptorFromSDDL(a7, a2, &v18);
  if ( updated >= 0 )
  {
    v10 = v18;
    v13 = 2;
    DeviceType[0] = 2;
    v20 = v18;
    if ( !a8
      || (v22[0] = 2LL,
          v22[2] = 0LL,
          v22[1] = v18,
          updated = PpRegStateUpdateStackCreationSettings(a8, v22),
          updated >= 0) )
    {
LABEL_6:
      v15 = a4;
      if ( (DeviceType[0] & 1) != 0 )
        v15 = DeviceType[1];
      if ( (DeviceType[0] & 4) != 0 )
        DeviceCharacteristics = v21[0];
      if ( (DeviceType[0] & 8) != 0 )
        a6 = v21[1];
      updated = IoCreateDevice(DriverObject, DeviceExtensionSize, a3, v15, DeviceCharacteristics, a6, &DeviceObject);
      if ( updated >= 0 )
      {
        updated = IopDevObjApplyPostCreationSettings(DeviceObject);
        if ( updated < 0 )
          IoDeleteDevice(DeviceObject);
        else
          *(_QWORD *)&v9->Type = DeviceObject;
      }
    }
  }
  if ( (v13 & 2) != 0 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)updated;
}
