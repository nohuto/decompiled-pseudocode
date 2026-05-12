/*
 * XREFs of RaidUnitSetDefaultWriteCachePolicy @ 0x1C00488C0
 * Callers:
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006B340 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidUnitSetDefaultWriteCachePolicy(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS RegistryValues; // eax
  int ValueData; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  void *DeviceRegKey; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v10[42]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = 0;
  ValueData = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 1568) & 0x10) != 0 )
  {
    if ( KeGetCurrentIrql() )
      return (unsigned int)-1056964600;
    if ( IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 8), 1u, 0x2001Fu, &DeviceRegKey) < 0 )
      goto LABEL_6;
    RtlInitUnicodeString(&DestinationString, L"Disk");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    {
      RegistryValues = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( RegistryValues >= 0 )
        RegistryValues = -1073741772;
    }
    else
    {
      memset(v10, 0, sizeof(v10));
      v10[3] = &ValueData;
      LODWORD(v10[1]) = 288;
      v10[5] = &ValueData;
      v10[2] = L"UserWriteCacheSetting";
      LODWORD(v10[4]) = 67108868;
      LODWORD(v10[6]) = 4;
      RegistryValues = RtlQueryRegistryValuesEx(1073741828LL, KeyHandle, v10, 0LL, 0LL);
    }
    if ( RegistryValues == -1073741772 )
    {
      ValueData = 1;
      RegistryValues = RtlWriteRegistryValue(
                         0x40000000u,
                         (PCWSTR)KeyHandle,
                         L"UserWriteCacheSetting",
                         4u,
                         &ValueData,
                         4u);
    }
    if ( RegistryValues < 0 )
LABEL_6:
      v1 = -1056964607;
  }
  else
  {
    v1 = -1056964601;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
