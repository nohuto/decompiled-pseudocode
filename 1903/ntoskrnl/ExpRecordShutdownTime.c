/*
 * XREFs of ExpRecordShutdownTime @ 0x140338680
 * Callers:
 *     ExShutdownSystem @ 0x1405AE3C8 (ExShutdownSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1401C1D50 (ZwFlushKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int ExpRecordShutdownTime()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF
  __int64 Data; // [rsp+98h] [rbp+18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  Data = MEMORY[0xFFFFF78000000014];
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"ShutdownTime");
    ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, &Data, 8u);
    ZwFlushKey(KeyHandle);
    return ZwClose(KeyHandle);
  }
  return result;
}
