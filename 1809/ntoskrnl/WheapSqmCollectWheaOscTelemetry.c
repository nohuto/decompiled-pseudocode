/*
 * XREFs of WheapSqmCollectWheaOscTelemetry @ 0x140321C24
 * Callers:
 *     WheapSqmWaitWorkerRoutine @ 0x1408DE760 (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WheapSqmSetDword @ 0x1408DE734 (WheapSqmSetDword.c)
 */

__int64 WheapSqmCollectWheaOscTelemetry()
{
  unsigned int v0; // ebx
  BOOL v1; // esi
  _DWORD *PoolWithTag; // rdi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  v0 = 0;
  v1 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x61656857u);
    if ( PoolWithTag )
    {
      RtlInitUnicodeString(&ValueName, L"WHEAOSCImplemented");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x10u, &ResultLength) >= 0
        && ResultLength == 16 )
      {
        v1 = PoolWithTag[3] != 0;
      }
      RtlInitUnicodeString(&ValueName, L"APEIOSCGranted");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x10u, &ResultLength) >= 0
        && ResultLength == 16
        && PoolWithTag[3] )
      {
        v0 = 1;
      }
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
    ZwClose(KeyHandle);
  }
  WheapSqmSetDword(7208LL, v1);
  return WheapSqmSetDword(7207LL, v0);
}
