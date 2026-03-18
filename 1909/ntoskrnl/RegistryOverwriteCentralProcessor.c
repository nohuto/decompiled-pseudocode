/*
 * XREFs of RegistryOverwriteCentralProcessor @ 0x140A386A4
 * Callers:
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  UNICODE_STRING Data; // [rsp+60h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-1h] BYREF
  UNICODE_STRING v13; // [rsp+B0h] [rbp+Fh] BYREF
  _DWORD KeyInformation[10]; // [rsp+C0h] [rbp+1Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  *(_QWORD *)&Data.Length = 0LL;
  Data.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
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
        *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
        RtlInitUnicodeString(&v13, (PCWSTR)&KeyInformation[4]);
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
