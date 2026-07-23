/*
 * XREFs of CmLogMcUpdateStatus @ 0x14027FD68
 * Callers:
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408508B4 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlIntegerToChar @ 0x140623930 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     CmpInitializeRegistryNode @ 0x1407620D4 (CmpInitializeRegistryNode.c)
 */

__int64 __fastcall CmLogMcUpdateStatus(ULONG Value, __int64 a2)
{
  NTSTATUS v4; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v9; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v10; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v13[18]; // [rsp+C0h] [rbp-40h] BYREF
  CHAR String[16]; // [rsp+110h] [rbp+10h] BYREF
  char v15; // [rsp+120h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v13, 0, sizeof(v13));
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&v10.Length = 0LL;
  v10.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  Handle = (HANDLE)-1LL;
  v9 = (HANDLE)-1LL;
  KeyHandle = (HANDLE)-1LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1409AF8F0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&v9, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      RtlIntegerToChar(Value, 0xAu, 0xCu, String);
      RtlInitAnsiString(&DestinationString, String);
      *(_DWORD *)&v10.Length = 1572864;
      v10.Buffer = (wchar_t *)&v15;
      RtlAnsiStringToUnicodeString(&v10, &DestinationString, 0);
      ObjectAttributes.RootDirectory = v9;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v10;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) >= 0 )
        goto LABEL_7;
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      if ( !CmpConfigurationData )
      {
        v4 = -1073741670;
        goto LABEL_12;
      }
      v13[6] = 1;
      v13[7] = 1;
      v13[10] = Value;
      v4 = CmpInitializeRegistryNode(
             (unsigned int)v13,
             (_DWORD)KeyHandle,
             (unsigned int)&Handle,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
      ExFreePoolWithTag(CmpConfigurationData, 0);
      CmpConfigurationData = 0LL;
      if ( v4 >= 0 )
      {
LABEL_7:
        RtlInitUnicodeString(&ValueName, L"Update Revision");
        v4 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 8), 8u);
        if ( v4 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Previous Update Revision");
          v4 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 16), 8u);
          if ( v4 >= 0 )
          {
            RtlInitUnicodeString(&ValueName, L"Update Status");
            v4 = ZwSetValueKey(Handle, &ValueName, 0, 4u, (PVOID)(a2 + 4), 4u);
            if ( v4 >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"Platform Specific Field 1");
              v4 = ZwSetValueKey(Handle, &ValueName, 0, 4u, (PVOID)(a2 + 24), 4u);
              if ( v4 >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"Platform Specific Field 2");
                v4 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 28), 4u);
              }
            }
          }
        }
      }
    }
  }
LABEL_12:
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v9 != (HANDLE)-1LL )
    ZwClose(v9);
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
