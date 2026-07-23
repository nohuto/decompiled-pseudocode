/*
 * XREFs of IoWMISuggestInstanceName @ 0x1408B3690
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140826C00 (IoOpenDeviceInterfaceRegistryKey.c)
 */

NTSTATUS __stdcall IoWMISuggestInstanceName(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PUNICODE_STRING SymbolicLinkName,
        BOOLEAN CombineNames,
        PUNICODE_STRING SuggestedInstanceName)
{
  int DeviceProperty; // ebx
  NTSTATUS result; // eax
  unsigned __int16 v10; // cx
  PVOID PoolWithTag; // rdi
  NTSTATUS v12; // eax
  unsigned __int16 *v13; // r14
  const WCHAR *v14; // r15
  ULONG v15; // r12d
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-20h] BYREF
  ULONG Length; // [rsp+34h] [rbp-1Ch] BYREF
  HANDLE DeviceInterfaceRegKey; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF

  DeviceProperty = -1073741776;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v10 = 0;
  PoolWithTag = 0LL;
  BufferLength = 0;
  if ( PhysicalDeviceObject )
  {
    result = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    DeviceProperty = result;
    if ( result == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x70696D57u);
      if ( !PoolWithTag )
        return -1073741670;
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyDeviceDescription,
                         BufferLength,
                         PoolWithTag,
                         &BufferLength);
      if ( DeviceProperty < 0 )
        goto LABEL_35;
    }
    else if ( result < 0 )
    {
      return result;
    }
    v10 = BufferLength;
  }
  if ( !SymbolicLinkName )
  {
    if ( PoolWithTag )
    {
      SuggestedInstanceName->Buffer = (wchar_t *)PoolWithTag;
      SuggestedInstanceName->Length = v10 - 2;
      SuggestedInstanceName->MaximumLength = v10;
    }
    else
    {
      SuggestedInstanceName->Buffer = 0LL;
      *(_DWORD *)&SuggestedInstanceName->Length = 0;
    }
    return DeviceProperty;
  }
  DeviceProperty = IoOpenDeviceInterfaceRegistryKey(SymbolicLinkName, 0xF003Fu, &DeviceInterfaceRegKey);
  if ( DeviceProperty >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v12 = ZwQueryValueKey(DeviceInterfaceRegKey, &ValueName, KeyValueFullInformation, 0LL, 0, &Length);
    DeviceProperty = v12;
    if ( v12 == -2147483643 || v12 == -1073741789 )
    {
      v13 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x70696D57u);
      if ( v13 )
      {
        DeviceProperty = ZwQueryValueKey(
                           DeviceInterfaceRegKey,
                           &ValueName,
                           KeyValueFullInformation,
                           v13,
                           Length,
                           &Length);
        if ( DeviceProperty >= 0 )
        {
          v14 = (unsigned __int16 *)((char *)v13 + *((unsigned int *)v13 + 2));
          if ( CombineNames )
          {
            v15 = *((_DWORD *)v13 + 3) + BufferLength + 2;
            v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x70696D57u);
            if ( v16 )
            {
              SuggestedInstanceName->Buffer = v16;
              SuggestedInstanceName->Length = 0;
              SuggestedInstanceName->MaximumLength = v15;
              if ( PoolWithTag )
                RtlAppendUnicodeToString(SuggestedInstanceName, (PCWSTR)PoolWithTag);
              RtlAppendUnicodeToString(SuggestedInstanceName, L"_");
              RtlAppendUnicodeToString(SuggestedInstanceName, v14);
            }
            else
            {
              DeviceProperty = -1073741670;
            }
            if ( PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              PoolWithTag = 0LL;
            }
          }
          else
          {
            if ( PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              PoolWithTag = 0LL;
            }
            v17 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *((unsigned int *)v13 + 3), 0x70696D57u);
            if ( v17 )
            {
              SuggestedInstanceName->Buffer = v17;
              SuggestedInstanceName->Length = 0;
              SuggestedInstanceName->MaximumLength = v13[6];
              RtlAppendUnicodeToString(SuggestedInstanceName, v14);
            }
            else
            {
              DeviceProperty = -1073741670;
            }
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    ZwClose(DeviceInterfaceRegKey);
  }
  if ( !PoolWithTag || DeviceProperty >= 0 )
    return DeviceProperty;
LABEL_35:
  ExFreePoolWithTag(PoolWithTag, 0);
  return DeviceProperty;
}
