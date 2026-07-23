/*
 * XREFs of CmpInitializeHardwareConfiguration @ 0x1409C2C54
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpSetupConfigurationTree @ 0x1409C32E8 (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpInitializeHardwareConfiguration(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDeviceMapName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result >= 0 )
    {
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      if ( CmpConfigurationData )
      {
        if ( v1 )
          LODWORD(v1) = CmpSetupConfigurationTree(v1, KeyHandle, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        ExFreePoolWithTag(CmpConfigurationData, 0);
        CmpConfigurationData = 0LL;
      }
      else
      {
        LODWORD(v1) = -1073741670;
      }
      ZwClose(KeyHandle);
      return v1;
    }
  }
  return result;
}
