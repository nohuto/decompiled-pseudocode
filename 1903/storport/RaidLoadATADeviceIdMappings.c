/*
 * XREFs of RaidLoadATADeviceIdMappings @ 0x1C0020B9C
 * Callers:
 *     DllInitialize @ 0x1C0020020 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaidAddATADeviceIdMapping @ 0x1C0038DC0 (RaidAddATADeviceIdMapping.c)
 */

int RaidLoadATADeviceIdMappings()
{
  int result; // eax
  ULONG Length; // edi
  wchar_t *PoolWithTag; // rbx
  ULONG v3; // esi
  NTSTATUS v4; // eax
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  GUID Guid; // [rsp+98h] [rbp+37h] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 20;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x48536152u);
    if ( PoolWithTag )
    {
      v3 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, Length, (PULONG)&NumberOfBytes);
          if ( v4 < 0 )
            break;
          if ( *((_DWORD *)PoolWithTag + 4) == 76 )
          {
            *(_DWORD *)&GuidString.Length = 4980812;
            GuidString.Buffer = PoolWithTag + 10;
            if ( RtlGUIDFromString(&GuidString, &Guid) >= 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
              RaidAddATADeviceIdMapping((NTSTRSAFE_PCSTR)PoolWithTag + *((unsigned int *)PoolWithTag + 2));
              ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
            }
          }
          ++v3;
        }
        if ( v4 != -2147483643 && v4 != -1073741789 )
          break;
        Length = NumberOfBytes;
        ExFreePoolWithTag(PoolWithTag, 0x48536152u);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x48536152u);
        if ( !PoolWithTag )
          return ZwClose(KeyHandle);
      }
      ExFreePoolWithTag(PoolWithTag, 0x48536152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
