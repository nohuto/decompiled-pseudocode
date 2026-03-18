/*
 * XREFs of WmipGetRegistryHideMachine @ 0x1406BFBF8
 * Callers:
 *     WmipGetSMBiosTableData @ 0x1406BFAF8 (WmipGetSMBiosTableData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

bool WmipGetRegistryHideMachine()
{
  int v0; // edi
  _DWORD *PoolWithTag; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v0 = 0;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions");
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HideMachine");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x70696D57u);
      if ( PoolWithTag )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               PoolWithTag,
               ResultLength,
               &ResultLength) >= 0
          && PoolWithTag[1] == 4
          && PoolWithTag[2] == 4 )
        {
          v0 = PoolWithTag[3];
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0 != 0;
}
