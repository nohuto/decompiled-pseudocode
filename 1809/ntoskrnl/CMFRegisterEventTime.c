/*
 * XREFs of CMFRegisterEventTime @ 0x1408DA548
 * Callers:
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall CMFRegisterEventTime(__int16 a1)
{
  NTSTATUS result; // eax
  const WCHAR *v3; // rdx
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  __int64 v8; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING v10; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING v11; // [rsp+88h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C8h] [rbp+2Fh] BYREF
  int v14; // [rsp+CCh] [rbp+33h]
  _BYTE Data[12]; // [rsp+D4h] [rbp+3Bh] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\CMF\\SqmData");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    v8 = MEMORY[0xFFFFF78000000014];
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&ValueName, L"CMFStartTime");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v14 == 11 )
      {
        RtlInitUnicodeString(&v10, L"CMFLastStartTime");
        ZwSetValueKey(KeyHandle, &v10, 0, 0xBu, Data, 8u);
      }
      RtlInitUnicodeString(&ValueName, L"SystemStartTime");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v14 == 11 )
      {
        RtlInitUnicodeString(&v11, L"SystemLastStartTime");
        ZwSetValueKey(KeyHandle, &v11, 0, 0xBu, Data, 8u);
      }
    }
    else
    {
      if ( a1 == 2 )
      {
        v3 = L"CMFStartTime";
      }
      else
      {
        if ( a1 != 4 )
          return -1073741811;
        v3 = L"CMFStopTime";
      }
      RtlInitUnicodeString(&ValueName, v3);
    }
    v4 = ZwSetValueKey(KeyHandle, &ValueName, 0, 0xBu, &v8, 8u);
    ZwClose(KeyHandle);
    return v4;
  }
  return result;
}
