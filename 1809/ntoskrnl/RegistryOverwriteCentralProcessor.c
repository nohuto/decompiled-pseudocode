/*
 * XREFs of RegistryOverwriteCentralProcessor @ 0x1409F4520
 * Callers:
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

__int64 RegistryOverwriteCentralProcessor()
{
  NTSTATUS v0; // ebx
  ULONG v1; // esi
  ULONG i; // edx
  wchar_t *Buffer; // rbx
  ULONG DataSize; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING Data; // [rsp+90h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-1h] BYREF
  UNICODE_STRING v13; // [rsp+B0h] [rbp+Fh] BYREF
  _BYTE KeyInformation[12]; // [rsp+C0h] [rbp+1Fh] BYREF
  unsigned int v15; // [rsp+CCh] [rbp+2Bh]
  WCHAR SourceString[12]; // [rsp+D0h] [rbp+2Fh] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    v1 = 0;
    for ( i = 0; ; i = v1 )
    {
      v0 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x26u, &ResultLength);
      if ( v0 == -2147483622 )
        break;
      ++v1;
      if ( v0 >= 0 )
      {
        SourceString[(unsigned __int64)v15 >> 1] = 0;
        RtlInitUnicodeString(&v13, SourceString);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v13;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&Data, L"Not Available");
          RtlInitUnicodeString(&ValueName, L"VendorIdentifier");
          Buffer = Data.Buffer;
          DataSize = Data.Length + 2;
          ZwSetValueKey(Handle, &ValueName, 0, 1u, Data.Buffer, DataSize);
          RtlInitUnicodeString(&ValueName, L"ProcessorNameString");
          ZwSetValueKey(Handle, &ValueName, 0, 1u, Buffer, DataSize);
          RtlInitUnicodeString(&ValueName, L"Identifier");
          ZwSetValueKey(Handle, &ValueName, 0, 1u, Buffer, DataSize);
          ZwClose(Handle);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
