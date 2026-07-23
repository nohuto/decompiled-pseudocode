/*
 * XREFs of PipCheckComputerSupported @ 0x140823D78
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x1406F6E50 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     PipHardwareConfigOpenKey @ 0x14073D5A8 (PipHardwareConfigOpenKey.c)
 */

bool __fastcall PipCheckComputerSupported(PCWSTR SourceString)
{
  int v2; // eax
  HANDLE v3; // rdi
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+88h] [rbp+2Fh] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v2 = PipHardwareConfigOpenKey((__int64)SourceString, 0xF003Fu, &Handle);
  v3 = Handle;
  v4 = v2;
  if ( v2 >= 0 )
  {
    *(_DWORD *)&DestinationString.Length = 1572886;
    DestinationString.Buffer = L"ComputerIds";
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v4 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValueBasicInformation,
             KeyValueInformation,
             0x10u,
             &ResultLength);
      if ( v4 == -2147483643 )
        v4 = 0;
    }
  }
  if ( v3 )
    ZwClose(v3);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4 >= 0;
}
