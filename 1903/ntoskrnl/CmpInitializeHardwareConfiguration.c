/*
 * XREFs of CmpInitializeHardwareConfiguration @ 0x140A0B810
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpSetupConfigurationTree @ 0x140A0BF08 (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpInitializeHardwareConfiguration(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDeviceMapName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
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
